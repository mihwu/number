#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
using namespace std;

class Number
{
protected:
	double num1;
	double num2;
public:
	Number(double c){ num1 = c;}
	Number(double c, double d){ num1 = c, num2 = d; }
	virtual void print();
	virtual Number add(const Number&other);
	virtual Number mul(const Number&other);
};


class RealNumber :virtual public Number
{
public:
	RealNumber(double c) :Number(c){}
	virtual void print();
	virtual RealNumber add(const RealNumber& other);
	virtual RealNumber mul(const RealNumber& other);
};


class IntegerNumber :public RealNumber
{
public:
	IntegerNumber(int c) :RealNumber(c), Number(c){}
	virtual void print();
	virtual IntegerNumber add(const IntegerNumber &other);
	virtual IntegerNumber mul(const IntegerNumber &other);
};

class ComplexNumber :public Number
{
public:
	ComplexNumber(double c, double d) :Number(c, d){}
	virtual void print();
	ComplexNumber add(const ComplexNumber &other);
	ComplexNumber mul(const ComplexNumber &other);
};

#endif
