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

### Number Spiral
A number spiral is an infinite grid whose upper-left square has number 1. Your task is to find out the number in row `y` and column `x`.

**Input**: The first imput line contains an integer `t`: the number of tests. After this, there are `t` lines, each containing integers `y` and `x`. (Example: 3`\n`2 3`\n`1 1`\n`4 2)

**Output**: For each test, print the number in row `y` and column `x`. (Example: 8 1 15)

### Two Knights
Your task is to count for `k = 1, 2, ..., n` the number of ways two knights can be placed on a `k * k` chessboard so that they do not attack eachother.

**Input**: The only input line contains an integer `n`. (Example: 8)

**Output**: Print `n` integers: the results. (Example: 0 6 28 96 252 550 1056 1848)

### Two Sets
Your task is to divide the numbers `1, 2, ..., n` into two sets of equal sum.

**Input**: The only input line contains an integer `n`. (Example: 7)

**Output**: Print "YES", if the division is possible, and "NO" otherwise. After this, print if the division is possible, print an example of how to create the sets.

### Bit Strings
Your task is to calculate the number of bit strings of length `n`. For example, if `n = 3`, the correct answer is 8, because the possible bit strings are `000`, `001`, `010`, `011`, `100`, `101`, `110`, and `111`.

**Input**: The only input line has an integer `n`. (Example: 3)

**Output**: Print the result modulo 10E9 + 7. (Example: 8)

### Trailing Zeros
Your task is to calculate the number of trailing zeros in the factorial `n!`. For example, `20! = 20!=2432902008176640000` and it has 4 trailing zeros.

**Input**: The only input line has an integer `n`. (Example: 20)

**Output**: Print the number of in `n!`. (Example: 4)

### Coin Piles
You have two coin piles containing `a` and `b` coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile. Your task is to efficiently find out if you can empty both the piles.

**Input**: The first input line has an integer `t`: the number of tests. After this, there are `t` lines, each of which has two integers `a` and `b`: the numbers of coins in the piles. (Example: 3`\n`2 1`\n`2 2`\n`3 3)

**Output**: For each test, print "YES" if you can empty the piles and "NO" otherwise. (Example: YES NO YES)

### Palindrome Reorder
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (ie. it reads the same forwards and backwards).

**Input**: The only input line has a string of length `n` consisting of characters A-Z. (Example: AAAACACBA)

**Output**: Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTIONS". (Example: AACABACAA)

### Gray Code
A gray code is a list of `2^n` bit strings of length `n`, where any two successive strings differ in exactly one bit (ie. their hamming distance is one). Your task is to create a gray code for a given length `n`.

**Input**: The only input line has an integer `n`. (Example: 2)

**Output**: Print `2^n` lines that describes the gray code. You can print any valid solution. (Example: 00 01 11 10)

### Digit Queries
Consider an infinite string that consists of all positive integers in increasing order: 12345678910111213141516171819202122232425... Your task is to process `q` queries of the form: what is the digit at position `k` in the string?

**Input**: The first input line has an integer `q`: the number of queries. After this, there are `q` lines that describe the queries. Each line has an integer `k`: a 1-indexed position in the string. (Example: 3 7 19 12)

**Output**: For each query, print the corresponding digit. (Example: 7 4 1)
