#include<iostream>
using namespace std;
class IX
{
public:
	virtual void Fx1() = 0;
	virtual void Fx2() = 0;
};

class IY
{
public:
	virtual void Fy1() = 0;
	virtual void Fy1() = 0;
};

class CA : public IX,//Component
	       public IY
{
public:
	//³éÏó»ùÀàIX
	virtual void Fxl() {
		cout << "Fxl" << endl;
	}
	virtual void Fx2() {
		cout << "Fx2" << endl;
	}
	virtual void Fy1() {
		cout << "Fy1" << endl;
	}
	virtual void Fy2() {
		cout << "Fy2" << endl;
	}
};
