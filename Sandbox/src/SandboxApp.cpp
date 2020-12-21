#include <Bad.h>

class Sandbox : public Bad::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Bad::Application* Bad::CreateApplication()
{
	return new Sandbox();
}