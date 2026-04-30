// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> complement_index;
//         complement_index.insert({target - nums[0], 0});
//         for(int i = 1; i < nums.size(); i++) {
//             auto it = complement_index.find(nums[i]);
//             if(it != complement_index.end()) {return {it->second, i};}
//             complement_index.insert({target - nums[i], i});
//         }
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complement_index;
        complement_index[target - nums[0]] = 0;
        for(int i = 1; i < nums.size(); i++) {
            auto it = complement_index.find(nums[i]);
            if(it != complement_index.end()) {return {it->second, i};}
            complement_index[target - nums[i]] = i;
        }
    }
};
