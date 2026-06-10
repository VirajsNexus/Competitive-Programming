# 0/1 Knapsack Problem Using Recursion

---

## Introduction

This project demonstrates the implementation of the 0/1 Knapsack Problem using a recursive approach in C++. The objective is to maximize the total value of items placed in the knapsack without exceeding its capacity.

---

## Approach

The solution is based on recursion and the concept of making a choice for every item.

For each item, there are two possible choices:

1. Include the item in the knapsack.
2. Exclude the item from the knapsack.

The algorithm recursively evaluates both choices and returns the maximum profit.

---

## Algorithm

1. If there are no items left or the knapsack capacity becomes zero, return 0.
2. Check whether the current item can fit into the knapsack.
3. If it fits:
   - Calculate the profit obtained by including the item.
   - Calculate the profit obtained by excluding the item.
   - Return the larger profit.
4. If it does not fit:
   - Skip the item and continue with the remaining items.

---

## Input

- Number of items
- Weight of each item
- Value of each item
- Knapsack capacity

---

## Output

- Maximum profit that can be stored in the knapsack

---

## Time Complexity

**O(2^n)**

---

## Space Complexity

**O(n)**

---

## Concepts Used

- Recursion
- 0/1 Knapsack
- Divide and Conquer
- Decision Making

---

## Project Structure

```text
Project Folder
│
├── main.cpp
├── knapsack.h
├── knapsack.cpp
└── README.md
```

---

## Author

**Viraj Jamdhade**

---