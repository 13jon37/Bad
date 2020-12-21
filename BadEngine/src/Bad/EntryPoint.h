#pragma once

#ifdef BAD_PLATFORM_WINDOWS

extern Bad::Application* Bad::CreateApplication();

int main(int argc, char**argv)
{
	auto app = Bad::CreateApplication();
	app->run();
	delete app;
}

#endif

