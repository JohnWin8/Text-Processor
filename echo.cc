#include <iostream>
#include <string>
#include "echo.h"
using namespace std;

// Ctor for an Echo
Echo::Echo(): source(0) {}

// setSource takes in an istream and sets that as the source to read in words
void Echo::setSource(istream *in) { source = in; }

// gets a word from the source
string Echo::getWord() {
  string s;
  *source >> s;
  return s;
}
