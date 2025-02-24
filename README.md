# Newton-Raphson Method

This repository contains a C++ implementation of the Newton-Raphson method for finding roots of polynomial functions .

## Overview

The Newton-Raphson method is an iterative technique for finding successively better approximations to the roots (or zeros) of a real-valued function.
Given a function \( f(x) \) and its derivative \( f'(x) \), the method iteratively improves the approximation of the root (zero) of the function.

1. **Initial Guess**: Start with an initial guess \( x_0 \).
2. **Iteration Formula**: The next approximation \( x_{n+1} \) is calculated using the formula:
   \[
   x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
   \]
3. **Repeat**: This process is repeated until the difference between successive approximations is less than a specified tolerance or until a maximum number of iterations is reached.

### Example

For example, to find the root of the equation \( f(x) = x^2 - 4 \):
- The derivative \( f'(x) = 2x \).
- If we start with an initial guess \( x_0 = 3 \):
  \[
  x_1 = x_0 - \frac{f(x_0)}{f'(x_0)} = 3 - \frac{(3^2 - 4)}{(2 \cdot 3)} = 3 - \frac{5}{6} \approx 2.17
  \]

The method continues iterating until convergence.
## Files

- `newton_raphson.cpp`: C++ implementation of the Newton-Raphson method.

## How to Compile and Run

1. Ensure you have a C++ compiler installed (e.g., g++, clang++).
2. Compile the program:
   ```bash
   g++ newton_raphson.cpp -o newton_raphson
