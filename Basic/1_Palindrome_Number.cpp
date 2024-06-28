class Solution {
public:
    bool isPalindrome(int n) {
         long long int temp = n;
         if(n<0){
            return false;
         }
        long long int rev= 0;
        long long int sum =0;
        while(temp!=0){
            rev = temp%10;
            sum = sum*10 + rev;
            temp = temp/10;
        }
        if(sum==n){
            return true;
        }
       
       return false;
    }
};
