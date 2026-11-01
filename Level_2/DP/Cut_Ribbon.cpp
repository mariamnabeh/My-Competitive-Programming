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
#define el '\n'
const ll N=4005;



ll n,a,b,c;
ll dp[N];
ll solve(ll i){
if(i==0) return 0;
if(i<0) return  -INF;
if(dp[i]!=-1) return dp[i];
ll rem=max({solve(i-a),solve(i-b),solve(i-c)})+1;
return dp[i]=rem;
}








//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
  cin>>n>>a>>b>>c;
memset(dp,-1,sizeof dp);

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

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}