class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> cou;
        for (char ch : s) {
            cou[ch]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (cou[s[i]] == 1) {
                return i;  
            }
        }

        return -1;
    }
};