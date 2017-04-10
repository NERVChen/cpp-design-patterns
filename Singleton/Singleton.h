#ifndef _SINGLETON_H_
#define _SINGLETON_H_
class Singleton
{
private:
	Singleton(){}
	static Singleton *m_pInstance;//point to the 
public:
	static Singleton* GetInstance()
	{
		if(m_pInstance == nullptr)
			m_pInstance = new Singleton();
		return m_pInstance;
	}
};
#endif
