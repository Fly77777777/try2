#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,t,m;
    cin>>l;
    m=l;
    if(l==1){
        cout<<1;
        return 0;
    }
    for(int i=1;i<=m;i++){
        l/=2;
        if(l==1){
            t=i+1;
            break;
        }
    }
    cout<<t;
    return 0;
}