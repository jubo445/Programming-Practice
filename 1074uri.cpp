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
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >>n;
        if( n==0)
        {
            cout<< "NULL" << endl;
        }
        else if(n<0 && n%2==0)
        {
            cout<< "EVEN NEGATIVE" << endl;
        }
        else if( n<0 && n%2!=0)
        {
            cout<< "ODD NEGATIVE" << endl;
        }
        else if(n>0 && n%2==0)
        {
            cout<< "EVEN POSITIVE" << endl;
        }
        else if( n>0 && n%2!=0)
        {
            cout<< "ODD POSITIVE" << endl;
        }
    }
    

    

    return 0;
}