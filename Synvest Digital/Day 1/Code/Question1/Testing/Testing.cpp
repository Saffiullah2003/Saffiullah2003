#include <iostream>
#include <string>
#include <cstring> 
using namespace std;
void revSpecstring(string a,int length)
{
	char Output_arr[100];

	for (int i = 0 ; i < length; i++)
	{
		char b = a[i];
		int ASCII = int(b);
		if (ASCII == 32 || ASCII == 33 || ASCII == 34 || ASCII == 35 || ASCII == 36 || ASCII == 37 || ASCII == 38 || ASCII == 39 || ASCII == 40 || ASCII == 41 || ASCII == 42 || ASCII == 43 || ASCII == 44 || ASCII == 45 || ASCII == 46 || ASCII == 47 || ASCII ==  48 || ASCII == 49 || ASCII == 50 || ASCII == 51 || ASCII == 52 || ASCII == 53 || ASCII == 54 || ASCII == 55 || ASCII == 56 || ASCII == 57 || ASCII == 58 || ASCII == 59 || ASCII == 60 || ASCII == 61 || ASCII == 62 || ASCII == 63 || ASCII == 64 || ASCII == 91 || ASCII == 92 || ASCII == 93 || ASCII == 94 || ASCII == 95 || ASCII == 96 ||ASCII == 123 || ASCII == 124 || ASCII == 125 || ASCII == 126)
		{
			Output_arr[i] = a[i];
		}
		else if (ASCII == 48 || ASCII == 49 || ASCII == 50 || ASCII == 51 || ASCII == 52 || ASCII == 53 || ASCII == 54 || ASCII == 55 || ASCII == 56 || ASCII == 57)
		{
			Output_arr[i] = a[i];
		}
		else
		{
			int revrse = length - i;
			Output_arr[revrse] = a[i];
		}
	}
	int i = 1;
	while (i<=length)
	{
		cout << Output_arr[i];
		i++;
	}
}
void main()
{
	string a;
	cin >> a;
	int length = a.length();
	revSpecstring(a, length);
}
