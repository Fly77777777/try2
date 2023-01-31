#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10002],t=1;
    int m=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(m<n){
        for(int i=m;i<n;i++){
            if(a[i+1]-a[i]==1) t++;
            else{
                m=i+1;
                break;
            }
        }
        if(t>max) max=t;
        t=1;
    }
    cout<<max;
    return 0;
}