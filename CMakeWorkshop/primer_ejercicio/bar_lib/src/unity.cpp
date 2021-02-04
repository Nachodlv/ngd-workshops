#include "unity.h"

#include <iostream>

void SayTheTruth()
{
#ifdef LIE
	std::cout << "Unity is the best engine ever created.\n";
#else
	std::cout << "Unity is garbage and should be discarded.\n";
#endif
}
