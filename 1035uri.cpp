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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int g=c+d;
    int h=a+b;
    if(b>c && d>a && g>h && a%2==0){
        cout<<"Valores aceitos"<<endl;
    }else{
        cout<<"Valores nao aceitos"<<endl;
    }

    

    return 0;
}