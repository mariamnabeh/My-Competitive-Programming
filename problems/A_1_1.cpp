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
    ll n; cin>>n; 
    string s; cin>>s;
    string maxx=s;
   for(int i=1;i<=n-1;i++){
    if(maxx[i-1]=='1'&&maxx[i+1]=='1'){
      maxx[i]='1' ; 

    }}
string minn=maxx;
for(int i=1;i<=n-1;i++){
    if(minn[i-1]=='1'&&minn[i+1]=='1'){
      minn[i]='0' ; 
}
    
} ll count1=0, count2=0;
for(int i=0;i<n;i++){
if(minn[i]=='1') count1++;
if(maxx[i]=='1') count2++;
}
   
   cout<<count1<<' '<<count2<<el;
}
int main() {
cin.tie(0)->sync_with_stdio(0);

int t ;
cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }

// shortcuts:
//"os" for orderd_set+orderd_mulitset, "pw" for fast_power function :)
    M_NABEH
}