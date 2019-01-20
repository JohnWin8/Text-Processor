#ifndef _DOUBLE_H_
#define _DOUBLE_H_
#include "decorate.h"

class DoubleDecor : public Decorate {
  std::string lastword;
  bool repeat;
  public:
	DoubleDecor(TextProcessor*);
	~DoubleDecor();
	std::string getWord() override;
};	
#endif
