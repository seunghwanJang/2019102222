#include <iostream>

using namespace std;

int main()
{
	cout << "print mul table_________________" << endl;
	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 10; j++)
			cout << "\t" << i << " X " << j << " = " << i * j << endl;
		cout << endl;
	}
	return 0;
}