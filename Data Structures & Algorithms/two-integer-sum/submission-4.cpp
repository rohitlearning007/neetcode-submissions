class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        // Hash map
        // unordered_map<int, int> temp;
        // for (int i = 0; i < nums.size(); ++i)
        // {
        //     int num = nums[i];
        //     if (temp.find(num) == temp.end())            
        //         temp.insert({target-num, i});
        //     else
        //     {
        //         res.push_back(temp[num]);
        //         res.push_back(i);
        //         break;
        //     }
        // }

        // Two Pointers
        vector <pair<int, int>> valueVsIndex;
        for (int i = 0; i < nums.size(); ++i)
            valueVsIndex.push_back({nums[i], i});
            
        std::sort(valueVsIndex.begin(), valueVsIndex.end());
        int i = 0, j = nums.size() - 1;

        bool loop = true;
        while (loop)
        {
            int sum = valueVsIndex[i].first + valueVsIndex[j].first;
            if (sum == target && i != j)
            {
                loop = false;
                return { min(valueVsIndex[i].second, valueVsIndex[j].second),
                         max(valueVsIndex[i].second, valueVsIndex[j].second)};
            }
            else if (sum < target)
                ++i;
            else if (sum > target)
                --j;
            // loop = ((i == nums.size() -1) || j == 0);
        }

        return res;
    }
};
