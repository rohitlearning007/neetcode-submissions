class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool result = false;

        set<int> hashset;

        for (auto n : nums)
        {
            if (hashset.find(n) == hashset.end())
            {
                hashset.insert(n);
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