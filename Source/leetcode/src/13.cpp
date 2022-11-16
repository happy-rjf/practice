#include <string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int length = s.length();
        // int nums[length];
        int *nums = new int[length];
        int num = 0;
        for (int i = 0; i < length; i++)
        {
            switch (s[i])
            {
            case 'M':
                num = 1000;
                break;
            case 'D':
                num = 500;
                break;
            case 'C':
                num = 100;
                break;
            case 'L':
                num = 50;
                break;
            case 'X':
                num = 10;
                break;
            case 'V':
                num = 5;
                break;
            case 'I':
                num = 1;
                break;
            }
            nums[i] = num;
        }

        // 若较小的数字在较大的数字前面就加负号
        int rtn = 0;
        for (int i = 0; i < length; i++)
        {
            if (i < length - 1 && nums[i] < nums[i + 1])
            {
                nums[i] = -nums[i];
            }
            rtn += nums[i];
        }
        delete [] nums;
        return rtn;
    }
};

int romanToInt(void)
{
    class Solution solution;
    string a = "III";
    int result = solution.romanToInt(a);
    printf("%d\n", result);
    return 0;
}
