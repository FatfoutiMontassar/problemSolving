#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define pii pair<int,int >
#define piii pair<int,pair<int,int > >
#define pss pair<string ,string >
#define vi vector<int >
#define vll vector<ll >
#define vii vector<pii >
#define vvi vector<vi >
#define mii map<int,int >
#define msi map<string,int >
#define mis map<int,string >
#define mss map<string ,string >
#define pw(x) (1ll<<(x))
#define buli(x) __builtin_popcountll(x)
#define all(x) x.begin(),x.end()
#define fix(x) fixed<<setprecision(x)
#define fill(a,x) memset( a , x , sizeof(a) )
#define point complex< ld >
#define X real()
#define Y imag()

#define INF (int)(1e9+7)
#define EPS 1e-9
#define abs(x) (((x) < 0) ? - (x) : (x))
#define zero(x) (abs (x) < EPS)
#define equal(a,b) (zero ((a) - (b)))
#define PI acos (-1)
#define pc(x) putchar_unlocked(x);

using namespace std ;

/*********************************************************************************/
/*********************************************************************************/
/*********************************************************************************/
ld a,b,c ;

int main(){

#ifndef ONLINE_JUDGE
    freopen("/home/fatfouti/Documents/in.in"   , "r" ,stdin  ) ;
//    freopen("/home/fatfouti/Documents/out.out" , "w" ,stdout ) ;
#endif
    cin >> a >> b >> c ;
    ld ans = ( -b + sqrt( b*b - 4*a*c ) )/(2*a) ;
    cout << fix(20) << ans << endl;

//    printf("\nTime elapsed: %dms", 1000 * clock() / CLOCKS_PER_SEC);
//    fflush(stdout);
return 0 ;
}
