/*
code_1
����һ������ָ�룬Ȼ����ã�������
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

	//--------------------------������ָ����Ϊһ���������β�Ȼ�����������˵�����������ʽ���Ľ��һ��
	show_result(4, 5, get_sum);
	show_result(4, 5, get_mul);

	return 0;
}
