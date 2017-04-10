#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include<memory>
#include<iostream>
class Singleton
{
private:
	Singleton(){}	
	static  Singleton *m_pInstance;//point to the 
	class CGarbo
	{
	public:
		~CGarbo()
		{
			if(Singleton::m_pInstance!=nullptr)
				std::cout<<"delet"<<std::endl;
				delete Singleton::m_pInstance;
		}
	};
	static CGarbo Garbo;
public:
	static Singleton* GetInstance()
	{
		if(m_pInstance == nullptr)
			m_pInstance = new Singleton();
		return m_pInstance;
	}
};
#endif
