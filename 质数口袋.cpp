#include<bits/stdc++.h>
using namespace std;
bool prime(int c){
    if(c==1) return 0;
    for(int j=2;j<=sqrt(c);j++){
        if(c%j==0) return 0;
    }
    return 1;
}
int main(){
    int L,s=0,k=0;
    cin>>L;
    for(int i=2;i<=1500;i++){
        if(prime(i)==1){
            s+=i;
            if(s<=L){
            cout<<i<<endl;
            k++;
            }
        }
        if(s>L) break;
    }
    cout<<k;
    return 0;
}