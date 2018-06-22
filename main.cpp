#include"number.h"
#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d = 0;

	cout << "Please enter two real number:" << endl;
	cin >> a >> b;
	RealNumber num1(a);
	RealNumber num2(b);
	RealNumber realsum(0.00);
	RealNumber realproduct(0.00);
	realsum = num1.add(num2);
	realproduct = num1.mul(num2);
	realsum.print();
	realproduct.print();
	
	cout << "Please enter two integer number:" << endl;
	cin >> c >> d;
	IntegerNumber num3(c);
	IntegerNumber num4(d);
	IntegerNumber integersum(0);
	IntegerNumber integerproduct(0);
	integersum = num3.add(num4);
	integerproduct = num3.mul(num4);
	integersum.print();
	integerproduct.print();
	
	cout << "\nTesting for ComplexNumber:5.6+8.3i+7.3+3.6i" << "\nResult:" << endl;
	ComplexNumber testnum1(5.6, 8.3);
	ComplexNumber testnum2(7.3, 3.6);
	ComplexNumber complexsum(0, 0);
	ComplexNumber complexproduct(0, 0);
	complexsum = testnum1.add(testnum2);
	complexproduct = testnum1.mul(testnum2);
	complexsum.print();
	complexproduct.print();
	
	
	return 0;

}

