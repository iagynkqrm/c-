#pragma once
namespace game {
	class IDispose
	{
	public:
		IDispose();
		~IDispose();
		virtual void dispose()=0;
	};

}

