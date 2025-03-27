// Sum of all divisors of all numbers from 1 to n

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfDivisors(int n)
    {
        // Write Your Code here
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    sum += j;
                }
            }
        }
        return sum;
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution solution;
    cout << "Sum of divisors of all numbers from 1 to " << n << " is: " << solution.sumOfDivisors(n) << endl;

    return 0;
}