#include "double.h"
using namespace std;

// ctor for a Double Decor
DoubleDecor::DoubleDecor(TextProcessor *nextProcess): Decorate(nextProcess),
						repeat{false} {}

// dtor for a doubleDecor
DoubleDecor::~DoubleDecor(){delete nextProcess;}

// getWord will take a word from nextProcess and return it
// the next time it is called it returns the same word
string DoubleDecor::getWord() {
	if (repeat) {
		repeat = false;
	} else {
		lastword = nextProcess->getWord();
		repeat = true;
	}
 return lastword;
}


