#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <bitset>
#include <cassert>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    FAST
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cout<<fixed<<setprecision(2);
     double a;
     cin>>a;
     int q=a*100;
     int t,p;
     t=q/100;
     p=q%100;
     cout<<"NOTAS:"<<endl;
     int note[6]={100,50,20,10,5,2};
     for(int i=0;i<6;i++){
     cout<<t/note[i]<<" nota(s) de R$ "<<note[i]<<".00"<<endl;
       t=t%note[i];
     }
     p=t*100+p; 
     cout<<"MOEDAS:"<<endl;
     int coin[6]={100,50,25,10,5,1};
     for(int i=0;i<6;i++){
     cout<<p/coin[i]<<" moeda(s) de R$ "<<coin[i]/100.00<<endl;
       p=p%coin[i];
     }


    return 0;
}