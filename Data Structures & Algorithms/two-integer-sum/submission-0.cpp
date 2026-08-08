class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            if (temp.find(num) == temp.end())            
                temp.insert({target-num, i});
            else
            {
                res.push_back(temp[num]);
                res.push_back(i);
                break;
            }
            
        }
        return res;
    }
};
