#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int length[4];
int main()
{
	while(1)
	{
		for (int i = 0; i < 3; i++)
			cin >> length[i];
		if (length[0] == 0 && length[1] == 0 && length[2] == 0)
			break;

		sort(length, length + 3);
		if (pow(length[0], 2) + pow(length[1], 2) == pow(length[2], 2))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}