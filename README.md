Sudoku solver written in C++.

How to use?
Create a file named "input.txt" in the directory of "sudoku.exe".
Write the 9x9 matrix in it.
Sample input:
0 0 0 0 0 0 0 0 0
9 5 0 0 0 0 0 8 4
0 3 0 0 0 0 0 7 0
0 0 4 0 0 0 6 0 0
0 0 0 2 0 3 0 0 0
0 0 5 0 0 0 9 0 0
0 0 6 0 9 0 5 0 0
0 7 0 0 0 0 0 2 0
0 0 0 0 5 0 0 0 0
(0-s are the unknown numbers)
Run "sudoku.exe".
It will create a file named "output.txt" and write the solution in it.
If there is no solution, or the input is incorrect, it prints "ERROR" to the file.

The program uses a brute-force algorithm to find the solution. 
If there are multiple solutions, the program will print the lexicographically first solution.