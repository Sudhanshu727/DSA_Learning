#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        // code here
        int ans = 0;
        int i = n;
        while (i != 0)
        {
            int x = i % 10;
            if (x != 0)
            {
                ans += (n % x == 0);
            }
            i /= 10;
        }
        return ans;
    }
};

int main()
{
    int N;
    cin >> N;
    Solution ob;
    cout << ob.evenlyDivides(N) << endl;

    return 0;
}
