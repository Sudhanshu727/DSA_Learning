//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// } Driver Code Ends

// User function Template for C++

class Solution
{
public:
    int dataTypeSize(string str)
    {
        int x = sizeof(int);
        int y = sizeof(char);

        if (str == "Integer")
        {
            return (x);
        }
        else if (str == "Character")
        {
            return (y);
        }

        // your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 1;
}

// } Driver Code Ends