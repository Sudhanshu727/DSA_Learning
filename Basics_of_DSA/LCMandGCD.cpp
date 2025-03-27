#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> lcmAndGcd(int a, int b)
    {
        // code here
        int gcd;
        for (int i = min(a, b); i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
                break;
            }
        }
        int lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
};

int main()
{
    Solution solution;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    vector<int> result = solution.lcmAndGcd(a, b);

    cout << "LCM: " << result[0] << endl;
    cout << "GCD: " << result[1] << endl;

    return 0;
}