class Solution {
public:
    string clearDigits(string s) {
         while (true) {
        
        int dig = -1;
        for (int i = 0; i < s.length(); ++i) {
            if (isdigit(s[i])) {
                dig = i;
                break;
            }
            
        }
             if (dig== -1) break;
              int left = -1;
        for (int i = dig - 1; i >= 0; --i) {
            if (!isdigit(s[i])) {
                left = i;
                break;
            }
        }
             if (left != -1) {
            s.erase(left, 1);
            s.erase(dig - 1, 1); 
        } else {
            s.erase(dig, 1); 
        }
    }

    
    return s;
            
        
         
    }
};