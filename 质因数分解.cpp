#include<bits/stdc++.h>
using namespace std;
bool flag(int c){
    for(int i=2;i<=sqrt(c);i++){
        if(c%i==0) return 0;
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0&&flag(num/i)==1){
            cout<<num/i;
            break;
        }
    }
    return 0;
}