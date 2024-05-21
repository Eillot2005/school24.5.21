#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		int sign = 0;
		for (int i = m; i <= n; i++)
		{
			int temp = i;
			int sum = pow(temp / 100 % 10, 3) + pow(temp / 10 % 10, 3) + pow(temp % 10, 3);
			if (sum == temp)
			{
				cout << i <<" ";
				sign = 1;
			}
		}
		if (sign == 0)cout << "no";
	}
}