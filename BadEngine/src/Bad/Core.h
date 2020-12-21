#pragma once

#ifdef BAD_PLATFORM_WINDOWS
	#ifdef BAD_BUILD_DLL
		#define BAD_API __declspec(dllexport)
	#else
		#define BAD_API __declspec(dllimport)
	#endif
#else
	#error Bad only supports windows
#endif
