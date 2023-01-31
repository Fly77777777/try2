#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,m,t=0,a[10001],u[101],v[101];
    cin>>l>>m;
    for(int i=1;i<=m;i++){
        cin>>u[i]>>v[i];
    }
    for(int i=0;i<=10000;i++){
        a[i]=1;
    }
    for(int j=0;j<=l;j++){
        for(int q=1;q<=m;q++){
            if(j>=u[q]&&j<=v[q]) a[j]=0;
        }
    }
    for(int j=0;j<=l;j++){
        if(a[j]==1) t++;
    }
    cout<<t;
    return 0;
}