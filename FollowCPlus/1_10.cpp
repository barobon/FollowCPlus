//선언과 정의의 분리
#include<iostream>
using namespace std;

int add(int, int);

int main()
{
	cout<< add(1, 2);

	return 0;
}

int add(int a, int b)
{
	return a + b;
}