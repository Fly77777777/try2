#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[101];
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0];
    return 0;
}