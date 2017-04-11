#include "LazySingleton.h"
int main()
{
	Singleton *p1 = Singleton::GetInstance();
	Singleton *p2 = Singleton::GetInstance();
	if(p1 == p2) std::cout<<"true"<<std::endl;
	return 0;
}
