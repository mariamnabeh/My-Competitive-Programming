#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using it = list<ll>::iterator;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
#define el '\n'

// وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy()
{

    ll n;
    cin >> n;
    vll a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(all(a));
    ll cur =0,ans=0;
    for(int i=n-1;i>=0;i--){
cur+=a[i];
ans++;
     if (cur > sum / 2) break;

    }
    cout<<ans<<el;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {

        Remy();
    }

    M_NABEH
}