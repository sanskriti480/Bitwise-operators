Experiment 4

Aim - To study and implement C++ Bitwise Operators.

Apparatus - VS Code or Programiz Online C++ Compiler.

Theory - 

Program 1
This C++ program demonstrates the use of bitwise operators, which work directly on the binary representation of numbers. It starts by defining two integers: a & b. Then it performs several bitwise operations and
displays the results:
1. AND (a & b) compares each bit of a and b, and returns 1 only if both bits are 1.
2. OR (a | b) returns 1 if at least one of the bits is 1.
3. NOT (~b) flips all the bits of b, turning 0s to 1s and 1s to 0s.
4. XOR (a ^ b) returns 1 if the bits are different.
5. RIGHT SHIFT (a >> 2) moves all bits of a two positions to the right, which divides the number by 4.
6. LEFT SHIFT (a << 2) moves all bits of a two positions to the left, which multiplies the number by 4.

Program 2
This C++ program shows how to set and reset (clear) specific bits of a number using bitwise operations. It starts with two integer values: a & b. The user is asked to enter the position of a bit they
want to change.
First, the program takes a bit position from the user to set in a. It uses the expression a | (1 << bit_to_be_set) to turn that particular bit ON (set it to 1), without affecting the other bits. This is done using
the bitwise OR and left shift operations.
Next, the program asks for another bit position to reset in b. It uses the expression b & (~(1 << bit_to_be_reset)) to turn that bit OFF (set it to 0), using bitwise AND, NOT, and left shift.

Conclusion - Hence I learned how to do bitwise operations and how bitwise operators can be used to efficiently manipulate individual bits in a number, such as setting, resetting, and performing logical operations. 
