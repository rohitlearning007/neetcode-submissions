class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // size_t totalNums = nums.size();
        vector<int> res; // (totalNums*2);

        // for (size_t i = 0; i < totalNums; ++i)
        // {
        //     res[i] = nums[i];
        //     res[i+totalNums] = nums[i];
        // }

        for (int i = 0; i < 2; ++i)
        {
            for (auto n: nums)
            {
                res.push_back(n);
            }
        }
        return res;
    }
};