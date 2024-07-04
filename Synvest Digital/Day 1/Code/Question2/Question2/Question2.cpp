#include <iostream>
#include <cmath>
using namespace std;
bool function(int v, int a, int h, int d)
{
	int sqv = v * v;
	a = a * 3.14 / 180;
	cout << a;
	cout << sqv << endl;
	double	range = sqv * sin(2 * a)/ 9.81;
	cout << range << endl;
	double  height = sqv * sin(a) * sin(a) * 1 /(2 * 9.81);
	cout << height << endl ;
	if (h == height && (range <= d+0.5 && range >= d-0.5))
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int v, a, h, d;

	cout << "Give Velocity";
	cin >> v;
	cout << "Give Angle";
	cin >> a;
	cout << "Give Height";
	cin >> h;
	cout << "Give Distance";
	cin >> d;
	if (function(v, a, h, d))
	{
		cout << "Ture";
	}
	else
		cout << "False";
}