#include"iostream"

int calculate(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int a = 14;
	int b = 11;
	std::cout<<"This is working \n?";

	std::cout<<"We used our first function: "<<calculate(a,b) <<"! \n";
	return 1;
}

