#include <bits/stdc++.h>
using namespace std;
int even(int n)
{
	if(n%2==0)
		return 1;
	else return 0;
}
int main()
{
	int a=1, b=2, t=0, sum=2;
	vector <int> v;
	v.push_back(2);
	while(t<=4000000)
	{
		if(t!=0 && even(t)==1)
		{
			v.push_back(t);
			sum+=t;
		}
		t=a+b;
		a=b; b=t;
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl<<sum;
	return 0;
}
