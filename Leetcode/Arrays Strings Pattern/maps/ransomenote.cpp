 bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;

        for(char ch : ransomNote){
            mp[ch]++;
        }

        for(char ch : magazine){
            if(mp.find(ch) != mp.end()){
                mp[ch]--;
            }
        }

        for(auto it : mp){
            if(it.second > 0){
                return false;
            }
        }

        return true;