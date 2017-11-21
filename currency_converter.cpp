#include <iostream>
//Program by Alen Thomas 16333003
//C++ currency converter

using namespace std;

void convertsterling(void)			//Functions for each currency
{
	float money;
	cout << "1 euro = 0.84 Pounds\n " << endl;
	cout << "Please insert how much you would like to convert:" ;
	cin >> money;
	
	money = money*0.84;
	
	cout << "You will get: " << money;
}

void convertdollar(void)
{
	float money;
	cout << "1 euro = 1.09 Us Dollar\n " << endl;
	cout << "Please insert how much you would like to convert:" ;
	cin >> money;
	
	money = money*1.09;
	
	cout << "You will get: " << money;
}

void convertyen(void)
{
	float money;
	cout << "1 euro = 122.36 Yen\n " << endl;
	cout << "Please insert how much you would like to convert:" ;
	cin >> money;
	
	money = money*122.36;
	
	cout << "You will get: " << money;
}

void convertfranc(void)
{
	float money;
	cout << "1 euro = 1.08362 Swiss Franc\n " << endl;
	cout << "Please insert how much you would like to convert:" ;
	cin >> money;
	
	money = money*1.08;
	
	cout << "You will get: " << money;
}

int main()
{
	int choice;
	cout << "Welcome to euro to ---- money conversion" << endl;								//User chooses the type of conversion needed
	cout << "Please insert which of the following conversions you would like:" << endl;
	cout << "1-Euro to Pound Sterling\n2-Euro to American Dollar" << endl;
	cout << "3-Euro to Japenese yen \n4-Euro to Swiss Franc\n" << endl;
	
	cin >> choice;
	
	cout << "Conversion rate: " << endl;
	
	if(choice == 1)	//Depending on choice the function is called
	{
		convertsterling();
	}
	else if(choice == 2)
	{
		convertdollar();
	}
		
	else if(choice == 3)
	{
		convertyen();
	}
		
	else if(choice == 4)
	{
		convertfranc();
	}
	
	
}


