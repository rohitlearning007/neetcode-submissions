class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '(')
                p.push(s[i]);
            else if (s[i] == '{')
                p.push(s[i]);
            else if (s[i] == '[')
                p.push(s[i]);

            if (s[i] == ')')
            {
                if(!p.empty() && p.top() == '(')
                    p.pop();
                else
                    return false;
            }
            else if (s[i] == '}')
            {
                if(!p.empty() && p.top() == '{')
                    p.pop();
                else
                    return false;
            }
            else if (s[i] == ']')
            {
                if(!p.empty() && p.top() == '[')
                    p.pop();
                else
                    return false;
            }
            
        }
        return p.empty();
    }
};
