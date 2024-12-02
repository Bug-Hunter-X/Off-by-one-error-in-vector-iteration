# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`. The error occurs because the loop attempts to access one element beyond the valid range of the vector.

## Bug Description
The `bug.cpp` file contains a loop that iterates from 0 up to and including `myVector.size()`.  This is incorrect. `myVector.size()` returns the number of elements, and valid indices range from 0 to `size() - 1`.

## Solution
The corrected code in `bugSolution.cpp` fixes this by changing the loop condition to `< myVector.size()`.  This ensures that the loop terminates before accessing an invalid element.

## How to Compile and Run
1. Save `bug.cpp` and `bugSolution.cpp`. 
2. Compile using a C++ compiler (like g++):
   ```bash
   g++ bug.cpp -o bug
   g++ bugSolution.cpp -o bugSolution
   ```
3. Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```