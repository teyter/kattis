#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void print_vector(vi v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	} 
	cout << endl;
}

int main()
{
	int n, m, i, j, x, r;
	cin >> n >> m;
	vi a(n), b(m);
	for (i = 0; i < n; i++) cin >> a[i];
	for (i = 0; i < m; i++) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	print_vector(a);
  int t;
  while (!a.empty())
  {
		t = a[0];
		cout << t << endl;
		a.erase(a.begin());
  }
	print_vector(a);
}