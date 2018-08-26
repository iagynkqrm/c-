#include "stdafx.h"
#include "baseView.h"
#include <iostream>


baseView::baseView()
{
}
//实现一个带参数的构造函数
baseView::baseView(int sex)
{ 
	this->sex = sex;
	std::cout << sex <<std::endl;
	std::cout << "这是一个被覆盖的构造函数"<<std::endl;
}


baseView::~baseView()
{
	
}
void baseView::onInit()
{
	std::cout << "this is a baseView oninit()"<<std::endl;
	//base::onInit();
}