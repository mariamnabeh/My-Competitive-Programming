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
    ll n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll best=0,sum=0;
    for(int i=0;i<n;i++){
sum=max(a[i], sum+a[k]);
best=max(best,sum);
// to calc the max subarray in o(n)
    }

cout<<best<<el;

 vector<long long> divisors;
    
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); 
            
       
            if ((n / i)!= i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    sort(divisors.begin(), divisors.end());
for(auto x:divisors){

    cout<<n<<el;
}
    
}#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define el '\n'

int main() {
    int n = 6;

    vector<vector<int>> adj(n);
    vector<int> dist(n, -1);
    vector<int> par(n, -1);

    // Graph
    adj[0] = {1, 2, 4};
    adj[1] = {3, 4};
    adj[2] = {5};

    int src = 0, dest = 5;

    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty()) {

        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {

            if (dist[neighbor] == -1) {

                dist[neighbor] = dist[node] + 1;
                par[neighbor] = node;

                q.push(neighbor);
            }
        }
    }

    // Check if destination is reachable
    if (dist[dest] == -1) {
        cout << "No Path" << el;
        return 0;
    }

    // Shortest distance
    cout << "Shortest Distance = " << dist[dest] << el;

    // Reconstruct path
    vector<int> path;

    for (int v = dest; v != -1; v = par[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    cout << "Path: ";
    for (int x : path) {
        cout << x << " ";
    }

    return 0;
} vector<long long> divisors;
    
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); 
            
       
            if ((n / i)!= i) {
                divisors.push_back(n / i);
            }
        }
    }
    
    sort(divisors.begin(), divisors.end());
for(auto x:divisors){

    cout<<n<<el;
}
    
}


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