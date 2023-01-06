#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end());
    bool flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i].second > arr[i + 1].second && arr[i].first < arr[i + 1].first)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}