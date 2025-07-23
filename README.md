# Experiment 4: Bitwise Operators in C++

## Aim
To study and implement **bitwise operators** in C++ and understand how to use them for manipulating individual bits of integers.

---

## Tools used 
- Visual Studio Code (VS Code) / Programiz Online C++ Compiler.

---

## Theory

## Why C++ is More Efficient Than C

- **Object-Oriented Programming:**  
  Supports encapsulation and reusability via classes and objects.

- **Standard Template Library (STL):**  
  Provides ready-to-use, high-performance containers and algorithms.

- **Function Overloading & Default Arguments:**  
  Reduces code duplication and increases flexibility.

- **Type Safety & Better Error Checking:**  
  Catch more errors at compile time.

- **Dynamic Memory Management:**  
  Allows use of `new` and `delete` for precise control over memory.

- **Namespaces:**  
  Prevent name clashes in large projects.

These features make C++ a more structured, scalable, and efficient language than C, especially in large or modular applications.

Bitwise operators are used in C++ to perform operations directly on the **binary representation** of data. These operations are extremely **fast and efficient**, making them highly useful in low-level programming, embedded systems, hardware interfacing, cryptography, and performance-critical applications.

Instead of dealing with entire variables, bitwise operators allow us to **manipulate individual bits** within those variables. This gives us more control and allows for highly optimized code.

---

### Bitwise Operators in C++

| Operator | Symbol | Description |
|----------|--------|-------------|
| AND      | `&`    | Sets each bit to 1 if both bits are 1 |
| OR       | `|`    | Sets each bit to 1 if at least one of the bits is 1 |
| NOT      | `~`    | Inverts all the bits (0 becomes 1 and 1 becomes 0) |
| XOR      | `^`    | Sets each bit to 1 if only one of the bits is 1 |
| LEFT SHIFT | `<<` | Shifts bits to the left (multiplies number by 2ⁿ) |
| RIGHT SHIFT | `>>` | Shifts bits to the right (divides number by 2ⁿ) |

---

### Use Cases of Bitwise Operators:
- Efficiently setting, resetting, and toggling specific bits
- Compressing data or packing multiple variables into a single byte
- Performing calculations with low-level precision
- Writing performance-optimized code for embedded systems

---

## Program Descriptions

### Program 1: Basic Bitwise Operations

This program demonstrates how different bitwise operators work on two integers `a` and `b`. It prints the result of each operation for better understanding.

#### Operations Demonstrated:
- Bitwise AND (`a & b`)
- Bitwise OR (`a | b`)
- Bitwise NOT (`~b`)
- Bitwise XOR (`a ^ b`)
- Right Shift (`a >> 2`)
- Left Shift (`a << 2`)

#### Concepts:
- Working with binary data at bit level
- How logical bit manipulation affects the result
- Efficient transformation of numeric data

---

### Program 2: Set and Reset Specific Bits

This program shows how to **manipulate specific bits** of integers using bitwise operators and user input.

#### Workflow:
1. **Set a Bit**:  
   - Takes an integer `a` and a bit position from the user.
   - Uses the expression `a | (1 << bit_position)` to **set** (turn ON) that bit.

2. **Reset a Bit**:  
   - Takes another integer `b` and a bit position from the user.
   - Uses `b & (~(1 << bit_position))` to **reset** (turn OFF) that bit.

#### Concepts:
- Use of left shift to move to a specific bit
- Bit masking using OR and AND
- Logical NOT to flip bit states
- User-driven bit manipulation

---

## Sample output

Program 1

AND: 0

OR: 48

NOT: -17

XOR: 48

RIGHT_SHIFT: 8

LEFT_SHIFT: 128


Program 2

Enter the bit to be set: 4

The set is: 80

Enter the bit to be reset: 5

The reset is: 66

----

## Conclusion

In this experiment, we:

- Explored the core **bitwise operators** in C++.
- Learned how to **modify individual bits** using shift and mask techniques.
- Applied bitwise logic for **efficient data processing**.
- Gained hands-on experience with low-level computation in a high-level language.

Bitwise operations are vital in scenarios where performance and memory usage are critical. This experiment lays the foundation for deeper systems-level programming.

---
