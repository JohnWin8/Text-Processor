#include "drop.h"
using namespace std;

// ctor for a Drop Decor
DropDecor::DropDecor(TextProcessor *nextProcess, int n)
			: Decorate(nextProcess), n{n} {}

// dtor for a DropDecor
DropDecor::~DropDecor() {
	delete nextProcess;
}


// getWord will get the word from the next processor, drop the first n letters,
// 	and return the remaining letters
string DropDecor::getWord() {
 	string tmp = nextProcess->getWord();
 	int tmpint = tmp.length();
 	if (tmpint <= n) return "";
 	tmp.erase(0, n);
 	return tmp;
}
