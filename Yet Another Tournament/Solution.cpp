#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
        arr2[i] = arr[i];

    sort(arr2.begin(), arr2.end());
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (m < arr2[i])
            break;

        m -= arr2[i];
    }
    if (i >= 1 && i < n && m + arr2[i - 1] >= arr[i])
        i++;

    cout << n - i + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}