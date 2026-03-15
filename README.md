🧠 Recursion Problems in C

This repository contains classic recursion-based problems implemented in C.
The goal of this project is to strengthen core recursion concepts, stack behavior, and problem decomposition for Data Structures & Algorithms (DSA).

📂 Problems Included:-


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

📌 Description:-

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

👨‍💻 Author

Anirban Chattaraj
C Programming & DSA Practice
