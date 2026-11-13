# 🌀 Fibonacci Sequence in Modern C

A lightweight, high-performance C program that calculates and displays the Fibonacci sequence using safe, large-integer types (`unsigned long long`).

---

## 📐 The Mathematical Equation

The Fibonacci sequence is defined recursively by the recurrence relation:

$$F_n = F_{n-1} + F_{n-2}$$

With the foundational base cases:
* $F_0 = 0$
* $F_1 = 1$

Each subsequent number is simply the sum of the previous two numbers (e.g., $0, 1, 1, 2, 3, 5, 8, 13, 21 \dots$).

---

## 🚀 How to Run

Compile and execute the program instantly in your terminal with a single command:

```bash
gcc main.c -o fib_app
./fib_app