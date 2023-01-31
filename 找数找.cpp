#include<iostream> 
using namespace std;
int f[1005];
int main()
{
	int n;
	cin >> n;
	f[1] = 1;
	for (int i = 2; i <= n; i++){
		if (i % 2 == 0){
			f[i] = f[i - 1] + f[i / 2];
		}
		else
		{
			f[i] = f[i - 1];
		}
	}
	cout << f[n];
	return 0;
}

