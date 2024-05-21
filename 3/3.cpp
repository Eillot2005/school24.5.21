#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		float sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += pow(-1.0,i+1) / i;
		}
		cout <<fixed<<setprecision(2)<< sum<< endl;
	}
}
