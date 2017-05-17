// ClearMeasureLib.h
// Jonah Harris
// 5/16/2017

#include <string>
using namespace std;

namespace ClearMeasure
{
	class NumberReplacement
	{
	public:
		// Returns the numbers 1 through 100 with up to 2 different replacements, with priority on replacement b.
		static void ReplaceNums(string rep_a, string rep_b, int a, int b);

	};
}

