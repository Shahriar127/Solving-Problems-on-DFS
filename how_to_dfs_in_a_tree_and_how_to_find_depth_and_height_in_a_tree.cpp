//BISMILLAH
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
template<typename T>using
ordered_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

#define sp " "
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define ha cout<<"yes"<<endl;
#define Ha cout<<"Yes"<<endl;
#define HA cout<<"YES"<<endl;
#define Na cout<<"No"<<endl;
#define na cout<<"no"<<endl;
#define NA cout<<"NO"<<endl;
#define in(v)   for(auto &x: v)cin>>x
#define ed "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define TC int t; cin>>t; while(t--)
using ll = long long;
using ull = unsigned long long;
using lld = long double;
const int mx=2e5+13;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*----------------------------------------------------------------------------*/
const int N = 1e5 + 124;
vector<int>v[N];
int depth[N], height[N];
void dfs(int vertex , int parent){
    for(auto child : v[vertex]){
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1; 
        dfs(child,vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}
 


int main() {
    fastio();
    int n; cin >> n;
    for(int i = 0;i < n - 1; i++){
        int a,b; cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(1,0);
    for(int i = 1; i <= n ; i++) cout << depth[i] << sp << height[i] <<ed ;
    cout << ed;
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
   
    
}

    