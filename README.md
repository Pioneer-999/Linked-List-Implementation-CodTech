# Linked-List-Implementation-CodTech

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SHASHWAT SHUBHAM

*INTERN ID*: CT04DG3340

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH



**About Linked List Implementation in C**

# Task 2: Singly Linked List Implementation in C

## Objective

The goal of this task is to implement a *Singly Linked List* in the C programming language with basic operations:
- Insertion at the beginning
- Insertion at the end
- Deletion by value
- Traversal and display

Linked Lists are dynamic data structures that allow efficient insertions and deletions without shifting memory. This program demonstrates the core working principles behind linked list operations using a clean, modular, and well-commented approach.

---

## What the Program Does

This C program allows users to interactively manage a singly linked list using a menu-driven interface. The operations included are:

1. *Insert at Beginning* – Adds a new node at the start of the list.
2. *Insert at End* – Adds a new node at the end of the list.
3. *Delete Node (by value)* – Removes the first occurrence of a node containing the specified value.
4. *Traverse List* – Displays all the elements in the list.
5. *Exit* – Ends the program execution.

Each operation is encapsulated in a separate function for clarity and modularity.

---

## How I Built It

- Defined a structure `Node` with two members: `data` (to store integer values) and `next` (pointer to the next node).
- Maintained a global pointer `head` that always points to the beginning of the list.
- Used dynamic memory allocation (`malloc`) to create new nodes.
- Implemented separate functions for insertion, deletion, and traversal.
- Used a loop and `switch-case` to implement a menu-based interface in the `main()` function.

Error checks (e.g., for empty list or node not found) and memory handling are included to ensure safety and user feedback.

---
