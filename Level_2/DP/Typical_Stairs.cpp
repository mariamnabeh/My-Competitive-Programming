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
const ll N=1e5+5;
ll n,m;
bool broken[N];
ll dp[N];


ll solve(ll i){

if(i==n)return 1;
if(i>n|| broken[i]) return 0;
if(dp[i]!=-1) return dp[i];

 ll ans = (solve(i + 1) + solve(i + 2)) % MOD;

return dp[i]= ans;



}



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
 cin>>n>>m;
 memset(dp,-1,sizeof dp);
  memset(broken, false, sizeof broken);

 for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        broken[x] = true;
    }

cout<<solve(0)<<endl;










}



int main() {
cin.tie(0)->sync_with_stdio(0);



        Remy();


}