//下标标记为false是非素数，下标标记为true是素数 
//rmy 
//2020/1/26 
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const int n=100;
bool prime [n+1];
int main()
{
	//首先默认所有数都是素数 
	for(int i=0;i<=n;i++)  prime [i]=true;
	prime[1]=false;//1不是素数 
	//如果这个数是素数，那么这个数的倍数不是素数 
	for(int i=2;i<sqrt(n);i++)
	if(prime[i])
		for(int j=2;j<=n/i;j++)
		prime[i*j]=false;
	//按每行5个数输出素数	
	for(int i=2,t=0;i<=n;i++)
	if(prime[i])
	{		
	cout<<setw(5)<<i;
	++t;
	if(t%5==0)  cout<<endl;
    }
	return 0; 
 } 
