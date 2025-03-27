#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int dup = n;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    if (sum == dup)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}