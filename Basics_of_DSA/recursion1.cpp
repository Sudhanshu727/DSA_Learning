#include <iostream>
using namespace std;

class Solution
{
public:
    // Complete this function
    int i = 1;
    void printNos(int n)
    {
        // Your code here
        if (i > n)
        {
            return;
        }
        cout << i << " ";
        i++;
        printNos(n);
    }
};

int main()
{
    Solution solution;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    solution.printNos(n);

    return 0;
}