## Introductory Problems

### Weird Algorithm
Consider an algorithm that takes as input a positive integer `n`. If `n` is even, the algorithm divides it by two, and if `n` is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until `n` is one. Your task is to simulate the execution of the algorithm for a given value of `n`. 

**Input**: The only input line contains an integer `n`. (Example: 3)

**Output**: Print a line that contains all values of `n` during the algorithm. (Example: 3 10 5 16 8 4 2 1)

### Missing Number
You are given all numbers between `1, 2, ..., n` except one. Your task is to find the missing number.

**Input**: The first input line contains an integer `n`. The second input line contains `n - 1` numbers. Each number is distinct and between 1 and `n` (inclusive). (Example: 5`\n`2 3 1 5)

**Output**: Print the missing number. (Example: 4)

### Repetitions
You are given a DNA sequence: a string consisting of A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

**Input**: The only input line contains a string of `n` characters. (Example: ATTCGGGA)

**Output**: Print one integer: the length of the longest repetition. (Example: 3)

### Increasing Array
You are given an array of `n` integers. You want to modify the array so that it is increasing, ie. every element is at least as large as the previous element. On each move, you may increase the value of any element by one. What is the minimum number of moves required?

**Input**: The first input line contains an integer `n`: the size of the array. Then the second line contains `n` integers: the contents of the array. (Example: 5`\n`3 2 5 1 7)

**Output**: Print the minimum number of moves. (Example: 5)

### Permutations
A permutation of integers `1, 2, ..., n` is called beautiful if there are no adjacent elements whose difference is 1. Given `n`, construct a beautiful permutation if such a permutation exists.

**Input**: The only input line contains an integer `n`. (Example: 5)

**Output**: Print a beautiful permutation of integers. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION". (Example: 4 2 5 3 1)
