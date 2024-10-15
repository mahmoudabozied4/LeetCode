class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0, cnt = 0;
        // 1010001 -> 0000111
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                ans += i - cnt;
                cnt++;
            }
        }
        return ans;
    }
};