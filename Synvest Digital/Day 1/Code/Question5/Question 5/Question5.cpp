#include <iostream>
#include <string>
using namespace std;
void Depript(int arr[25])
{
	int flag=0;
	int i = 0;
	int j = 0;
	for (i = 0; i < 26 ; i++)
	{
		for (j = 0; j < 25; j++)
		{
			if (i == arr[j])
			{
				break;
			}
			if (j == 25)
			{
				flag = 1;
				break;
			}
			
		}
		if (flag)
			break;
	}
	char a = char(i + 63);
	cout << a;
}
int main()
{
	int arr[25] = { 15, 12, 14, 21, 22, 3, 11, 20, 9, 16, 24, 17, 2, 10, 13, 18, 7, 8, 4, 5, 1, 6, 25,
		23, 26 };
	Depript(arr);
}