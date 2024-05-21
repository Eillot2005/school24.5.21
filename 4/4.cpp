#include <iostream>
#include<list>
using namespace std;
int main()
{
	char a;
	int b;
	int time;
	cin >> time;
	for (int i=0; i<time; i++)
	{
		cin >> a >> b;
		if ('A' <= a && a <= 'Z')
		{
			cout << a - 'A' + 1 + b << endl;
		}
		else
		{
			cout << -(a -'a'+ 1) + b << endl;
		}
	}
}
