// 09_08_CreatedAndDestroy.h

#include <string>

#ifndef CreateAndDestroy_h
#define CreateAndDestroy_h

class CreateAndDestroy {
public:
	CreateAndDestroy(int, std::string);
	~CreateAndDestroy();
private:
	int objectId; 
	std::string message;
};

#endif