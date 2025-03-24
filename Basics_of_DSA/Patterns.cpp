#include <bits/stdc++.h>
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
void pattern12(int n)
{
    // Write your code here.
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}
void nLetterTriangle(int n)
{
    // Write your code here.
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pt19(int n)
{
    // Write your code here.
    int sp = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        sp += 2;
    }
    sp = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        sp -= 2;
    }
}
void pt15(int n)
{
    // Write your code here.
    for (char i = 'A' + n - 1; i >= 'A'; i--)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void alphaRamp(int n)
{
    // Write your code here.
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pt21(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
                cout << " ";
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
    pattern12(n);
    cout << "\n";
    nLetterTriangle(n);
    cout << "\n";
    pt19(n);
    cout << "\n";
    pt15(n);
    cout << "\n";
    alphaRamp(n);
    cout << "\n";
    pt21(n);
    cout << "\n";
    return 0;
}