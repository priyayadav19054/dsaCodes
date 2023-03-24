#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9 + 7;
const ll int maxi = 1e18 + 8;

void solve()
{
    int a, b;
    cin >> a >> b;

    a = abs(a), b = abs(b);
    if (a == b)
    {
        cout << a + b << endl;
        return;
    }
    int diff = abs(a - b), ans = (2 * min(a, b)) + ((diff / 2) * 4);

    if (diff % 2 == 1)
    {
        ans++;
    }
    cout << ans << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.exceptions(cin.failbit);

    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}