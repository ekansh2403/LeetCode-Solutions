class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            //we have found the part in the og string 
            //now we will simply erase it
            
           s.erase(s.find(part),part.length());// start of part, part ke length() tak


        }
        return s;
    }
};