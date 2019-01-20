#include "decorate.h"
using namespace std;

// ctor for a decorate
Decorate::Decorate(TextProcessor* nextProcess): nextProcess{nextProcess} {}

//dtor for Decorate just does nothing
Decorate::~Decorate() {}

// setSource just passes down the source, until it hits an Echo
void Decorate::setSource(istream *inp){
	nextProcess->setSource(inp);
}
