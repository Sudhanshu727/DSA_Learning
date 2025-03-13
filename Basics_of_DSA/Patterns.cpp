#include <iostream>
using namespace std;

void nForest(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void nRtriangle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Write your code here.
}

void nTriangle(int n)
{
    // Write your code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void triangle(int n)
{
    // Write your code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void seeding(int n)
{
    // Write your code here.
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void nNumberTriangle(int n)
{
    // Write your code here.
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}

void nStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    nForest(n);
    cout << "\n";
    nRtriangle(n);
    cout << "\n";
    nTriangle(n);
    cout << "\n";
    triangle(n);
    cout << "\n";
    seeding(n);
    cout << "\n";
    nNumberTriangle(n);
    cout << "\n";
    nStarTriangle(n);
    cout << "\n";
    return 0;
}