#include <Hazel.h>  

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{

	}
	 
	~Sandbox()
	{

	}
};

// 基类指针指向派生对象Sandbox
Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}

