class Solution {
public:
    bool isAlphanumeric (char ch)
    {
        return ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9'));
    }

    

    bool isPalindrome(string s) {
        if (s.length() == 0)
            return true;
        int i = 0, j = s.length() -1;

        while  (i < j)
        {
            if (!isAlphanumeric(s[i])){
                i++;
                continue;
            }
            if (!isAlphanumeric(s[j]))
            {
                j--;
                continue;
            }
            
            if (tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            i++; j--;
        }
        return true;
    }
};
