class Solution {
public:
    void reverseString(vector<char>& s) {
        // two pointers

        int i = 0, j =  s.size()-1;

        while(true)
        {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            ++i; --j;
            if ( i == j || j < i)
                break;
        }
    }
};