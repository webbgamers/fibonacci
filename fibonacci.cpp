// Calculates fibonacci recursively
// 2021 webbgamers

#include "fibonacci.h"
#include <iostream>

int main()
{
	std::cout << "Fibonacci calculator by webbgamers:\n";

	fibonacci(0, 1, 0);

	return 0;
}

void fibonacci(unsigned long long int before, unsigned long long int now, int iterations)
{
	std::cout << iterations << ") " << now << "\n";
	if (now < before)
	{
		std::cout << "Integer overflow reached at " << iterations << " iterations.";
		return;
	}
	iterations++;
	fibonacci(now, before + now, iterations);
}