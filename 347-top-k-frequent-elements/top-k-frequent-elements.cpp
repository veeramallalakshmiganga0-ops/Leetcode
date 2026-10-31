
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frq;

        for(int i : nums){
            frq[i]++;
        }

        vector<pair<int,int>> v;

        for(auto i : frq){
            v.push_back({i.second, i.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        for(int i=0; i<k; i++){
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
