class Solution {
public:

    // In this first we check that if the triangle is valid or not
    // to check this we will use triangle basic property 
    //i.e. sum of any two sides is greater than the third side if it is it's valid otherwise not valid

    bool valid(int a,int b,int c){
        if( (a+b>c) && (a+c>b) && (b+c>a) ) return true;
        return false;
    } 
    string triangleType(vector<int>& nums) {
        if(valid(nums[0],nums[1],nums[2])){
            if(nums[0]==nums[1]&&nums[1]==nums[2]) return "equilateral";
            else if(nums[0]!=nums[1]&&nums[1]!=nums[2]&&nums[0]!=nums[2]) return "scalene";
            else return "isosceles";
        }
        return "none";
    }
};