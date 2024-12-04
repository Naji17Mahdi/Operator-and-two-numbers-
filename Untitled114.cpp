#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	int a , b;
	char ch;
	
	
	cout<<"Please enter a number:"<<endl;
	cin>>a;
	cout<<"enter the second one:"<<endl;
	cin>>b;
	cout<<"Enter the operator you wish to use:"<<endl;
	cin>>ch;
	
	switch ( ch )
	{
	
	case '*' : cout<<"Mutiplication is="<<a * b<<endl; break;
	case '+' : cout<<"Addition is="<<a + b<<endl; break;
	case '-' : cout<<"Subtraction is="<<a - b<<endl; break;
	case '/' : cout<<"Division is="<<(float)a / b<<endl; break;
	case '%' : cout<<"Remaining is="<<a % b <<endl; break;
	default : cout<<"Error.";
   }
}
