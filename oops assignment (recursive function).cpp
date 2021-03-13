#include<iostream>
using namespace std;
int factorial(int m);
void display(int m)
{
	cout<<"Factorial of"<<m<<"="<<factorial(m);
}
int main()
{
	int m;
	cout<<"Enter a Positive Integer to find the Factorial:";
	cin>>m;
	display(m);
	return 0;
}
int factorial(int m)
{
	if(m>1)
	return m*factorial(m-1);
	else
	return 1;
}
