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
  double a,b,c;
  cin>>a>>b>>c;
  double d=(b*b)-(4*a*c);
  if(d<0 || a==0){
      cout<<"Impossivel calcular"<<endl;
  }else{
      cout<<"R1 = "<<fixed<<setprecision(5)<<(-b+sqrt(d))/(2*a)<<endl;
      cout<<"R2 = "<<fixed<<setprecision(5)<<(-b-sqrt(d))/(2*a)<<endl;
  }
    

    return 0;
}