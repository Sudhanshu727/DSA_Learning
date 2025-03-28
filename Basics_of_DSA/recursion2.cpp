#include <iostream>
using namespace std;

class Solution
{
public:
    int n = 1;
    void printGfg(int N)
    {
        // Code here
        if (n > N)
            return;
        cout << "GFG" << " ";
        n++;
        printGfg(N);
    }
};

int main()
{
    Solution solution;

    int N;
    // cout << "Enter the number of times to print 'GFG' ";
    cin >> N;

    solution.printGfg(N);

    return 0;
}