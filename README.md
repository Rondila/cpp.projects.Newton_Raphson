# Newton-Raphson Method

This repository contains a C++ implementation of the Newton-Raphson method for finding roots of polynomial functions .

## Mathematical Explanation

The Newton-Raphson method is based on the idea of linear approximation. Given a function f(x) and its derivative f'(x), the method iteratively improves the approximation of the root (zero) of the function.

1. **Initial Guess**: Start with an initial guess x₀.
2. **Iteration Formula**: The next approximation xₙ₊₁ is calculated using the formula:
   xₙ₊₁ = xₙ - (f(xₙ) / f'(xₙ))
3. **Repeat**: This process is repeated until the difference between successive approximations is less than a specified tolerance or until a maximum number of iterations is reached.

### Example

For example, to find the root of the equation f(x) = x² - 4:
- The derivative is f'(x) = 2x.
- If we start with an initial guess x₀ = 3:
   x₁ = x₀ - (f(x₀) / f'(x₀)) = 3 - ((3² - 4) / (2 * 3)) = 3 - (5 / 6) ≈ 2.17

The method continues iterating until convergence.
## Files

- `Source.cpp`: C++ implementation of the Newton-Raphson method.

## How to Compile and Run

1. Ensure you have a C++ compiler installed (e.g., g++, clang++).
2. Compile the program:
   ```bash
   g++ Source.cpp.cpp -o newton_raphson
