// A program that illustrates the for loop

#include <iostream>
using namespace std;

int main()
{
	int count;

	for (count = 1; count <= 100; count = count + 1)
	{
		cout << count << " ";
	}

	//Adding new line, as AFTER the loop finishes, new line is created.
	cout << "\n";
	system("pause");
	return 0;
}