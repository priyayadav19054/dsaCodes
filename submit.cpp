#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9 + 7;
const ll int maxi = 1e18 + 8;

int solve2(int a, int b, int c, int d)
{
    if (d < b)
    {
        return -1;
    }
    int req = (d - b);
    a += req;

    if (c > a)
    {
        return -1;
    }
    req += (a - c);
    return req;
}

int solve(int a, int b, int c, int d)
{
    int cnt = b - a, newy = cnt + c;
    if (d < newy || d < b)
    {
        return -1;
    }
    int ans = abs((b - a) - (d - c)) + + abs(d - b);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.exceptions(cin.failbit);

    freopen("input.txt", "r", stdin);

    srand(0);
    int t = 10000;
    // cin >> t;
    while (t--)
    {
        int a = rand() % 10, b = rand() % 10, c = rand() % 10, d = rand() % 10;

        int ans1 = solve(a, b, c, d), ans2 = solve2(a, b, c, d);

        if (ans1 != ans2)
        {
            cout << "a: " << a << "b: " << b << " c: " << c << " d: " << d << "ans1: " << ans1 << " ans2: " << ans2 << endl;
        }
    }

    return 0;
}


/*


a: 7b: 3 c: 1 d: 0ans1: 6 ans2: -1
a: 7b: 4 c: 2 d: 1ans1: 5 ans2: -1
a: 9b: 6 c: 1 d: 4ans1: 8 ans2: -1
a: 3b: 3 c: 0 d: 2ans1: 3 ans2: -1
a: 7b: 5 c: 1 d: 4ans1: 6 ans2: -1
a: 9b: 7 c: 0 d: 3ans1: 9 ans2: -1
a: 6b: 3 c: 0 d: 2ans1: 6 ans2: -1
a: 9b: 4 c: 1 d: 2ans1: 8 ans2: -1
a: 4b: 7 c: 0 d: 5ans1: 4 ans2: -1
a: 8b: 6 c: 3 d: 3ans1: 5 ans2: -1
a: 7b: 4 c: 2 d: 2ans1: 5 ans2: -1
a: 6b: 8 c: 1 d: 4ans1: 5 ans2: -1
a: 9b: 5 c: 2 d: 0ans1: 7 ans2: -1
a: 5b: 6 c: 1 d: 3ans1: 4 ans2: -1
a: 7b: 3 c: 0 d: 2ans1: 7 ans2: -1
a: 7b: 9 c: 2 d: 4ans1: 5 ans2: -1
a: 8b: 2 c: 3 d: 0ans1: 5 ans2: -1
a: 4b: 9 c: 2 d: 7ans1: 2 ans2: -1
a: 6b: 2 c: 1 d: 0ans1: 5 ans2: -1
a: 8b: 2 c: 3 d: 1ans1: 5 ans2: -1
a: 7b: 7 c: 4 d: 5ans1: 3 ans2: -1
a: 4b: 2 c: 3 d: 1ans1: 1 ans2: -1
a: 8b: 7 c: 0 d: 2ans1: 8 ans2: -1
a: 9b: 1 c: 7 d: 0ans1: 2 ans2: -1
a: 9b: 3 c: 7 d: 2ans1: 2 ans2: -1
a: 8b: 4 c: 1 d: 0ans1: 7 ans2: -1
a: 6b: 9 c: 1 d: 6ans1: 5 ans2: -1
a: 8b: 7 c: 1 d: 2ans1: 7 ans2: -1
a: 7b: 5 c: 2 d: 0ans1: 5 ans2: -1
a: 9b: 7 c: 5 d: 3ans1: 4 ans2: -1
a: 3b: 1 c: 1 d: 0ans1: 2 ans2: -1
a: 8b: 2 c: 1 d: 1ans1: 7 ans2: -1
a: 9b: 5 c: 4 d: 0ans1: 5 ans2: -1
a: 8b: 3 c: 2 d: 2ans1: 6 ans2: -1
a: 8b: 2 c: 2 d: 0ans1: 6 ans2: -1
a: 3b: 4 c: 1 d: 3ans1: 2 ans2: -1
a: 6b: 6 c: 0 d: 1ans1: 6 ans2: -1
a: 6b: 9 c: 2 d: 5ans1: 4 ans2: -1
a: 8b: 8 c: 0 d: 2ans1: 8 ans2: -1
a: 8b: 8 c: 7 d: 7ans1: 1 ans2: -1
a: 8b: 4 c: 0 d: 3ans1: 8 ans2: -1
a: 7b: 9 c: 0 d: 6ans1: 7 ans2: -1
a: 6b: 8 c: 4 d: 6ans1: 2 ans2: -1
a: 5b: 8 c: 4 d: 7ans1: 1 ans2: -1
a: 9b: 7 c: 3 d: 3ans1: 6 ans2: -1
a: 9b: 5 c: 5 d: 3ans1: 4 ans2: -1
a: 9b: 1 c: 6 d: 0ans1: 3 ans2: -1
a: 8b: 6 c: 4 d: 2ans1: 4 ans2: -1
a: 3b: 6 c: 0 d: 5ans1: 3 ans2: -1
a: 6b: 9 c: 5 d: 8ans1: 1 ans2: -1
a: 9b: 7 c: 5 d: 6ans1: 4 ans2: -1
a: 6b: 6 c: 0 d: 2ans1: 6 ans2: -1
a: 8b: 9 c: 2 d: 7ans1: 6 ans2: -1
a: 9b: 8 c: 0 d: 1ans1: 9 ans2: -1
a: 9b: 8 c: 3 d: 2ans1: 6 ans2: -1
a: 8b: 4 c: 5 d: 2ans1: 3 ans2: -1
a: 9b: 7 c: 0 d: 1ans1: 9 ans2: -1
a: 6b: 5 c: 2 d: 4ans1: 4 ans2: -1
a: 9b: 8 c: 0 d: 6ans1: 9 ans2: -1
a: 9b: 6 c: 4 d: 3ans1: 5 ans2: -1
a: 7b: 6 c: 0 d: 2ans1: 7 ans2: -1
a: 6b: 4 c: 3 d: 3ans1: 3 ans2: -1
a: 8b: 6 c: 0 d: 4ans1: 8 ans2: -1
a: 7b: 1 c: 6 d: 0ans1: 1 ans2: -1
a: 8b: 8 c: 5 d: 7ans1: 3 ans2: -1
a: 9b: 6 c: 5 d: 4ans1: 4 ans2: -1
a: 4b: 9 c: 0 d: 6ans1: 4 ans2: -1
a: 9b: 3 c: 6 d: 2ans1: 3 ans2: -1
a: 9b: 3 c: 0 d: 0ans1: 9 ans2: -1
a: 6b: 7 c: 3 d: 5ans1: 3 ans2: -1
a: 7b: 6 c: 0 d: 2ans1: 7 ans2: -1
a: 7b: 9 c: 1 d: 3ans1: 6 ans2: -1
a: 8b: 3 c: 4 d: 1ans1: 4 ans2: -1
a: 8b: 8 c: 4 d: 4ans1: 4 ans2: -1
a: 7b: 6 c: 2 d: 1ans1: 5 ans2: -1
a: 9b: 3 c: 8 d: 2ans1: 1 ans2: -1
a: 9b: 8 c: 0 d: 3ans1: 9 ans2: -1
a: 9b: 9 c: 0 d: 4ans1: 9 ans2: -1
a: 4b: 5 c: 0 d: 4ans1: 4 ans2: -1
a: 3b: 9 c: 1 d: 7ans1: 2 ans2: -1
a: 9b: 8 c: 3 d: 2ans1: 6 ans2: -1
a: 9b: 5 c: 0 d: 4ans1: 9 ans2: -1
a: 5b: 8 c: 0 d: 5ans1: 5 ans2: -1
a: 7b: 9 c: 5 d: 7ans1: 2 ans2: -1
a: 8b: 8 c: 5 d: 5ans1: 3 ans2: -1
a: 9b: 4 c: 4 d: 2ans1: 5 ans2: -1
a: 9b: 9 c: 2 d: 2ans1: 7 ans2: -1
a: 6b: 9 c: 3 d: 6ans1: 3 ans2: -1
a: 8b: 9 c: 6 d: 7ans1: 2 ans2: -1
a: 8b: 4 c: 1 d: 2ans1: 7 ans2: -1
a: 8b: 1 c: 3 d: 0ans1: 5 ans2: -1
a: 6b: 2 c: 0 d: 0ans1: 6 ans2: -1
a: 8b: 7 c: 6 d: 5ans1: 2 ans2: -1
a: 8b: 8 c: 5 d: 7ans1: 3 ans2: -1
a: 8b: 9 c: 1 d: 6ans1: 7 ans2: -1
a: 3b: 9 c: 1 d: 7ans1: 2 ans2: -1
a: 4b: 3 c: 3 d: 2ans1: 1 ans2: -1
a: 9b: 9 c: 2 d: 5ans1: 7 ans2: -1
a: 8b: 1 c: 3 d: 0ans1: 5 ans2: -1
a: 9b: 6 c: 2 d: 2ans1: 7 ans2: -1
a: 8b: 5 c: 2 d: 3ans1: 6 ans2: -1
a: 9b: 4 c: 1 d: 0ans1: 8 ans2: -1
a: 9b: 8 c: 1 d: 7ans1: 8 ans2: -1
a: 8b: 4 c: 2 d: 0ans1: 6 ans2: -1
a: 8b: 8 c: 1 d: 1ans1: 7 ans2: -1
a: 5b: 2 c: 2 d: 0ans1: 3 ans2: -1
a: 8b: 1 c: 2 d: 0ans1: 6 ans2: -1
a: 7b: 8 c: 0 d: 5ans1: 7 ans2: -1
a: 8b: 6 c: 6 d: 5ans1: 2 ans2: -1
a: 7b: 4 c: 3 d: 3ans1: 4 ans2: -1
a: 3b: 6 c: 1 d: 5ans1: 2 ans2: -1
a: 6b: 5 c: 0 d: 2ans1: 6 ans2: -1
a: 7b: 2 c: 3 d: 1ans1: 4 ans2: -1
a: 9b: 3 c: 8 d: 2ans1: 1 ans2: -1
a: 4b: 8 c: 2 d: 7ans1: 2 ans2: -1


*/