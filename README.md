🧠 Recursion Problems in C

This repository contains classic recursion-based problems implemented in C.
The goal of this project is to strengthen core recursion concepts, stack behavior, and problem decomposition for Data Structures & Algorithms (DSA).

📂 Problems Included:


1️⃣ Maze Path Counting

📌 Description

The Maze Path problem calculates the number of ways to reach the destination cell from the starting cell in a grid using recursion.

🎯 Objective

Given a grid NxM, count total possible paths from top-left to bottom-right.

🧠 Concepts Used

Recursion

Base case handling

Boundary conditions

Backtracking logic

Grid traversal

📈 Time Complexity

Exponential (depends on grid size)

2️⃣ Tower of Hanoi

📌 Description:

The Tower of Hanoi is a classic mathematical puzzle solved using recursion.

🎯 Objective

Move n disks from Source rod to Destination rod using a Helper rod, following rules:

Move only one disk at a time

Only top disk can be moved

A larger disk cannot be placed on a smaller disk

🧠 Recursive Strategy

To move n disks:

Move n-1 disks from Source → Helper

Move largest disk from Source → Destination

Move n-1 disks from Helper → Destination

📈 Time Complexity
2
𝑛
−
1
2
n
−1
Disks	Moves
1	1
2	3
3	7
4	15

Time Complexity: O(2ⁿ)
Space Complexity: O(n) (recursion stack)

3.Reverse an Array in C

This program demonstrates how to reverse an array in C using the two-pointer technique.

Description

The program defines a function that reverses an array by swapping elements from the beginning and end until the middle of the array is reached. This approach is efficient and runs in O(n) time with O(1) extra space.

Key Concepts

Arrays in C

Two-pointer technique

Swapping elements

Time and space complexity

Example

Input:

1 2 3 4

Output:

4 3 2 1

4.Reverse Subarray (Two Pointer Technique)
Problem

Given an array of integers, reverse the elements between two indices L and R without changing the rest of the array.

Example

Input

1 2 3 4 5 6 7
L = 1
R = 4

Output

1 5 4 3 2 6 7
Approach

Use the two-pointer technique.
Start one pointer at L and another at R, swap the elements, then move the pointers toward each other until they meet.

Time Complexity: O(n)
Space Complexity: O(1)

5.# Rotate Array Using Reversal Algorithm

### Problem

Given an array of integers, rotate the array to the **right by k positions**.

### Example

Input

```
Array: 1 2 3 4 5 6 7
k = 3
```

Output

```
5 6 7 1 2 3 4
```

### Approach

Use the **Reversal Algorithm**:

1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining `n-k` elements.

**Time Complexity:** O(n)
**Space Complexity:** O(1)

6.# Check Duplicate Elements in an Array

### Problem

Determine whether an array contains any **duplicate elements**.

### Example

Input

```
1 2 3 4 7 5 6
```

Output

```
No Duplicate found
```

### Approach

Use **nested loops** to compare each element with the remaining elements of the array.

**Time Complexity:** O(n²)
**Space Complexity:** O(1)

7.# Find Missing Element in an Array

### Problem

Given an array containing numbers from **1 to n**, find the **missing number**.

### Example

Input

```
Array: 1 2 4
n = 4
```

Output

```
Missing Element: 3
```

### Approach

Calculate the **expected sum** of numbers from `1` to `n` using the formula `n(n+1)/2`, then subtract the sum of array elements.

**Time Complexity:** O(n)
**Space Complexity:** O(1)

7.Matrix Transpose in C
📌 Description

This program performs the transpose of a 3×3 matrix using C.
Transpose means converting rows into columns and vice versa.

🔁 What is Transpose?

For a matrix A, the transpose Aᵀ is formed by:

Converting row elements into column elements
Swapping arr[i][j] with arr[j][i]
⚙️ Approach
Take a 3×3 matrix as input
Swap elements where i ≤ j
Perform in-place transpose (no extra matrix used)
💻 Example
Input

1 2 3
4 5 6
7 8 9

Output

1 4 7
2 5 8
3 6 9

8.Matrix Multiplication in C
📌 Description

This program performs matrix multiplication of two matrices using C.
It multiplies rows of the first matrix with columns of the second matrix to produce a new matrix.

⚠️ Condition for Multiplication

Matrix multiplication is only possible when:
Number of columns of first matrix = Number of rows of second matrix

⚙️ Approach
Take input for two matrices
Use three nested loops:
Outer loops for result matrix position
Inner loop for multiplication and summation
Store result in a third matrix
💻 Example
Input

Matrix A (2×3):
1 2 3
4 5 6

Matrix B (3×2):
7 8
9 10
11 12

Output

Result Matrix (2×2):
58 64
139 154
 
👨‍💻 Author:-

Anirban Chattaraj
C Programming & DSA Practice
