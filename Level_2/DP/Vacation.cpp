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
 const ll N=1e5+5;
 ll dp[N][4];
ll n;
ll a[N],b[N],c[N];

ll solve(ll day, ll l_action){
if(day==n) return 0;
if(dp[day][l_action]!=-1) return dp[day][l_action];

ll max_h=0;
if(l_action!=0) max_h=max(max_h, solve(day+1,0)+a[day]);
if(l_action!=1)max_h=max(max_h, solve(day+1,1)+b[day]);
if(l_action!=2)max_h=max(max_h, solve(day+1,2)+c[day]);

return dp[day][l_action] = max_h;
}
void remy(){
cin>>n;



for(int i=0;i<n;i++){
cin>>a[i]>>b[i]>>c[i];
}
memset(dp,-1, sizeof(dp));

cout<<solve(0,3)<<el;
}


int main() {
    cin.tie(0)->sync_with_stdio(0);
remy();
    }

