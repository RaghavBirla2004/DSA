class Solution {
public:
    string reverseWords(string s) {

        //By using Two Pointer Apporach 
        reverse(s.begin(),s.end());
        int i = 0,l = 0,r=0;
      int n = s.length();
        while(i<n){
            while(i<n && s[i]!= ' '){
                s[r++] = s[i++];
            }
            if(l<r){
                reverse(s.begin()+l, s.begin()+r);
               s[r] = ' ';
               r++;
               l = r;

            }
            i++;
        }
        return s.substr(0,r-1);

    
        //By using string stream

        // stringstream ss(s);
        // string token = "";
        // string ans = "";

        // while(ss>>token){
        //     ans = token + " "+ ans;
        // }
        // return ans.substr(0,ans.length()-1);
    }
};
