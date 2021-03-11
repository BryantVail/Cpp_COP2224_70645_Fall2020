


#ifndef Time_h
#define Time_h

class Time {
public: 
	void setTime(int hr, int min, int sec);
	unsigned int getHour() const;
	unsigned int& badSetHour(int hr); // dangerous reference return
private:
	unsigned int hour{ 0 };
	unsigned int minute{ 0 };
	unsigned int second{ 0 };
};



#endif




