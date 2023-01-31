#include<bits/stdc++.h>
using namespace std;
int main(){
    int e;
    float m;
    cin>>e;
    if(e>=0&&e<=150) m=e*0.4463;
    else if(e>=151&&e<=400) m=150*0.4463+(e-150)*0.4663;
    else if(e>=401) m=150*0.4463+250*0.4663+(e-400)*0.5663;
    cout<<setprecision(1)<<fixed<<m;
    return 0;
}