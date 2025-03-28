bool isPrime(int n)
{
    // Write your code here.
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

#include <iostream>
using namespace std;

// Declare the isPrime function
bool isPrime(int n);

int main()
{
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}