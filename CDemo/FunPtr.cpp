/*
code_1
定义一个函数指针，然后调用，输出结果
*/
#include<iostream>
#include<cstdio>
using namespace std;
int get_sum(int a, int b)
{
	return a + b;
}

int get_mul(int a, int b)
{
	return a * b;
}

void show_result(int a, int b, int (*ptr)(int,int))
{
	cout << ptr(a, b) << endl;
	cout << (*ptr)(a, b) << endl;
}

int main()
{
	int (*ptrFun)(int, int);

	ptrFun = get_sum;
	cout << ptrFun(4, 5) << endl;
	ptrFun = get_mul;
	cout << ptrFun(4, 5) << endl;

	//--------------------------将函数指针作为一个函数的形参然后输出，并且说明两种输出方式表达的结果一致
	show_result(4, 5, get_sum);
	show_result(4, 5, get_mul);

	return 0;
}
