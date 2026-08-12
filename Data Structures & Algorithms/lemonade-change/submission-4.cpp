class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if (bills[0] != 5)
            return false; 

        int earnings = 5;
        map<int, int> notes = {{5,1}, {10, 0}, {20,0}};

        for (int i = 1; i < bills.size(); i++)
        {
            if (bills[i] == 5)
                notes[5] = notes[5] + 1;
            else if (bills[i] == 10)
                notes[10] = notes[10] + 1;
            else //  if (bills[i] == 20)
                notes[20] = notes[20] + 1;

            int change = bills[i] - 5;
            if (change == 0)
                continue;
            
            if (change == 5) 
            {
                if (notes[5] == 0)
                    return false;
                else
                    notes[5] = notes[5] - 1;
            }
            else if (change == 15)
            {
                if (notes[5] >= 3)
                    notes[5] = notes[5] - 3;
                else if (notes[10] >= 1 && notes[5] >= 1)
                {
                    notes[5] = notes[5] - 1;
                    notes[10] = notes[10] - 1;
                }
                else
                    return false;
            }
                        
        }
        return true;
    }
};