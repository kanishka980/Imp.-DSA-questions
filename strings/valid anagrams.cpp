class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> mp;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto t : mp) {
            if (t.second)
                return false;
        }
        return true;
    }
};
