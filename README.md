# market-simulator
A C++ console program that simulates supermarket sales and compares
regular vs. loyalty-card pricing.

## What it does
- Takes in a store name, loyalty card cost, and starting budget
- Simulates sales for grocery products (bread, apples, soda, toilet paper)
- Calculates wholesale cost, sale price with tax, profit, and profit
  difference per product
- Prints a summary with total profits and remaining budget

## Concepts used
- Structs (`Market`, `Product`)
- Functions with pass-by-reference parameters
- Input validation loops
- Formatted output with `<iomanip>`

## How to run
g++ -o marketsim market_simulator_program_1.cpp
./marketsim
