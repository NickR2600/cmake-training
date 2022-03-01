#include "greeting.h"
#include <iostream>
#include <string>

std::string greetingString = "Hello World!";

void sayHello() {
	std::cout << greetingString +"\n";
}
