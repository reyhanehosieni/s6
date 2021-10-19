
#include<iostream>

using namespace std;

int main() 
{

	int x = 1, g = 1, z, k=2, n;


	cout << " n ra vared konid: ";

	cin >> n;

	cout << x << " " << g << " ";

	z = x + g;

	cout << z << " ";

	while (k < n)
	{
		z = x + g;
		cout << z << " ";
		x = g;

		g = z;

		
		k++;

	}
	system("pause");

	return 0;
}
