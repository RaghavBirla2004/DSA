class Solution {
public:
bool isVowel(char a){
    char c = tolower(a);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    else{
        return false;
    }
}
    string reverseVowels(string s) {
        int left =0,right =s.length()-1;
        while(left < right){
            if(isVowel(s[left])&& isVowel(s[right])){
             swap(s[left], s[right]);
             left++;
             right--;
            }
            else{
                 if (!isVowel(s[left])) left++;
                if (!isVowel(s[right])) right--;
            }
        }
        return s;
        }
           
};
