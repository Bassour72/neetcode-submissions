class Solution {
public:
    static int climbStairs(int n) 
    {
		int step = 0;
		int stepOne = 1;
		int stepTwo = 0;
		while (n--)
		{
			step = stepOne + stepTwo;
			stepTwo = stepOne;
			stepOne = step;
		}
		return (step);
    }
};
