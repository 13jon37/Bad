#pragma once

#include "Core.h"

namespace Bad 
{

	class BAD_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	};

	// To be defined in client
	Application* CreateApplication();
}


