#pragma once

#ifdef MI_PLATFORM_WIDNOWS
	#ifdef MI_BUILD_DLL
		#define MIRA_API __declspec(dllexport)
	#else
		#define MIRA_API __declspec(dllimport)
	#endif
#else
	#error Mira only supports Windows!
#endif