class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>map;
        for(int i=0;i<s.length();i++){
           map[s[i]]++;
        }

        string ans ="";

        for(int i:order){
            if(map.find(i)!=map.end()){
                auto temp = map.find(i);
                int count = temp->second;
                string s(count,i);
                ans+=s;
                map.erase(i);
            }
        }

        for(auto x:map){
            string s(x.second,x.first);
            ans+=s;
        }
        return ans;
    }
};
