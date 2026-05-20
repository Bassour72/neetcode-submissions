class Solution {
	 static bool cmp(const Interval& a, const Interval& b)
    {
        return a.start < b.start;
    }
public:
	static bool canAttendMeetings(std::vector<Interval>& intervals) 
	{
			std::sort(intervals.begin(), intervals.end(), cmp);
		for (size_t i = 0; i + 1 < intervals.size(); i++)
		{
			if (intervals[i].end > intervals[i+1].start)
				return (false);
		}
		
		return (true);
	}
};

