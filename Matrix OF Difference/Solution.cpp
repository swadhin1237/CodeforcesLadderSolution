#include <bits/stdc++.h>
#define M 998244353
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int l = 1;
    int r = n * n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            arr[i - 1][j - 1] = (i * n + j) % 2 == 0 ? l++ : r--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << arr[i - 1][j - 1] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i - 1][j] << " ";
            }
            cout << endl;
        }
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