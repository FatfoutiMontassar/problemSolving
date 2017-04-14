#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define INF (int)(1e9+7)
#define PI acos(-1)
#define F first
#define S second
int t ;
string s ;

int main(){

#ifndef ONLINE_JUDGE
    freopen("/home/montaf/Documents/in.in"   , "r" ,stdin  ) ;
    freopen("/home/montaf/Documents/out.out" , "w" ,stdout ) ;
#endif
    int t ;
    cin >> t ;
    int tc(1) ;
    while(t--){
        cin >> s ;
        deque<char > Q ;
        char maxC = 'A' ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]>=maxC){
                Q.push_front(s[i]) ;
            }else{
                Q.push_back(s[i]) ;
            }
            maxC = max(maxC,s[i]) ;
        }
        string out = "" ;
        for(int i = 0 ; i < s.size() ; i++){
            out += Q.front() ;
            Q.pop_front() ;
        }
        cout << "Case #"<<tc++<<": "<<out << endl;
    }


    return 0;
}
