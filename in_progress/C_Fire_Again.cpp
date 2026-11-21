
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
#define GETBIT(x, i) (((x) >> (i)) & 1ULL)
#define SETBIT(x, i) ((x) | (1ULL << (i)))
#define FLIPBIT(x, i) ((x) ^ (1ULL << (i)))
#define CLEARBIT(x, i) ((x) & ~(1ULL << (i)))

long long mul(long long x, long long y, const long long &mod)
{ return ((x % mod) * (y % mod)) % mod; }

long long add(long long x, long long y, const long long &mod)
{ return (((x % mod) + (y % mod)) % mod + mod) % mod; }

long long sub(long long x, long long y, const long long &mod)
{ return (((x % mod) - (y % mod)) % mod + mod) % mod; }

//وَأَنَّ سَعْيَهُ سَوْفَ يُرَى

void Remy() {
    int n, m;
    cin >> n >> m;

    int k;
    cin >> k;

    queue<pair<int,int>> q;
    vector<vector<char>> vis(n + 1, vector<char>(m + 1, 0));

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;

        q.push({x, y});
        vis[x][y] = 1;
    }

    int ansx = 1, ansy = 1;

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        ansx = x;
        ansy = y;

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 1 && nx <= n &&
               ny >= 1 && ny <= m &&
               !vis[nx][ny]) {

                vis[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }

    cout << ansx << ' ' << ansy << el;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;

    while (t--) {
        Remy();
    }

    M_NABEH
}
