class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> s_chars;
        unordered_map<char, int> t_chars;

        for (char c: s) {
            s_chars[c]++;
        }
        for (char c: t) {
            t_chars[c]++;
        }

        if (s_chars != t_chars) {
            return false;
        } else {
            return true;
        }
    }


};
