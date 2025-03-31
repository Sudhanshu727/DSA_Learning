#include <iostream>
using namespace std;

// N to 1
class Solution
{
public:
    void printNos(int N)
    {
        // int i = N;
        // code here
        if (N < 1)
            return;
        cout << N << " ";
        printNos(N - 1);
    }
};

int main()
{
    Solution solution;
    int N;

    cout << "Enter a number: ";
    cin >> N;

    cout << "Numbers from " << N << " to 1 are: ";
    solution.printNos(N);
    cout << endl;

    return 0;
}