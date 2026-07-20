class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashmap;
        
        for (char c : magazine){
            hashmap[c]++;
        }

        for (int i = 0; i < ransomNote.size(); i++){
            if (--hashmap[ransomNote[i]] < 0){
                return false;
                
            }
        }
        return true;
    }
};