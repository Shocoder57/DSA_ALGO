/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<iostream>
#include<vector>
#define SIZE (ll)(1e6)
#define mod (ll)(1e9+7)
#define va(x) ((x)%mod)
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
bool check(vi &a){
	for(int i=1;i<a.size();i++){
		int x = a[i]&a[i-1];
		if(!x) {
			return 1;
		}
	}
	return 0;
}
void solve(){
	int n;cin>>n;
	if(n==0 || __builtin_popcount(n)==1) {cout<<-1<<endl; return ;}
	vi a(n,0);
	for(int i=0;i<n;i++) a[i]=i+1;
	a[0]=2; a[1]=3; a[2]=1;
	for(int i=3;i+1<n;i++){
		int x = a[i]&a[i-1];
		if((x)==0) swap(a[i],a[i+1]),i+=1;
	}
	if(check(a)) cout<<-1<<endl;
	else
	display(a);
}
int main()
{
    IOS
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}