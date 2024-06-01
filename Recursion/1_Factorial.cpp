class Solution{
public:
    long long int factorial(int n){
        
        if(n==0||n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
        //code here
    //   long long ans=1;
    //   for(int i=n;i>=1;i--){
    //       ans = ans*i;
    //   }
    //   return ans;
    }
};
