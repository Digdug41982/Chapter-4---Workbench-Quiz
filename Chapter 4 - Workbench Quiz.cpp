// Chapter 4 - Workbench Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int L1, L2, W1, W2;
	cout << "Enter the length and width of the first rectangle: ";
	cin >> L1 >> W1;
	cout << "Enter the length and width of the second rectangle: ";
	cin >> L2 >> W2;
	if (L1 * W1 > L2 * W2)
	{
		cout << "The first rectangle is larger." << endl;
	}
	else if (L1 * W1 < L2 * W2)
	{
		cout << "The second rectangle is larger." << endl;
	}
	else
	{
		cout << "Both rectangles are equal in area." << endl;
	}
}