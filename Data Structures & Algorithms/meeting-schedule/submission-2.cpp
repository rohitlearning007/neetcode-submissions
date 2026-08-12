/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        
        set <int> booked;
        for (auto interval : intervals)
        {
            int start = interval.start;
            int end = interval.end;
            if (booked.find(start) != booked.end() || booked.find(end) != booked.end() )
                return false;
            for (int i = start; i < end; ++i )
            {
                booked.insert(i);
            }
        }
        return true;
    }
};
