#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using it = list<ll>::iterator;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
const long long N = 1e5+5;
#define el '\n'
 ll dp[N];ll n;
ll solve(ll i){
if(i==0) return 0;
if(i<0) return INF;
if(dp[i]!=-1) return dp[i];
ll min_ops = 1e9;
min_ops = min(min_ops, 1 + solve(i - 1));

for (ll p = 6; p <= i; p *= 6) {
        min_ops = min(min_ops, 1 + solve(i - p));
    }

for(ll p=9;p<=i;p*=9){
   min_ops = min(min_ops, 1 + solve(i - p));  
}






return dp[i] = min_ops;

 }


//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
cin>>n;
memset(dp,-1, sizeof(dp));
cout<<solve(n)<<el;
    




}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t = 1;
//cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }


}