#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if ((n == 0) || (n == 1))
    {
        return (n);
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
int main()
{
    int n1;
    cin >> n1;
    cout << fibo(n1);
    return 0;
}