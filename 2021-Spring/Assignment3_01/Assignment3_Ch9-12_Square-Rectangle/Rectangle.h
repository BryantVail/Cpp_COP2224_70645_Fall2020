

#ifndef Rectangle_h
#define Rectangle_h


class Rectangle {
protected:
	// data members
	int sideA;
	int sideB;
public:
	Rectangle(int = 1, int = 1);
	void setSideA(int);
	void setSideB(int);
	int getSideA();
	int getSideB();
	int computePerimeter();
	int computeArea();
	void operator++(); // overloaded increment operator
	void operator--(); // overloaded decrement operator
	bool operator==(Rectangle&); // overloaded 'isEqualTo' operator
	
};



#endif // !Rectangle_h
