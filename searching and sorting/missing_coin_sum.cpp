/*      Ты переводишь! вы попались на это.    */
#include<bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef int64_t ll;
typedef long double ld;
typedef long long unsigned llu;
#define test                int test; cin>>test; while(test--)
#define loop(i,n,k)         for(int i=n;i<k;i++)
#define rloop(i,n,k)        for(int i=n;i>=k;i--)
#define INT(a)              int a;scanf("%d",&a);
#define intin(temp)         scanf("%d",&temp);
#define longin(temp)        scanf("%lld",&temp);
#define LLI(a)              ll a;scanf("%lld",&a);
#define DOUBLE(a)           double a;scanf("%f",&a);
#define LD(a)               long double a;scanf("%lf",&a);
#define pb(i)               push_back(i)
#define sz(i)               i.size()
#define mkp(i,j)            make_pair(i,j)
#define ip                  pair<int,int>
#define lp                  pair<ll,ll>
#define FOR(i,n)            for(i=0;i<n;i++)
#define range(v)            v.begin(),v.end()
#define bye                 return 0;
#define file                freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
template<class c>
c gcd (c a,c b){
    if(b==0)
        return a;
    gcd(b,a%b);
}
template<class c>
c lcm(c a,c b){
    return a/gcd(a,b)*b;
}
template<class a>
bool prime(a n){
    for(a i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
bool bigger(pair<int,int>picachu,pair<int,int> qicachu){
    return (picachu.first<qicachu.first);
}void printarr(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
int chartoint(char c) {
    if (c >= 'a' && c <= 'z') return c - 'a';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 26;
    return 52;
}
int kadane(int arr[],int n){
    int maximum= arr[0];
    int max_so_far = 0;
    for(int i=0;i<n;i++){
        max_so_far+=arr[i];
        if(max_so_far>maximum)
            maximum = max_so_far;
        if(max_so_far<0)
            max_so_far = 0;
    }
    return maximum;
}
const int MOD = 1000000007;
void run(){ 
    int n;
    cin  >> n;
    int a[n];
    loop(i,0,n) cin >> a[i];
    sort(a,a+n);
    ll res = 1;
    for(int i = 0;i<n && a[i]<=res;i++)
        res = res+a[i];
    cout << res << endl;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("error.txt","w",stderr);
        freopen("output.txt","w",stdout);
    #endif
    hi;  
    { 
        run(); 
    }
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    bye;
}