#include <iostream>
//Program by Alen Thomas 16333003
//C++ Calculator
using namespace std;


int main()
{
	char a;		//Variable declaration
	double b, c;
	cout << "Please enter one of the operation: \n(+ = ADD)\n(- = SUB)\n(* = MULT)\n(/ = DIVIDE)" << endl;	//User choices
	cin >> a;			//User chooses operator
	
	cout << "Please enter 2 numbers" << endl;	//User inputs numbers
	cin >> b >> c;
	
	if(a == '+')		//Depending on operator answer is printed out
	{
		cout << b + c;
	}
		
	else if(a == '-')
	{
		cout << b - c;
	}
		
	else if(a == '*')
	{
		cout << b*c;
	}
		
	else if(a == '/')
	{
		cout << b/c;
	}
	
	else				//Error message is printerd if user inputs error
	{
		cout << "That is an invalid operator" << endl;
	}
}