#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> A(3, 0);
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        A[i%3] += a;
    }

    vector<ll> B(3, 0);
    for (int i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        B[(i+0)%3] += A[(i+0)%3] * b;
        B[(i+1)%3] += A[(i+2)%3] * b;
        B[(i+2)%3] += A[(i+1)%3] * b;
    }

    for (int i = B.size()-1; i >= 0; i--)
    {
        cout << B[i] << " ";
    } cout << endl;
}
