#ifndef _COUNT_H_
#define _COUNT_H_
#include "decorate.h"

class CountDecor : public Decorate {
  int count;
  char c;
  public:
	CountDecor(TextProcessor *, char);
	~CountDecor();
	std::string getWord();
};
	
#endif
