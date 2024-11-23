class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        // 1. rotate the matrix 90 degree clockwise
            //first do the the transpose of matrix and then do the reverse of rows
            //toh isse hamara rotated matrix ban jaenga

        // 2. abb gravity effect ko apply karna hai



        //Step 1

        int n=box.size();
        int m=box[0].size();

        //n*m->m*n

        vector<vector<char>>res(m,vector<char>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=box[j][i];
            }
        }
        //reverse each row
        for(auto &it:res){
            reverse(it.begin(),it.end());
        }

        //Step 2

        //Gravity ke liye neeche se iterate karenge
        //agar space mila toh upar wale stone ko waha lee ayenge
        //stone ko->space mein rakh do->stone ki jagah space bana do

        for(int j=0;j<n;j++){
            for(int i=m-1;i>=0;i--){
                if(res[i][j]=='.'){
                    int row=-1;
                    for(int k=i-1;k>=0;k--){
                        if(res[k][j]=='*'){
                            break;
                        }else if(res[k][j]=='#'){
                            row=k;
                            break;
                        }
                    }
                    if(row!=-1){
                        res[i][j]='#';
                        res[row][j]='.';
                    }
                }
            }
        }




        return res;
    }
};