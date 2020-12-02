// DiffyTriangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	int side1, side2, side3, temp1, temp2, temp3, count = 0;
	cout << "Enter Three points of a triangle, separated by spaces: ";
	cin >> side1 >> side2 >> side3;
	cout << side1 << " " << side2 << " " << side3 << endl;
	while ((side1 != 0) || (side2 != 0) || (side3 != 0)) {
		temp1 = side1 - side2;
		temp2 = side2 - side3;
		temp3 = side1 - side3;

		side1 = abs(temp1);
		side2 = abs(temp2);
		side3 = abs(temp3);
		cout << side1 << " " << side2 << " " << side3 << endl;
		++count;
		if (count >= 999) {
			cout << "Iterations have exceeded 1000" << endl;
			break;
		}
	}
	cout <<  count + 1 << " Iterations" << endl;
    return 0;
}

