#include "EagerSingleton.h"
Singleton* Singleton::p = new Singleton();
Singleton* Singleton::GetInstance()
{
	return p;
}
