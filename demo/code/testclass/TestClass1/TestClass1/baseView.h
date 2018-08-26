#pragma once
#include "base.h"

class baseView : public cq::base
{
private:
	int sex;//性别
public:
	baseView();
	baseView(int sex);//定义一个带参数的构造函数
	~baseView();
	 virtual void onInit();
};

