#include "consumer.h"

#include <iostream>

int main(int argc, char** argv)
{
	consumer::TSharedPtr<consumer::UObject> MySharedPtr;
	
	std::cout << "Consuming our shared ptr\n";
	consumer::Consume(MySharedPtr);
	std::cout << "SharedPtr consumed\n";
	
	return 0;
}
