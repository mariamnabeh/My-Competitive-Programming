#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vll = vector<long long>;
ll const N=1001;
char a[N][N];
bool visted[N][N];
ll dist[N][N];

ll dx={1,-1,0,0}; ll dy={0,0,1,-1};




void Remy() {
ll n,m; cin>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i]>>a[j];
        visted[i][j]=0;
    }
}

deque<pair<ll,ll>>q;
q.push_back({0,0}); visited[0][0]=1;dist[0][0]=0;
while(!q.empty()){
auto [x,y]=q.front(); q.pop_front();
for(int t=0;t<4;i++){
    int i=x+dx[t];
    int j=y+dy[t];
    if(i>=n||i<0|| j>=m||j<0) continue;
    if(visted[i][j]) continue;
    visted[i][j]=1;
    if(visted[x][y]==a[i][j]){
        dist[i][j]=dist[x][y]+0;
        q.push_front({i,j});
    }
   else{
     dist[i][j]=dist[x][y]+1;
     q.push_front({i,j});
   } 
}
}



cout<<dist[n-1][m-1]<<endl;


    
}

int main() {
 cin.tie(0)->sync_with_stdio(0); 

  cout << fixed << setprecision(10);

    int t = 1;
    //cin >> t;
    while (t--) {
        Remy();
    }


}