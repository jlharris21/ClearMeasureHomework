// ClearMeasure.cpp
// Jonah Harris
// 5/16/2017

#include "ClearMeasureLib.h"
#include <stdarg.h>
#include <iostream>

using namespace std;

namespace ClearMeasure
{

	void NumberReplacement::ReplaceNums(string rep_a, string rep_b, int a, int b)
	{
		int i = 1;
		int j = 100;
		int divisible_a = a;
		int divisible_b = b;
		string output_a = rep_a;
		string output_b = rep_b;
		while (i <= j) {
			if (i % divisible_a == 0 && i % divisible_b != 0) {
				cout << rep_a << " ";
			}
			else if (i % divisible_b == 0) {
				cout << rep_b << " ";
			}
			else {
				cout << i << " ";
			}
			printf("\n");
			i += 1;
		}
		//getchar(); //Used to pause output window
	}

}
