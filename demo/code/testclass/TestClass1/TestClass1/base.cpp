#include "stdafx.h"
#include "base.h"
#include <iostream>;
using namespace std;
namespace cq {
	//这是一个构造函数
	base::base()
	{
	}

	//这是一个析构函数
	base::~base()
	{
	}
	//这个是一个基本的父类初始化方法
	void base::init()
	{
		std::cout << "this is a baseView"<<endl;
	}
	//在这儿实现了接口的方法
	void base::dispose()
	{
		
		std::cout << "这是一个销毁方法！"<<endl;
    }
	void base::onInit()
	{
		std::cout << "this is a base oninit()" << std::endl;
	}
}

