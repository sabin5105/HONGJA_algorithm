#include<iostream>
#include<algorithm>
using namespace std;

int smallman[10];
int answer[8];
int main()
{
	for (int i = 0; i < 9; i++)
		cin >> smallman[i];

	sort(smallman, smallman + 9);
	do
	{
		int SUM = 0;
		for (int i = 0; i < 7; i++)
			SUM += smallman[i];
		if (SUM == 100)
		{
			for (int i = 0; i < 7; i++)
			{
				cout << smallman[i] << endl;
			}
			break;
		}
	}while (next_permutation(smallman, smallman + 9));
}