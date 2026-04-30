class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_set<int> unique_nums;
        for(int num : nums) {
            if(unique_nums.count(num)){
                return true;
            }
            unique_nums.insert(num);
        }
        return false;
    }
};