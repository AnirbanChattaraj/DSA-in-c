🧠 Recursion Problems in C

This repository contains classic recursion-based problems implemented in C.
The goal of this project is to strengthen core recursion concepts, stack behavior, and problem decomposition for Data Structures & Algorithms (DSA).

📂 Problems Included:


1️⃣ Maze Path Counting

📌 Description

The Maze Path problem calculates the number of ways to reach the destination cell from the starting cell in a grid using recursion.

🎯 Objective

Given a grid (e.g., 2×2 or NxM), count total possible paths from top-left to bottom-right.

🧠 Concepts Used

Recursion

Base case handling

Boundary conditions

Backtracking logic

Grid traversal

📈 Time Complexity

Exponential (depends on grid size)

2️⃣ Tower of Hanoi

📌 Description

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

🎓 Learning Goals

This repository focuses on:

Understanding recursion deeply

Learning how recursive calls use the stack

Strengthening problem-solving logic

Preparing for DSA topics like trees, backtracking, and divide & conquer


👨‍💻 Author

Anirban Chattaraj
C Programming & DSA Practice
