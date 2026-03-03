class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(char it:s) mp[it]++;
        for(int i=0; i<t.size(); i++){
            if(mp.find(t[i]) != mp.end()){
                mp[t[i]]--;
            }
            else{
                return false;
            }
        }
        for(auto it:mp){
            if(it.second == 0){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};