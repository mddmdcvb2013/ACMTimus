#include <iostream>
#include <set>
#include <string>
using namespace std;

void main()
{
	int n;
	cin >> n;

	int now, last, count = 1;
	cin >> last;
	for (int i = 1; i < n; i++)
	{
		cin >> now;
		if (now != last)
		{
			cout << count << " " << last << " ";
			count = 1;
			last = now;
		}
		else
		{
			count++;
		}
	}
	cout << count << " " << last << endl;
}