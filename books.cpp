
// Problem : B. Books
// Contest : Codeforces - Codeforces Round #171 (Div. 2)
// URL : https://codeforces.com/problemset/problem/279/B
// Memory Limit : 256 MB
// Time Limit : 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define vi vector<ll>
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) ((a)>0?(a):-(a))
#define sc(a) scanf("%d\n",&a);
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define pqq priority_queue
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned ll
using namespace std;
void solve(){
	int n,ans=0,j,d,t;cin>>n>>t; 
	vi a(n),dp(n,0); input(a);
	for(int i=0;i<n;i++){
		dp[i] = a[i];
		if(i) dp[i] += dp[i-1];
	}
	for(int i=0;i<n;i++){
		if(i) d = dp[i-1];
		else d = 0;
		int start=i, end = n-1;
		while(start<=end){
			int mid = (start+end)/2, x = dp[mid] - d;
			if(x>t)end = mid-1;
			else start = mid+1;
		}
		ans = max(ans,start-i);
	}
	cout<<ans<<endl;
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}