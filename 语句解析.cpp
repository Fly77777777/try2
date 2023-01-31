#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[20],b[20],c[20];
	a[0]='0';
	b[0]='0';
	c[0]='0';
	string str;
	cin>>str;
	for(int i=0;i<str.size();i+=5){
		if(str[i]=='a'&&str[i+3]!='a'){
			if(str[i+3]=='b') a[0]=b[0];
			else if(str[i+3]=='c') a[0]=c[0];
			else a[0]=str[i+3];
		}
		if(str[i]=='b'&&str[i+3]!='b'){
			if(str[i+3]=='a') b[0]=a[0];
			else if(str[i+3]=='c') b[0]=c[0];
			else b[0]=str[i+3];
		}
		if(str[i]=='c'&&str[i+3]!='c'){
			if(str[i+3]=='b') c[0]=b[0];
			else if(str[i+3]=='a') c[0]=a[0];
			else c[0]=str[i+3];
		}
	}
	cout<<a[0]<<" "<<b[0]<<" "<<c[0];
	return 0;
}
