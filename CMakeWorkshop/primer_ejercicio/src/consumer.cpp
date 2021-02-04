#include "consumer.h"

#include "magic.h"
#include "unity.h"

#include <iostream>
#include <memory>

namespace consumer
{

void Consume(const TSharedPtr<UObject>& MyObject)
{
	if (MyObject->IsValid())
	{
		std::cout << "Deleting System32...\n";
		PrintMagic();
		SayTheTruth();
	}
	else
	{
		while(true)
		{
			std::cout << "You should feel ashamed and considering to look for another job.\n";
		}
	}
}

}
