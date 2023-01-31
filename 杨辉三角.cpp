#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[101][101]={0};
	a[1][1]=1;
	cin>>n;
	cout<<a[1][1]<<endl;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=i;j++){
			a[i][j]=a[i-1][j]+a[i-1][j-1];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
