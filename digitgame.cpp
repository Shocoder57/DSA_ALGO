
// Problem : A. Digit Game
// Contest : Codeforces - Codeforces Round #671 (Div. 2)
// URL : https://codeforces.com/contest/1419/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
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
#define vi vector<int>
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
}
int main()
{
	   int t;cin>>t;
    while(t--){
        int l,n;cin>>l>>n;
        if(l==1){
            if(n%2) cout<<1;
            else cout<<2;
        }
        else{
            if(l%2){
                int f=0;
            string s=to_string(n);
            for(int i=0;i<s.length();i+=2){
                if((s[i]-'0')%2){
                    f=1;break;
                }
            }
            if(f==1) cout<<1;
            else cout<<2;
        }
        else{
            int f=0;
          string s=to_string(n);
            for(int i=1;i<s.length();i+=2){
                if((s[i]-'0')%2==0){
                    f=1;break;
                }
            }
            if(f==1) cout<<2;
            else cout<<1;   
        }
    }
 cout<<endl;
}
}