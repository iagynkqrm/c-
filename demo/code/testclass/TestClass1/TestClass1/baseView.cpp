#include "stdafx.h"
#include "baseView.h"
#include <iostream>


baseView::baseView()
{
}
//ʵ��һ���������Ĺ��캯��
baseView::baseView(int sex)
{ 
	this->sex = sex;
	std::cout << sex <<std::endl;
	std::cout << "����һ�������ǵĹ��캯��"<<std::endl;
}


baseView::~baseView()
{
	
}
void baseView::onInit()
{
	std::cout << "this is a baseView oninit()"<<std::endl;
	//base::onInit();
}