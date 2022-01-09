#include <bits/stdc++.h>
/*
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
*/
using namespace std;
/*
typedef tree<int,null_type, less<int>,rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;
*/
#define pb push_back
#define ll long long
#define x1 first
#define y1 second
#define frb(i, a, b) for (ll(i) = (a); (i) <= (b); (i) += (i) & -(i))
#define rfrb(i, a) for (ll(i) = (a); (i) > 0; (i) -= (i) & -(i))
#define fr(i, a, b) for (ll(i) = (a); (i) <= (b); (i)++)
#define rep(i, c) for (auto(i) : (c))
#define mini(a, b) (((a) < (b)) ? (a) : (b))
#define maxi(a, b) (((a) > (b)) ? (a) : (b))
#define par pair<ll, ll>
#define vp vector<par>
#define vi vector<ll>
#define dq deque<ll>
#define mem(i, j) memset((i), (j), sizeof(i))
// indexed_set s;
/// always see the properties of the problems
/// siempre poner ("\n" cout.flush) como endl
///----------------------------------------------------------------------------

const ll mod = 1e9 + 7;
const ll INF = 1e18;
ll n, t;
par ar[105];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  /// freopen("a.in","r",stdin);
  /// freopen("a.out","w",stdout);
  cin >> n;
  ll a, b;
  double seg = 0;
  fr(i, 1, n)
  {
    cin >> a >> b;
    ar[i].x1 = a;
    ar[i].y1 = b;
    fr(j, 1, i - 1)
    {
      seg = max(seg, sqrt((ar[j].x1 - ar[i].x1) * (ar[j].x1 - ar[i].x1) + (ar[j].y1 - ar[i].y1) * (ar[j].y1 - ar[i].y1)));
    }
  }
  cout << seg;
  return 0;
}