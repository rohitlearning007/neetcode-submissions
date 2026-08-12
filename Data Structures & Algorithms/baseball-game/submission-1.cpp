class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;
        
        int ans = 0;
        for (int i = 0; i < operations.size(); ++i)
        {
            if (operations[i] == "+")
            {
                int top = nums.top();
                nums.pop();
                int secondTop = nums.top();
                nums.push(top);

                nums.push(top + secondTop);
                ans = ans + top + secondTop;
            }
            else if (operations[i] == "C")
            {
                ans = ans - nums.top();
                nums.pop();
            }
            else if (operations[i] == "D")
            {
                int m = nums.top() * 2;
                nums.push(m);
                ans += m;
            }
            else // always an integer
            {
                int num = stoi(operations[i]);
                nums.push(num);
                ans += num;
            }
        }

        // while (!nums.empty()){
        //     ans += nums.top();
        //     nums.pop();
        // }
        return ans;

    }
};