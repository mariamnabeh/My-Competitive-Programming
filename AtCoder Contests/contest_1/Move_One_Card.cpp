#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define M_NABEH return 0;
const ll MOD = 1e9 + 7;
const long long INF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;
 

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    
ll n; cin>>n; vll a(n); vll b(n);
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
vll s=a; vll c=b;
sort(all(s)); sort(all(c));
if(s!=c){
    cout<<"No"<<endl;
    return;
}
ll i=0,j=0, m=0;
while(i<n&&j<n){
    if(a[i]==b[j]){
        i++;j++;
        m++;
    }
    else{
        i++;
        m++;
    }
}
if(m>=n-1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
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


}