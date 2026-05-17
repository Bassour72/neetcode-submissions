class Solution {
public:
    static int climbStairs(int n) 
    {
		int step = 0;
        while (n > 0)
		{
			if (n - 2 >= 0)
			{
				n -= 2;
				step += 2;
			}
			else
			{
				n -= 1;
				step++;
			}
			
		}
		return (step);
    }
};