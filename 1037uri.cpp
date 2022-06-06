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
     double z;
     cin>>z;
     if(z<0 || z>100){
         cout<<"Fora de intervalo"<<endl;
     }else if(z==0 || z<=25){
         cout<<"Intervalo [0,25]"<<endl;
     }else if(z==25 || z<=50){

        cout<<"Intervalo (25,50]"<<endl;
     }else if(z==50 || z<=75){
         cout<<"Intervalo (50,75]"<<endl;
     }else if(z==75 || z<=100){
         cout<<"Intervalo (75,100]"<<endl;
     }
    

    return 0;
}