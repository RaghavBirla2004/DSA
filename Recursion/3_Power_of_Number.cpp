class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        int mod = 1e9+7;
           if(N==0){
        return 0;
    }
     if(R==0){
        return 1;
    }
    
    if(R%2==0){
        long long ans = power(N,R/2);
        return (ans%mod * ans%mod)%mod;
    }
    else{
        long long ans = power(N,(R-1)/2);
        return (ans%mod * ans%mod * N%mod)%mod;
    }
    
    
//   return (N%mod*(power(N,R-1))%mod)%mod; 
    }

};
