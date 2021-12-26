class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long result=0, remainder=0;
            while(n>0)
            {
                remainder = n%10;
                result = result*10 + remainder;
                n = n/10;   
            }
            return result;
		}
};
