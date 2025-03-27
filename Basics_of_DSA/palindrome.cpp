#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int dup = x;
        long rev = 0;
        if (x < 0)
            return false;
        while (x != 0)
        {
            rev = (rev * 10) + (x % 10);
            x = x / 10;
        }
        return rev == dup;
    }
};

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    Solution solution;
    if (solution.isPalindrome(x))
    {
        cout << x << " is a palindrome." << endl;
    }
    else
    {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}