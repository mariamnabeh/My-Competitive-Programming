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

ll rec(ll n,ll  m){
if (m%n!=0) return -1;
ll count=0; ll x=m/n;
if(x==1) return 0;
if(x%2==0){
count=rec(n, m/2);

  if (count == -1) return -1;
        return count + 1;

}

if(x%3==0){
count=rec(n, m/3);

  if (count == -1) return -1;
        return count + 1;

}
    return -1;

}

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    ll a, b;
    cin>>a>>b;
    if(a>b){
        cout<<-1<<el;
    }
else{cout<<rec(a,b)<<el;} 



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