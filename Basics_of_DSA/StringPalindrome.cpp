#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int i = 0;
    bool isPalindrome(string s)
    {
        int x = s.length() - i - 1;
        if ((i < x) && (!isalnum(s[i]) || !isalnum(s[s.length() - i - 1])))
        {
            i++;
            x--;
            // return isPalindrome(s);
        }

        if (tolower(s[i]) != tolower(s[x]))
            return false;
        if (i > x)
            return true;
        i++;
        x--;
        return isPalindrome(s);
    }
};

int main()
{
    Solution solution;

    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";
    string test4 = "Madam"; // New test case

    cout << "Test 1: " << (solution.isPalindrome(test1) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 2: " << (solution.isPalindrome(test2) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 3: " << (solution.isPalindrome(test3) ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test 4: " << (solution.isPalindrome(test4) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}