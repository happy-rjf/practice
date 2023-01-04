#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int num = boxes.size();
        vector<int> result(num, 0);
        for (unsigned int i = 0; i < num; i++) {
            for (unsigned int j = i + 1; j < num; j++) {
                result[i] += (j - i) * (boxes[j] - '0');
                result[j] += (j - i) * (boxes[i] - '0');
            }
        }
        return result;
    }
};


int minOperations(void)
{
    class Solution solution;
    // string a = "110";
    string a = "001011";
    vector<int> result = solution.minOperations(a);

    return 0;
}