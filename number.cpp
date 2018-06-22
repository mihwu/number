#include"number.h"
#include<iostream>
using namespace std;

void Number::print()
{
	cout << num1 << " " << num2 << endl;
}
Number Number::add(const Number& other)
{
	return Number(num1+other.num1);
}
Number Number::mul(const Number& other)
{
	return Number(num1*other.num1);
}
///////////////////////////////////////////////////////////////////////////////////////

void RealNumber::print()
{
	cout << num1 << endl;
}
RealNumber RealNumber::add(const RealNumber& other)
{
	return RealNumber(num1 + other.num1);
}
RealNumber RealNumber::mul(const RealNumber& other)
{
	return RealNumber(num1*other.num1);
}

////////////////////////////////////////////////////////////////////////////////////

void IntegerNumber::print()
{
	cout << num1 << endl;
}
IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	return IntegerNumber(num1 + other.num1);
}
IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	return IntegerNumber(num1*other.num1);
}

/////////////////////////////////////////////////////////////////////////////

void ComplexNumber::print()
{
	cout << num1 << '+' << num2 << 'i' << endl;
}
ComplexNumber ComplexNumber::add(const ComplexNumber&other)
{
	return ComplexNumber(num1 + other.num1, num2 + other.num1);
}
ComplexNumber ComplexNumber::mul(const ComplexNumber&other)
{
	return ComplexNumber(num1*other.num1 + num2*other.num2, num1*other.num2 + num2*other.num1);
}

