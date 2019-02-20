#include<bits/stdc++.h>
using namespace std;
int pal(int n)
{
	int temp=n,sum=0, c=-1;
	while(temp > 0)
	{
		int d=temp%10;c++;
	       temp/=n;
	}	       
	temp=n;
	cout<<c<<endl;
	while(temp>0)
	{
		int d=temp%10;
		sum+=d*pow(10,c--);
		temp/=10;
	}
	cout<<sum<<endl;
	if(sum==n)
		return 1;
	else return 0;
}
int main()
{
	int big=0;/*
	for(int i=10;i<=99;i++)
	{
		for(int j=10;j<=99;j++)
		{
			int num=i*j;
			if(pal(num)==1)
				big=num;
		}
	}*/
	int num=9009;
	if(pal(num)==1) big=num;
	cout<<big<<endl;
	return 0;
}
