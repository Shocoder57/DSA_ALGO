/*
	ARIJIT SUR 
	@duke_knight
	@surcode
    @comeback
	IIT ISM 
 */
#include<bits/stdc++.h>
#define SIZE 100008
#define mod (ll)(1e9+7)
#define INF 0x3f3f3f3f
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define abs(a) (a>0?a:-a)
#define all(a) a.begin(),a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define pb push_back
#define pi pair<int,int>
#define sort(a) sort(all(a))
#define reverse(a) reverse(all(a))
#define input(a) {for(int i1=0;i1<a.size();i1++) cin>>a[i1];}
#define display(a) {for(int i1=0;i1<a.size();i1++) cout<<a[i1]<<" "; cout<<endl;}
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
vector<int> lis(vector<int> a){
    int n = a.size();vector<int> sum(n,0);
    for(int i=0;i<n;i++){
        bool flag = 0;int maxindex;
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                if(!flag) flag = 1,maxindex = j;
                else
                if(sum[maxindex] < sum[j]) maxindex = j;
            }
        }
        sum[i] += a[i];
        if(flag) sum[i] += sum[maxindex];
    }
    return sum;
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n); input(a);
    vector<int> forward = lis(a);
    reverse(a);
    vector<int> backward = lis(a);
    reverse(backward); reverse(a);
    for(int i=0;i<n;i++) backward[i] += forward[i]-a[i];
    cout<<maxelem(backward)<<endl;
}
int main()
{
    IOS
    int t=1;
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}