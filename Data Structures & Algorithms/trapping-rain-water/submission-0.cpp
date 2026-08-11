class Solution {
public:
    int trap(vector<int>& height) {
        // 0  0 2 2  3 3 3 3 3 3
        // 3  3 3 3  3 3 3 2 1 0
        // 0 -2 2 -1 2 3 2 0 0 -1
        
        vector<int> left(height.size(), 0) , right(height.size(), 0);
        int i = 1, j = height.size() - 2;
        int leftmax = height[0], rightmax = height[j + 1];

        while (i < height.size())
        {
            leftmax = height[i-1] > leftmax ? height[i-1] : leftmax;
            rightmax = height[j+1] > rightmax ? height[j+1] : rightmax;
            left[i] = leftmax;
            right[j] = rightmax;
            ++i;  --j;
        }

        int area = 0;

        for (int i = 0; i < height.size(); ++i)
        {
            int a = min(left[i], right[i]) - height[i];
            if (a > 0)
            {
                area += a;
            }
        }

        return area;
    } 
}; 
