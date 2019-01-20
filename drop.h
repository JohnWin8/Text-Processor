#ifndef _DROP_H_
#define _DROP_H_
#include "decorate.h"
using namespace std;

class DropDecor : public Decorate {
	int n;
	public:
	DropDecor(TextProcessor *, int);
	~DropDecor();
	std::string getWord() override;
	
};	
#endif
