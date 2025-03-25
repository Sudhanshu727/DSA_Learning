#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;
        while (x != 0)
        {
            int i = x % 10;
            rev = rev * 10 + i;
            x /= 10;
        }
        if (rev >= INT_MAX || rev <= INT_MIN)
        {
            return 0;
        }
        else
        {
            return rev;
        }
    }
};

int main()
{
    Solution sol;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int reversedNum = sol.reverse(num);
    cout << "Reversed: " << reversedNum << endl;
    return 0;
}