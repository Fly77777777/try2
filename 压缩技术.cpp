#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a[40005]={0},sum1=0,t=0,p=0,b[40005]={0},sum2=0,k;
	cin>>n;
	for(int i=1;i<=40005;i++){
		cin>>b[i];
		sum2+=b[i];
		k=i;
		if(sum2==n*n) break;
	}
	for(int i=1;i<=k;i++){
		sum1+=b[i];
		if(i%2!=0){
			for(int j=p+1;j<=sum1;j++){
				a[j]=0;
				t=j;
			}
		}
		else{
			for(int j=t+1;j<=sum1;j++){
				a[j]=1;
				p=j;
			}
		}
	}
	for(int i=1;i<=n*n;i++){
		cout<<a[i];
		if(i%n==0) cout<<endl; 
	}
	return 0;
}
