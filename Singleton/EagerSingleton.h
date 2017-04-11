#ifndef _EAGERSINGLETON_H_
#define _EAGERSINGLETON_H_
class Singleton
{
private:
	Singleton(){}
	static Singleton* p;
public:
	static Singleton* GetInstance();
};
#endif

