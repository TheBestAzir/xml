#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{cout<<"���๹�캯��\n";}
	~A()
	{cout<<"������������\n";}
};
class B:public A
{
public:
	B()
	{cout<<"���๹�캯��\n";}
	~B()
	{cout<<"������������\n";}
};
void main()
{
	B b1;
	system("pause");
}

