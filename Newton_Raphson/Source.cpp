#include <iostream>
#include <cmath>
#include <chrono>      // For measuring time

//define the function f(x)
double f(double x) {
	return x * x * x + 2 * x * x - 4;
}

//define the function f'(x)
double df(double x) {
	return 3 * x * x + 4 * x;
}

// Newton-Raphson Method
double newtonRaphson(double initialGuess, double tolerance, int maxIterations) {

	auto start = std::chrono::high_resolution_clock::now(); // Start time
	double x = initialGuess;

	for (int i = 0; i < maxIterations; i++) {
		double fx = f(x);
		double dfx = df(x);
		if (dfx == 0) {
			std::cerr << "Error: Derivative is zero. Method fails." << std::endl;
			return NAN;
		}
		double x_new = x - fx / dfx; // Newton-Raphson formula
		std::cout << "Iteration " << i + 1 << ": x = " << x_new << ", f(x) = " << fx << std::endl;

		if (fabs(x_new - x) < tolerance) {
			auto end = std::chrono::high_resolution_clock::now(); // End time
			std::chrono::duration<double, std::milli> duration = end - start;
			std::cout << "Converged to root: " << x_new << std::endl;
			std::cout << "Computation Time: " << duration.count() << " ms" << std::endl;
			return x_new;
		}

		x = x_new;  // Update x for next iteration
	}

	auto end = std::chrono::high_resolution_clock::now(); // End time
	std::chrono::duration<double, std::milli> duration = end - start;

	std::cerr << "Warning: Maximum iterations reached without convergence." << std::endl;
	std::cout << "Computation Time: " << duration.count() << " ms" << std::endl;

	return x;
}



int main() {
	double initialGuess, tolerance;
	int maxIterations;
	// Get user input
	std::cout << "Enter initial guess: ";
	std::cin >> initialGuess;
	std::cout << "Enter tolerance: ";
	std::cin >> tolerance;
	std::cout << "Enter max iterations: ";
	std::cin >> maxIterations;

	// Run the Newton-Raphson method
	newtonRaphson(initialGuess, tolerance, maxIterations);

	return 0;
}

