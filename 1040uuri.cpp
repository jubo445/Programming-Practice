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
double a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
double avg1=((a*2)+(b*3)+(c*4)+d)/10;
cout<<"Media: "<<fixed<<setprecision(1)<<avg1<<endl;
if(avg1>=7.0){
    cout<<"Aluno aprovado."<<endl;
}else if(avg1<5.0){
    cout<<"Aluno reprovado."<<endl;
}else{
    cout<<"Aluno em exame."<<endl;
    double avg2=(avg1+e)/2;
cout<<"Nota do exame: "<<fixed<<setprecision(1)<<e<<endl;
if(avg2>=5.0){cout<<"Aluno aprovado."<<endl;}
else{cout<<"Aluno reprovado."<<endl;}
cout<<"Media final: "<<fixed<<setprecision(1)<<avg2<<endl;
}

    

    return 0;
}