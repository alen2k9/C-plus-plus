#include <iostream>
using namespace std;
/*Program by Alen Thomas 16333003
  Use function template to swap chars, ints and doubles*/

template <typename T>	//Function template
void swap(T &h, T &i)
{
	T temp = h;
	h = i;
	i = temp;
}

int main()
{
	int a = 5;	//Variable declaration
	int b = 6;
	double c = 3.45;
	double d = 5.68;
	char e = 'e';
	char f = 'f';
	
	cout << "Initial int values are a =" << a << "b = " << b << endl;		//print inital values for variables
	cout << "Initial double values are c =" << c << "d = " << d << endl;
	cout << "Initial char values are e =" << e << "f = " << f << endl;
	
	swap(a,b	//Swap each value
	swap(c,d);
	swap(e,f);
	
	cout << "Values after swap" << endl;; 									//print swapped value for each
	cout << "int values are a =" << a << "b = " << b << endl;;
	cout << "double values are c =" << c << "d = " << d << endl;
	cout << "char values are e =" << e << "f = " << f << endl;
	}