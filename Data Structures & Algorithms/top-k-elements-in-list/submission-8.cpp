class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> num_frequency;
        for(int num : nums) {
            num_frequency[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto& [number,frequency] : num_frequency){
            bucket[frequency].push_back(number);
        }

        for(int i = bucket.size() - 1; i >= 0; i--) {
        // for(int i = bucket.size(); i > 0; i--) {
            for (int x : bucket[i]) {
                result.push_back(x);
                if(result.size() == k) return result;
            }
        }

        return result;
    }
};
