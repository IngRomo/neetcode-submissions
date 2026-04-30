class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> char_count[2];
        if(s.size() != t.size()) {return false;}
        for(size_t i = 0; i < s.size(); i++) {
            char_count[0][s[i]]++;
            char_count[1][t[i]]++;
        }
        if(char_count[0] == char_count[1]) {return true;}
        return false;
    }
};
