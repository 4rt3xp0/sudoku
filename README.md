Sudoku solver written in C++.<br/>

How to use?<br/>
<br/>
Sample input:<br/>
0 0 0 0 0 0 0 0 0<br/>
9 5 0 0 0 0 0 8 4<br/>
0 3 0 0 0 0 0 7 0<br/>
0 0 4 0 0 0 6 0 0<br/>
0 0 0 2 0 3 0 0 0<br/>
0 0 5 0 0 0 9 0 0<br/>
0 0 6 0 9 0 5 0 0<br/>
0 7 0 0 0 0 0 2 0<br/>
0 0 0 0 5 0 0 0 0<br/>
(0-s are the unknown numbers)<br/>
<br/>
If there is no solution, or the input is incorrect, it prints "ERROR".<br/>
<br/>
The program uses a brute-force algorithm to find the solution.<br/>
If there are multiple solutions, the program prints the lexicographically first solution.<br/>
