//BISMILLAH
#include<bits/stdc++.h>
using namespace std;

#define sp " "
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
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

ll ind[mx];
ll a[mx];
/*--------------------------------------------------------------------------------------------------------------------------*/

int main() {

    void dfs(int i,int j,int initialColor,int newClr, vector<vector<int>>& image){
      int n = image.size();
      int m = image[0].size();
      if(i < 0 || j < 0) return;
      if(i >= n || j >= m) return;
      if(initialColor != image[i][j]) return;
      image[i][j] = newClr;
      dfs(i-1,j,initialColor,newClr,image);
      dfs(i+1,j,initialColor,newClr,image);
      dfs(i,j-1,initialColor,newClr,image);
      dfs(i,j+1,initialColor,newClr,image);
 }
 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int initialColor = image[sr][sc];
       if(initialColor != newColor) dfs(sr,sc,initialColor,newColor,image);
       return image;
    }
     

}
    