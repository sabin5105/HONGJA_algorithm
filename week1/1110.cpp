#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int TEN, ONE, NEWTEN, NEWONE, SUM, NEWSUM, cnt = 0;
	NEWSUM = n;
	while (1)
	{
		TEN = NEWSUM / 10;
		ONE = NEWSUM % 10;
		SUM = TEN + ONE;
		NEWONE = SUM % 10;
		NEWTEN = ONE;
		NEWSUM = NEWTEN * 10 + NEWONE;
		cnt++;
		if (NEWSUM == n)
			break;
	}
	cout << cnt;
}