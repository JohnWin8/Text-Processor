#ifndef _CAP_H_
#define _CAP_H_
#include "decorate.h"
#include "textprocess.h"

class CapDecor: public Decorate {
 public:
	CapDecor(TextProcessor*);
	~CapDecor();
	std::string getWord() override;
};		
#endif
