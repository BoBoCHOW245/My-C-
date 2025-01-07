#pragma once
#include<iostream>
using namespace std;

//身份抽象基类
class Identity
{
public:
	//操作菜单 纯虚函数
	//声明此函数后，在调用Identity的派生类（Student）时，可以直接访问到operMenu函数
	virtual void operMenu() = 0;

	//virtual void applyOrder()=0;

	//用户名
	string m_Name;

	//密码
	string m_Pwd;
};
