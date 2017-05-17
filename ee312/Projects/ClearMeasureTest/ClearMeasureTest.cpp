// ClearMeasureTest.cpp
// Jonah Harris
// 5/16/2017

#include "ClearMeasureLib.h"

using namespace std;

int main()
{

	string rep1 = "apple pie";
	string rep2 = "blueberry pie";
	int num1 = 20;
	int num2 = 7;
	ClearMeasure::NumberReplacement::ReplaceNums(rep1, rep2, num1, num2);

	rep1 = "doodle";
	rep2 = "kaboodle";
	num1 = 2;
	num2 = 40;
	ClearMeasure::NumberReplacement::ReplaceNums(rep1, rep2, num1, num2);

	rep1 = "Wubba lubba dub dub!";
	rep2 = "Get shwifty!";
	num1 = 1;
	num2 = 2;
	ClearMeasure::NumberReplacement::ReplaceNums(rep1, rep2, num1, num2);

    return 0;
}

