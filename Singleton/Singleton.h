#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include<memory>
#include<iostream>
class Singleton
{
private:
	Singleton(){}	
public:
	static Singleton& GetInstance()
	{
		static Singleton instance;
		return instance;
	}
};
#endif
