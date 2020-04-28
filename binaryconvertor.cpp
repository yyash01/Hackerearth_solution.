#include<iostream>
using namespace std;
int main() {
	int n,rem,sum=0,base = 1;
	cin>>n;
	while(n>0)
	{
		rem = n%10;
		sum += rem*base;
		n = n/10;
		base = base*2;
	}
	cout<<sum<<endl;
}
