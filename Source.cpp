#include <iostream>
// извлечение квадратного корня 
class Solution {
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return x;

        int l = 1;
        int r = x;
        long result;
        while (l <= r)
        {
            long mid = l + (r - l) / 2;
            if (mid * mid == x)
            {
                result = mid;
                return (int)result;
            }
            else if (mid * mid < x)
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        
    }
};

int main()
{
    int num = 63;
    Solution x; 
    std::cout << x.mySqrt(num) << std::endl;
    return 0;
}




