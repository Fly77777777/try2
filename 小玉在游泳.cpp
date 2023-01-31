#include<bits/stdc++.h>
using namespace std;
int main(){
	double len,sum=2,t,m=2;
	cin>>len;
	if(len<=2){
		cout<<1;
		return 0;
	}
	else{
	for(int i=1;i<1000;i++){
		m*=0.98;
		sum+=m;
		if(sum>=len){
			t=i+1;
			break;
		}
	  }
    }
    cout<<t;
    return 0;
}
