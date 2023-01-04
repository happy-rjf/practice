#include <iostream>
#include "stdlib.h"
#include "leetcode_api.h"
#include "stdio.h"
#include <vector>


void testVector(void)
{
    using namespace std;
    vector<int> grace(10, 111);
    grace.push_back(222);
    int count = 0;
    for (auto iter = grace.rbegin(); iter != grace.rend(); iter++) {
        *iter = count++;
    }
    // vector<int>::iterator iter = grace.begin();
    // auto iter = grace.begin();

    for (auto iter = grace.begin(); iter != grace.end(); iter++) {
        std::cout << *iter << std::endl;
    }

    
    grace.push_back(20);
    auto a = grace.front();
    cout << "end:" << grace.back() << endl;

    vector<int> temp(1, 21);
    grace.swap(temp);
    cout << "end:" << grace.back() << endl;
    grace.pop_back();
}


enum STD {
    LTE,
    NR,
    GSM,
    UMTS
};

int  g_a = 10;

int Func(int (*a)[3])
{
    return a[1][2];
}

int main(void)
{
    printf("myFirstProject %d\n", g_a);

    testVector();
    // minOperations();
    return 0;
}

