#include <iostream>
using namespace std;
void spaceMessage(string a, int i)
{
	int length = a.length();
	int pos2 = 0;
	for (i = 0; i < length; i++)
	{
		char b = a[i];

		int ASCII = int(b);
		if (ASCII == 91)
		{
			char num = a[i + 1];
			int ASCII2 = int(num);
			int pos = i;

			for (int j = i; j < length; j++)
			{
				char b = a[j];
				int ASCII = int(b);
				if (ASCII == 93)
				{
					pos2 = j;
					break;
				}
			}
			while ((ASCII2 - 48) > 0)
			{

				for (pos + 2; pos + 2 < pos2 ; pos++)
				{
					cout << a[pos + 2];
				}
				ASCII2--;
			}
			goto jump;
		}
		else if (ASCII != 91 && ASCII != 93)
			cout << a[i];

	}
	spaceMessage(a, pos2);
jump:
	cout << "END";
}
void main()
{
	string a;
	cin >> a;
	int i = 0;
	spaceMessage(a,i);
}