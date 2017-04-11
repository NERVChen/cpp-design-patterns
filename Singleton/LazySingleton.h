#ifndef _LAZYSINGLETON_H_
#define _LAZYSINGLETON_H_
#include<memory>
#include<iostream>
#include<mutex>
class Singleton
{
private:
	Singleton(){}	
public:
	static std::mutex mx;
	static Singleton* GetInstance();
	
};
#endif
