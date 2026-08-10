class Solution {
public:
    void reverseString(vector<char>& s) {
        // two pointers
        if (s.size() == 0)
            return;
        int i = 0, j =  s.size()-1;

        while(i < j)
        {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            ++i; --j;
        }
    }
};