//Pre-processor statements
#ifndef EXIM_VAR
#	ifdef eximValue
#		define EXIM_VAR __declspec(dllexport)
#	else
#		define EXIM_VAR __declspec(dllimport)
#	endif
#endif