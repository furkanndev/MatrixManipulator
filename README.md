# Matrix Manipulator

[![C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang%20%7C%20MSVC-27272a?style=flat-square)](https://gcc.gnu.org/)
[![Algorithms](https://img.shields.io/badge/Domain-Linear%20Algebra%20%26%20Matrix%20Operations-blue?style=flat-square)](https://en.wikipedia.org/wiki/Matrix_multiplication)
[![License: MIT](https://img.shields.io/badge/License-MIT-gray?style=flat-square)](LICENSE)

An interactive C++ linear algebra and matrix transformation utility. It generates randomized $5 \times 5$ square matrices, enables targeted row/column element swaps between discrete matrices, and computes resultant matrix dot products.

---

## Technical Overview

The application demonstrates fundamental data manipulation and linear algebraic transformations:

1. **Random Matrix Generation:** Seeds and populates two distinct $5 \times 5$ matrices ($A$ and $B$) with integer scalar values in the range $[0, 10]$.
2. **Targeted Element Swapping:** Prompts the user for discrete 1-based Cartesian indices $(i, j)$ to execute in-place scalar value swaps between matrices $A$ and $B$:
   $$A_{ij} \longleftrightarrow B_{ij}$$
3. **Matrix Product Computation:** Calculates the classical matrix dot product $C = A \times B$ where:
   $$C_{ij} = \sum_{k=1}^{n} A_{ik} \cdot B_{kj}$$
4. **Interactive Lifecycle:** Renders updated state matrices to standard output after each permutation and supports continuous session looping.

---

## Build & Execution

### Prerequisites
- Modern C++ compiler with C++11 or higher support (`g++`, `clang++`, or MSVC `cl.exe`).

### Compilation

```bash
# Clone the repository
git clone https://github.com/furkanndev/MatrixManipulator.git
cd MatrixManipulator

# Compile with optimization flags
g++ -O2 -std=c++17 -o MatrixManipulator MatrixTransformer.cpp

# Execute
./MatrixManipulator
```

*On Windows (PowerShell / Command Prompt):*
```powershell
g++ -O2 -std=c++17 -o MatrixManipulator.exe MatrixTransformer.cpp
.\MatrixManipulator.exe
```

---

## Interactive Session Sample

```text
**A Matrix**
4 7 1 0 8 
2 9 3 5 1 
6 0 2 4 7 
1 8 9 2 3 
5 4 0 6 2 

**B Matrix**
1 3 8 2 0 
7 4 1 9 5 
0 6 3 2 8 
4 1 5 7 2 
9 0 4 3 6 

Enter the row and column you want to swap:
Row: 2
Column: 3

Swapping A[2][3] (3) with B[2][3] (1)...

**Computed Product Matrix (C = A x B)**
[ ... Calculated resultant matrix ... ]
```

---

## Project Structure

```
MatrixManipulator/
├── LICENSE                 # MIT License terms
├── MatrixTransformer.cpp   # Core matrix algorithms, transformations & CLI
└── README.md               # Technical documentation
```

---

## License

This project is licensed under the [MIT License](LICENSE).
