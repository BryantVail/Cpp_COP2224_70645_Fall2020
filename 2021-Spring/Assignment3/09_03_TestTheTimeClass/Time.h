
// 09_01_TimeClassDefinition   

#include <string>


#ifndef TIME_H 
#define TIME_H 

using namespace std;

class Time {
public:
	void setTime(int hr, int min, int sec); 
	string toUniversalString() const;
	string toStandardString() const;
private: 
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};

#endif




