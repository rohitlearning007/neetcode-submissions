class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t totalNums = nums.size();
        vector<int> res(totalNums*2);

        for (size_t i = 0; i < totalNums; ++i)
        {
            res[i] = nums[i];
            res[i+totalNums] = nums[i];
        }

        return res;
    }
};