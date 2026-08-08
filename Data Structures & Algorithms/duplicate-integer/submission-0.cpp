class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool result = false;

        map<int, bool> nummap;

        for (auto n : nums)
        {
            if (nummap.find(n) == nummap.end())
            {
                nummap.insert({n, true});
            }
            else
            {
                result = true;
                break;
            }
        }

        return result;
    }
};