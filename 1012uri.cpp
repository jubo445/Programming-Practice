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
    double a,b,c;
    cin>>a>>b>>c;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<0.5*a*c<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<3.14159*(c*c)<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<0.5*((a+b)*c)<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<b*b<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<a*b<<endl;


    

    return 0;
}