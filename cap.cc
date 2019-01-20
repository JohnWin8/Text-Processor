#include "cap.h"
using namespace std;

// ctor for a capDecor
CapDecor::CapDecor(TextProcessor *nextProcess): Decorate(nextProcess) {}

// dtor for a CapDecor
CapDecor::~CapDecor(){
	delete nextProcess;
}

string CapDecor::getWord() {
	string tmp = nextProcess->getWord();
	for (string::iterator sit = tmp.begin(); sit != tmp.end(); ++sit) {
		if ('a' <= *sit && *sit <= 'z') {
			*sit += 'A' - 'a';
		}
	}
 return tmp;
}	
