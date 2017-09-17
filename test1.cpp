#include "stdafx.h"
#include<iostream>
using namespace std;
class A
{
public:
	A()
	{cout<<"父类构造函数\n";}
	~A()
	{cout<<"父类析构函数\n";}
};
class B:public A
{
public:
	B()
	{cout<<"子类构造函数\n";}
	~B()
	{cout<<"子类析构函数\n";}
};
void main()
{
	B b1;
	system("pause");
}

