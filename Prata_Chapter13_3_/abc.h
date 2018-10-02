#ifndef abc_h_

#define abc_h_

#include <iostream>
#include <cstring>

class ABC{
	
	int a;
	int b;
	char* c;
	
	public:
		
		ABC();
	virtual	~ABC();
		
virtual void At()=0;
		
};

#endif
