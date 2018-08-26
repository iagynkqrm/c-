#pragma once
#include "IDispose.h"
namespace cq {
	class base : public game::IDispose
	{
	public:
		base();
		~base();
		void init();
		virtual void onInit();
		int age;
		void dispose();//这儿需要实现接口的方法
	};
}


