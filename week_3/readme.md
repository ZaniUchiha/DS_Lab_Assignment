# DSA Week 3: Stack and Array Implementations

## Overview

This repository contains C++ implementations and demonstrations of fundamental data structures, focusing on arrays and stacks. The code is organized into several tasks, each illustrating a different approach to implementing and using stacks, both with arrays and linked lists. These examples are designed for educational purposes, especially for those learning Data Structures and Algorithms (DSA).

---

## Contents

- **task_1.cpp**: Dynamic Array Wrapper class demonstration.
- **task_2.cpp**: Stack implementation using a static array.
- **task_3.cpp**: Stack implementation using a singly linked list.
- **task_4.cpp**: Comparison and demonstration of stack ADT using both array and linked list implementations.
- **task_5.cpp**: Extended stack array demonstration with additional stack operations.

---

## Requirements

- **C++ Compiler** (e.g., g++, clang++)
- Basic understanding of C++ classes, pointers, and memory management.
- No external libraries required.

---

## Description

### 1. Dynamic Array Wrapper (`task_1.cpp`)
- Implements a class that wraps a dynamic array.
- Demonstrates memory allocation, initialization, element access, and safe memory deallocation.
- Useful for understanding how dynamic arrays work in C++.

### 2. Stack Using Array (`task_2.cpp` & `task_5.cpp`)
- Implements a stack data structure using a fixed-size array.
- Supports standard stack operations: `push`, `pop`, `peek`, and `print`.
- Handles stack overflow and underflow conditions gracefully.
- `task_5.cpp` extends the demonstration with more stack operations and edge case handling.

### 3. Stack Using Linked List (`task_3.cpp`)
- Implements a stack using a singly linked list.
- Dynamically allocates and deallocates nodes for stack operations.
- No fixed size limitation, grows as needed.
- Demonstrates safe memory management with a destructor.

### 4. Stack ADT Demonstration (`task_4.cpp`)
- Provides a function to demonstrate stack operations using both array and linked list implementations.
- Shows how the same stack interface can be used with different underlying data structures.
- Useful for understanding abstraction and interface design in data structures.

---

## How to Run

1. **Clone the repository:**
    ```sh
    git clone <repository-url>
    cd week_3
    ```

2. **Compile any task file using a C++ compiler:**
    ```sh
    g++ task_1.cpp -o task_1
    ./task_1
    ```

    Replace `task_1.cpp` with any other task file (`task_2.cpp`, `task_3.cpp`, etc.) as needed.

---

## Learning Outcomes

- Understand the difference between static and dynamic memory allocation in C++.
- Learn how to implement and use stacks with both arrays and linked lists.
- Practice safe memory management and destructor usage.
- Explore the concept of Abstract Data Types (ADT) and how different implementations can provide the same interface.

---

## Author

Azem (DSA Week 3 Assignment)

---

## License

This project is for educational purposes.