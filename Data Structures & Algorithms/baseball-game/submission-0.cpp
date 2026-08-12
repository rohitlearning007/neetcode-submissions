class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;
        
        for (int i = 0; i < operations.size(); ++i)
        {
            if (operations[i] == "+")
            {
                int top = nums.top();
                nums.pop();
                int secondTop = nums.top();
                nums.push(top);

                nums.push(top + secondTop);
            }
            else if (operations[i] == "C")
            {
                nums.pop();
            }
            else if (operations[i] == "D")
            {
                nums.push(nums.top() * 2);
            }
            else // always an integer
            {
                int num = stoi(operations[i]);
                nums.push(num);
            }
        }

        int ans = 0;
        while (!nums.empty()){
            ans += nums.top();
            nums.pop();
        }
        return ans;

    }
};