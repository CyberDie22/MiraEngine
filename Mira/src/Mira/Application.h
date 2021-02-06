#pragma once
#include "Core.h"

namespace Mira {

	class MIRA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// To be defined by client
	Application* CreateApplication();

}

