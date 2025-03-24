#include <bits/stdc++.h>
using namespace std;

void PQ()
{
    priority_queue<pair<int, int>> pq;
    pq.emplace(21, 25);
    pq.push({7, 3});
    pq.push({2, 92});
    while (!pq.empty())
    {
        cout << "(" << pq.top().first << ", " << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;
}

void Asc_PQ()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.emplace(21, 25);
    pq.push({7, 3});
    pq.push({2, 92});
    while (!pq.empty())
    {
        cout << "(" << pq.top().first << ", " << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;
}

void MS()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(10);
    ms.insert(30);
    ms.insert(40);
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
    int cnt = ms.count(10);
    cout << cnt << endl;
}

int main()
{
    vector<int> v;
    v = {10, 20, 30, 40, 60, 42};
    v.erase(v.begin() + 2, v.end() - 1);
    v.emplace_back(23);
    for (auto it : v)
    {
        cout << it << endl;
    }
    for (vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << *(it1) << "  ";
    }
    cout << endl;
    PQ();
    Asc_PQ();
    MS();
    return 0;
}
