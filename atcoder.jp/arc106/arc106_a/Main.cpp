#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ll n; cin >> n;
	for (ll i = 3, a = 1; i <= n; i *= 3, ++a)
		for (ll j = 5, b = 1; j <= n; j *= 5, ++b)
			if (i + j == n)
			{
				cout << a << " " << b << endl;
				return 0;
			}
	cout << -1 << endl;
}

