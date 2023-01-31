#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105],num=0,t=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) continue;
			if(a[i]-a[j]>=0){
				for(int k=1;k<=n;k++){
					if(k==i||k==j) continue;
					if(a[k]==a[i]-a[j]){
						num++;
						goto here;
					}
				}
			}
		}
here:
	t=0;
	}
	cout<<num;
	return 0;
}
