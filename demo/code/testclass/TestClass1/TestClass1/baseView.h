#pragma once
#include "base.h"

class baseView : public cq::base
{
private:
	int sex;//�Ա�
public:
	baseView();
	baseView(int sex);//����һ���������Ĺ��캯��
	~baseView();
	 virtual void onInit();
};

