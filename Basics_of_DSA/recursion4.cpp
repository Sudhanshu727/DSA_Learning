// Sum of cubes of first n natural numbers
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int i = 0;
    int sumOfSeries(int n)
    {
        // code here
        if (n < 1)
            return i;
        i += n * n * n;
        sumOfSeries(n - 1);
    }
};

int main()
{
    Solution ob;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << ob.sumOfSeries(n) << endl;
    return 0;
}
