#include "stdafx.h"
#include "base.h"
#include <iostream>;
using namespace std;
namespace cq {
	//����һ�����캯��
	base::base()
	{
	}

	//����һ����������
	base::~base()
	{
	}
	//�����һ�������ĸ����ʼ������
	void base::init()
	{
		std::cout << "this is a baseView"<<endl;
	}
	//�����ʵ���˽ӿڵķ���
	void base::dispose()
	{
		
		std::cout << "����һ�����ٷ�����"<<endl;
    }
	void base::onInit()
	{
		std::cout << "this is a base oninit()" << std::endl;
	}
}

