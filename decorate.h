#ifndef _DECORATE_H_
#define _DECORATE_H_
#include "textprocess.h"

class Decorate : public TextProcessor {
  protected:
	TextProcessor *nextProcess;
  public:
	Decorate(TextProcessor*);
	void setSource(std::istream *inp);	
	virtual ~Decorate() = 0;
};
#endif
