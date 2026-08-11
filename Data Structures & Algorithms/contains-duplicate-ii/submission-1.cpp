class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> hashmap;

        for (int i = 0; i < nums.size(); ++i)
        {
            if(hashmap.contains(nums[i]))
            {
                int j = hashmap[nums[i]];
                if ( abs(i - j) <= k)
                    return true;
                else
                    hashmap[nums[i]] = i;
            }
            else
                hashmap.insert({nums[i], i});
        }

        return false;
    }
};