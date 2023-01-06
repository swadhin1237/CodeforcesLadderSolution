#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= n)
        {
            arr[a] = 1;
        }
    }
    int smallest = n + 1;
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] == 0)
        {
            smallest = i;
            break;
        }
    }
    cout << smallest << endl;

    return 0;
}