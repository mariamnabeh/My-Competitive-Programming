#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<long long>;



//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى
void Remy() {
    ll n; cin>>n;
    vll a(n); for(int i=0;i<n;i++) cin>>a[i];

    ll count=0;

    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])== gcd(a[i], a[i+1])){
            count++;
        }
    }
cout<<count<<endl;






}



int main() {
cin.tie(0)->sync_with_stdio(0);

int t ;
cin >> t;
cout << fixed << setprecision(10);
    while (t--) {

        Remy();
    }



}