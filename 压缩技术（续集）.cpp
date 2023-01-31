#include <bits/stdc++.h>
using namespace std;
char a,b='0';
int n,ans[1000001],p=1;
int main(){
	
    while(cin>>a)
    {
 	   n++;
 	   if(a==b) ans[p]++;
 	   else{
 		   ans[++p]++;
 		   b=a;
	    }	
    }
    cout<<sqrt(n);
    for(int i=1;i<=p;i++){
 	   cout<<" "<<ans[i];
    }
    return 0;
}

