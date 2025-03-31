#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int st = 0;
    int en = -1;
    void reverseArray(vector<int> &arr)
    {
        // code here
        if (en == -1)
            en = arr.size() - 1;
        if (st >= en)
        {
            st = 0;
            en = -1;
            return;
        }
        swap(arr[st], arr[en]);
        st++;
        en--;
        reverseArray(arr);
    }
};

int main()
{
    Solution solution;
    vector<int> arr;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    solution.reverseArray(arr);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}