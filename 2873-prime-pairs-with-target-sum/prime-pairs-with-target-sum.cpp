class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        if (n < 4) return {};

        vector<int> spf(n + 1);

        for (int i = 0; i <= n; i++) {
            spf[i] = i;
        }

        for (int i = 2; i * i <= n; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j <= n; j += i) {
                    if (spf[j] == j) {
                        spf[j] = i;
                    }
                }
            }
        }

        vector<vector<int>> ans;

        for (int i = 2; i <= n / 2; i++) {
            int j = n - i;

            if (spf[i] == i && spf[j] == j) {
                ans.push_back({i, j});
            }
        }

        return ans;
    }
};