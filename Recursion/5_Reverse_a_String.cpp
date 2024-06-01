class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        if(str.size()==0||str.size()==1){
            return str;
        }
        
        return reverseWord(str.substr(1)) + str[0];
        
        
        // string ans="";
        // for(int i=str.length();i>=0;i--){
        //     ans+=str[i];
        // }
        // return ans;
    }
};
