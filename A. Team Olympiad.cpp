#include <bits/stdc++.h>
using namespace std;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define endl '\n'
#define ll long long
#define fi first
#define se second
const long long MOD = 1e9 + 7;
const double pi = 2.0 * acos(0.0);
const double EPS = 1e-6;
double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// U, R, D, L
int main(){
	fastIn;
	int n;
	cin>>n;
	int x;
	vecint p, m, pe;
	for (int i=1; i<=n; i++){
	    cin>>x;
	    if (x == 1){
	        p.push_back(i);
	    }
	    else if (x==2){
	        m.push_back(i);
	    }
	    else{
	        pe.push_back(i);
	    }
	}
	int size = min(p.size(),min(m.size(), pe.size()));
	cout<<size<<"\n";
	for (int i=0; i<size; i++){
	    cout<<p[i]<<" "<<m[i]<<" "<<pe[i]<<"\n";
	}
	
}
