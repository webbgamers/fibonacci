// Calculates fibonacci recursively
// 2021 webbgamers

#include "fibonacci.h"
#include <iostream>

int main()
{
	std::cout << "Fibonacci calculator by webbgamers:\n";

	int iterations = fibonacci(0, 1, 0);
	std::cout << "Integer overflow reached at " << iterations << " iterations.";

	return 0;
}

int fibonacci(unsigned long long int before, unsigned long long int now, int iterations)
{
	std::cout << iterations << ") " << now << "\n";
	if (now < before)
	{
		return iterations;
	}
	iterations++;
	return fibonacci(now, before + now, iterations);
}