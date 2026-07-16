class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charS;
        int l = 0, res = 0;
        for (int r = 0; r < s.size(); r++){
            
            while (charS.find(s[r]) != charS.end()){
                charS.erase(s[l]);
                l++;
            }

            charS.insert(s[r]);
            res = max (res, r - l + 1);


        }
        return res;
    }
};
