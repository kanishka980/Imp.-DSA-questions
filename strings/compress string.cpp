class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0;
        for (int i = 0; i < chars.size(); i++) {
            char curr = chars[i];
            int c = 0;
            while (i < chars.size() && chars[i] == curr) {
                c++;
                i++;
            }
            if (c == 1) {
                chars[j++] = curr;
            } else {
                chars[j++] = curr;
                string s = to_string(c);
                for (char dig : s) {
                    chars[j++] = dig;
                }
            }
            i--;
        }
        return j;
    }
};
