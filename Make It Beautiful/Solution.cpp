#include <bits/stdc++.h>
#define M 998244353
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());

    if (arr[0] == arr[n - 1])
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            cout << arr[l++] << " ";
            cout << arr[r--] << " ";
        }
        if (n % 2 != 0)
            cout << arr[l];

        cout << endl;
    }
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