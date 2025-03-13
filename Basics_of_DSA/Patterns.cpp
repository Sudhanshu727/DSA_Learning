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
void nRevStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 2 * (n - i) + 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nStarDiamond(int n)
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 2 * (n - i) + 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nRtStarTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int k = i - 1; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nBinaryTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
void numberCrown(int n)
{
    // Write your code here.
    // number
    int sp = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j << "";
        }
        // space
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        // numbers in reverse order
        for (int j = i; j >= 1; j--)
        {
            cout << j << "";
        }
        cout << endl;
        sp = sp - 2;
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
    nRevStarTriangle(n);
    cout << "\n";
    nStarDiamond(n);
    cout << "\n";
    nRtriangle(n);
    cout << "\n";
    nBinaryTriangle(n);
    cout << "\n";
    numberCrown(n);
    cout << "\n";
    return 0;
}