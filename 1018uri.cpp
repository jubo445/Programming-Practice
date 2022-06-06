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
    #ifndef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    cout<<n<<endl;
    cout<<n/100<<" nota(s) de R$ 100,00"<<endl;
    n=n%100;
    cout<<n/50<<" nota(s) de R$ 50,00"<<endl;
    n=n%50;
    cout<<n/20<<" nota(s) de R$ 20,00"<<endl;
    n=n%20;
    cout<<n/10<<" nota(s) de R$ 10,00"<<endl;
    n=n%10;
    cout<<n/5<<" nota(s) de R$ 5,00"<<endl;
    n=n%5;
    cout<<n/2<<" nota(s) de R$ 2,00"<<endl;
    n=n%2;
    cout<<n<<" nota(s) de R$ 1,00"<<endl;
    

    

    return 0;
}