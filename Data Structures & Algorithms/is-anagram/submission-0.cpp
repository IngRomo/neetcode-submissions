class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> char_count[2];
        for(char c : s) {
            char_count[0][c]++;
        }
        for(char c : t) {
            char_count[1][c]++;
        }
        if(char_count[0] == char_count[1]) {return true;}

        return false;
    }
};
