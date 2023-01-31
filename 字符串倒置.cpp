#include<iostream>
using namespace std;
int main()
{
    string x;
	int t=0,k=0,n;
	while(cin>>n){
	getchar();
	for(int i=1;i<=n;i++)
	{
	getline(cin,x);
	cout<<"Case "<<++k<<": ";
	for(int j=x.length()-1;j>=0;j--)
	{
		cout<<x[j];
	}
	cout<<endl;
}
}
	return 0;
}
