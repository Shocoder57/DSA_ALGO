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

string reorderSpaces(string text) {
        stringstream iss(text);
        string line,s=""; vector<string> words; int count = 0;
        while(iss>>line){
        	words.pb(line);
        	count+=1;
        }
        int spaces=0;
        for(char i:text){
        	if(i==' ') spaces++;
        }
       int x = (count>1)?spaces/(count-1):0, y = spaces-x*(count-1);
       for(int i=0;i<words.size();i++){
       	s+=words[i];
       	if(i==words.size()-1) 
       	for(int j=0;j<y;j++) s+=' ';
       	else
       	for(int j=0;j<x;j++) s+=' ';
       }
        return s;
    }
void solve(){
	string line; getline(cin,line);
	cout<<reorderSpaces(line)<<endl;
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