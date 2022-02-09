#include <iostream>
using namespace std;
int main()
{
	int a,b;
    char op;
    
	cout<<"enter any two numbers"<<endl;
	cin>>a>>b;
	cout<<"enter any operation(+,-,*,/)"<<endl;
	cin>>op;
	
	switch(op)
{
	case '+':
		cout<<"addition of two nubers is"<<a+b<<endl;
		break;
	case '-' :
		cout<<"subtraction of two numbers is"<<a-b<<endl;
		break;
	case '*' :
		cout<<"product of two numbers is"<<a*b<<endl;
		break;
	case '/' :
		cout<<"quotient of two numbers is"<<a/b<<endl;
		break;
		default :
			cout<<"wrong operator"<<endl;
}
        return 0;
}
