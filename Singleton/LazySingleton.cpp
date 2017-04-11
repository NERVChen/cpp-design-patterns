#include "LazySingleton.h"
std::mutex Singleton::mx;
Singleton* Singleton::GetInstance()
{
	mx.lock();
	static Singleton instance;
	mx.unlock();
	return &instance;
}
