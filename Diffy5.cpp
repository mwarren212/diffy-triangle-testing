#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	int side1, side2, side3, side4, side5, temp1, temp2, temp3, temp4, temp5, count = 0;
	cout << "Enter five side values, separated by spaces: ";
	cin >> side1 >> side2 >> side3 >> side4 >> side5;

	while ((side1 != 0) || (side2 != 0) || (side3 != 0) || (side4 != 0) || (side5 != 0)) {
		temp1 = side1 - side2;
		temp2 = side2 - side3;
		temp3 = side3 - side4;
		temp4 = side4 - side5;
		temp5 = side1 - side5;

		side1 = abs(temp1);
		side2 = abs(temp2);
		side3 = abs(temp3);
		side4 = abs(temp4);
		side5 = abs(temp5);
		cout << side1 << " " << side2 << " " << side3 << " " << side4 << " " << side5 << endl;
		++count;
		if (count > 999) {
			cout << "Iterations have exceeded 1000" << endl;
			break;
		}
	}
	cout << count + 1 << " Iterations" << endl;
	return 0;
}
