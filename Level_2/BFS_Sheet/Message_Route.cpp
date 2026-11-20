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
 
 
// Bitwise Operations
#define GETBIT(x, i) (((x) >> (i)) & 1ULL)   // Get bit
#define SETBIT(x, i) ((x) | (1ULL << (i)))   // Set bit
#define FLIPBIT(x, i) ((x) ^ (1ULL << (i)))  // Flip bit
#define CLEARBIT(x, i) ((x) & ~(1ULL << (i))) // Clear bit


long long mul(long long x, long long y, const long long &mod) 
{ return ((x % mod) * (y % mod)) % mod; }
long long add(long long x, long long y, const long long &mod)
{ return (((x % mod) + (y % mod)) % mod + mod) % mod; }
long long sub(long long x, long long y, const long long &mod)
{ return (((x % mod) - (y % mod)) % mod + mod) % mod;} 



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    
ll n,m; cin>>n>>m;
vector<vector<ll>>adj(n+1);
for(int i=0;i<m;i++){
        int u, v;
    cin>>u>>v;
    adj[u].push_back(v) ; adj[v].push_back(u);
}

queue<ll>q;
vector<ll>vis(n+1, 0);
vector<ll>d(n+1, -1);
   vector<ll> parent(n + 1, -1);
q.push(1); vis[1]=1; d[1] = 0;
while(!q.empty()){
    int u=q.front() ;
    q.pop();
    for(int v:adj[u]){
        if(!vis[v]){
           vis[v] =1;
           d[v]=d[u]+1;
            parent[v] = u;
           q.push(v);
        }
    }
}

if(d[n]==-1) return void (cout<<"IMPOSSIBLE"<<el);
int cur=n;
vector<ll>path;
while(cur!=-1){
path.push_back(cur);
cur=parent[cur];
}
reverse(all(path));

 cout << path.size() << el;

    for (int i : path) {
        cout << i << ' ';
    }
    cout << el;
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