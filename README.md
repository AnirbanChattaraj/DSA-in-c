📌 Maze Path Counting (Recursion in C)
📖 Overview

This project implements a recursive solution to calculate the total number of possible paths in a grid (maze).

The program counts the number of ways to move from the top-left corner (1,1) to the bottom-right corner (n,m) using only:

➡️ Right moves

⬇️ Down moves

This is a classic Recursion + Backtracking foundation problem in Data Structures & Algorithms (DSA).

🧠 Problem Statement

Given a grid of size n × m, calculate the total number of unique paths from:

Start: (1,1)
End: (n,m)

Allowed moves:

Move Right → (cr, cc+1)

Move Down → (cr+1, cc)

🔍 How It Works
Base Case

When current row and column reach the destination:

(cr == er && cc == ec)

Return 1 because one valid path is found.

Recursive Cases

If on the last row → Can only move Right

If on the last column → Can only move Down

Otherwise → Move both Right and Down

The function adds the total number of paths from both directions.

⏱ Time Complexity

O(2^(n+m)) (Exponential)

Many overlapping subproblems exist.

This can be optimized using Dynamic Programming (Memoization / Tabulation).

🧪 Example

Input:

Enter your rows: 2
Enter your column: 2

Output:

The total ways 2

Possible Paths:

Right → Down

Down → Right

📚 Concepts Covered

Recursion

Base Condition

Recursive Tree

Stack Behavior

Path Counting

Foundation for Dynamic Programming

🚀 Future Improvements

Add Memoization

Convert to Dynamic Programming (Tabulation)

Add Diagonal moves

Print actual paths instead of just counting

👨‍💻 Author

Anirban Chattaraj


C Programming & DSA Practice
