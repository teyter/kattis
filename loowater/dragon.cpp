#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << n << " " << m << endl;
    while (n != 0 && m != 0)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cout << x << endl;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            cout << x << endl;
        }
        cin >> n >> m;
        cout << n << " " << m << endl;
    }
}