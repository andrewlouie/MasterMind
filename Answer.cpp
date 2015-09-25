#include "Answer.h"
#include <stdlib.h> 

int peg1, peg2, peg3, peg4;
Answer::Answer() {
}
void Answer::create(int a,int b,int c, int d)
{
	peg1 = a;
	peg2 = b;
	peg3 = c;
	peg4 = d;
}
/// <summary> 
///Returns true if all 4 variables are set to a colour (1-6)
///</summary>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <returns> boolean </returns>
bool Answer::isValid(int a, int b, int c, int d) {
	if ((a >= 1) && (a <= 6) && (b >= 1) && (b <= 6) && (c >= 1) && (c <= 6) && (d >= 1) && (d <= 6)) return true;
	return false;
}
/// <summary> 
///Returns true if all colours are in the correct position
///</summary>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <param name="colour"> Colour (1-6) </param>
/// <returns> boolean </returns>
bool Answer::isSolved(int a, int b, int c, int d) {
	if ((peg1 == a) && (peg2 == b) && (peg3 == c) && (peg4 == d)) return true;
	return false;
}
/// <summary> 
///Returns true if colour a is in position b 
///</summary>
/// <param name="colour"> Colour </param>
/// <param name="position"> Position </param>
/// <returns> boolean </returns>
bool Answer::isIn(int a, int b) {
	int c;
	switch (b) {
	case 1: c = peg1; break;
	case 2: c = peg2; break;
	case 3: c = peg3; break;
	case 4: c = peg4; break;
	default: c = 0;
	}
	if (c == a) return true;
	return false;
}
/// <summary> 
///Returns true if colour (1-6) is in any any position
///</summary>
/// <param name="colour"> Colour (1-6) </param>
/// <returns> boolean </returns>
bool Answer::isIn(int a) {
	if ((peg1 == a) || (peg2 == a) || (peg3 == a) || (peg4 == a)) return true;
	return false;
}
/// <summary> 
///Returns the colour (1-6) of specified peg (1-4)
///</summary>
/// <param name="peg"> Peg (1-4) </param>
/// <returns> int </returns>
int Answer::getPeg(int a) {
	switch (a) {
	case 1: return peg1; break;
	case 2: return peg2; break;
	case 3: return peg3; break;
	case 4: return peg4;
	}
}
/// <summary> 
///Returns the number of pieces correct but in the wrong position (white)
///</summary>
/// <param name="Colour"> Colour (1-6) </param>
/// <param name="Colour"> Colour (1-6) </param>
/// <param name="Colour"> Colour (1-6) </param>
/// <param name="Colour"> Colour (1-6) </param>
/// <returns> int (1-4) </returns>
int Answer::numCorrect(int a, int b, int c, int d) {
	int e = 0;
	int f[4] = { peg1, peg2, peg3, peg4 };
	int g[4] = { a, b, c, d };
	if (f[0] == g[0]) { f[0] = 0; g[0] = 0; }
	if (f[1] == g[1]) { f[1] = 0; g[1] = 0; }
	if (f[2] == g[2]) { f[2] = 0; g[2] = 0; }
	if (f[3] == g[3]) { f[3] = 0; g[3] = 0; }
	for (int h = 0; h < 4; h++) {
		for (int i = 0; i < 4; i++) {
			if ((f[h] == g[i]) && (f[h] != 0) && (g[i] != 0)) { e++; f[h] = 0; g[i] = 0; }
		}
	}
	return e;
}