// TestClass1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "baseView.h";
#include "base.h";
#include "IDispose.h"
#include "baseView.h"
using namespace std;
using namespace cq;//此处引用命名空间后下面不需要加cq前缀了 否都得加前缀
using namespace game;
int main()
{  
	int a;
	cout << "this is a clas";
	cout << endl;
	//实例化一个类对象   cq为命名空间
	cq::base *c = new cq::base();
	//c->init();

	//必须是一个指针类型的变量
	base *p = new base();
	p->init();
	//p->dispose();

	//IDispose *i = new IDispose();
	//i->dispose();

	baseView * bv = new baseView(1);
	bv->init();
	bv->dispose();
	//bv->onInit();

	base *bb = bv;
	bb->onInit();

	cin.get();
    return 0;
}

