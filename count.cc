#include "count.h"
using namespace std;

// ctor for a CountDecor
CountDecor::CountDecor(TextProcessor *nextProcess, char c): Decorate(nextProcess),
							count{1}, c{c} {}

// dtor for a CountProcess
CountDecor::~CountDecor(){delete nextProcess;}

// getWord takes a word from nextProcess and replaces all instances of c with 
// 	the number of times c has been seen before
string CountDecor::getWord(){
	string str = nextProcess->getWord();
	string stmp = "";
        int len = str.length();
        for (int i = 0; i < len; ++i){
                char ctmp = str[i];
                if (ctmp == c) {
                        stmp.append(to_string(count));
                        count++;
                } else {
                        stmp.push_back(ctmp);
                }
        }
 return stmp;
}

