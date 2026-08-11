class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        std::sort(people.begin(), people.end());
        int trips = 0;
        int i = 0, j = people.size() -1 ;
        while (i <= j)
        {
            if ( i == j)
            {
                ++trips;
                break;
            }
            if (people[i] + people[j] > limit)
            {
                --j;                
            } //  1  2  2  3  3 
            else
            {
                ++i;
                --j;
            }
            ++trips;
        }
        return trips;
        
    }
};