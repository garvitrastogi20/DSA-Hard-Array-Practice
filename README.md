# 🧠 LeetCode Hard-Level Array Problems

This repository contains solutions to hard-level array problems from [LeetCode](https://leetcode.com/), with each problem implemented using **Better** and **Optimal** approaches wherever applicable.

Each solution includes:
- Code in C++
- Step-by-step implementations
- Time and Space complexities
- Specific algorithms used for optimal solutions

---

## 📚 Table of Contents

| S.No | Problem | Approach | Time Complexity | Space Complexity | Algorithm Used |
|------|---------|----------|-----------------|------------------|----------------|
| 1 | [Pascal’s Triangle - Element at (r, c)](codes/pascaltriangle.cpp) | Optimized | O(r) | O(1) | nCr using iterative multiplication |
| 2 | [Pascal’s Triangle - Nth Row](codes/pascaltriangle.cpp) | Optimized | O(n) | O(1) | Iterative nCr row-building |
| 3 | [Pascal’s Triangle - Full Triangle](codes/pascaltriangle.cpp) | Brute + Iterative | O(n²) | O(n²) | Nested loops using nCr |
| 4 | [Majority Element (> ⌊n/3⌋ times)](codes/majorityelementnby3better.cpp) | Better | O(n) | O(n) | Hash Map |
| 5 | [Majority Element (> ⌊n/3⌋ times)](codes/majorityelementnby3optimal.cpp) | Optimal | O(n) | O(1) | Extended Moore's Voting Algorithm |
| 6 | [3Sum](codes/3sumbruteforce.cpp) | Brute Force | O(n³) | O(1) | Triple loop + Set |
| 7 | [3Sum](codes/3sumbetter.cpp) | Better | O(n²) | O(n) | Hashing |
| 8 | [3Sum](codes/3sumoptimal.cpp) | Optimal | O(n²) | O(1) | Sorting + Two Pointers |

---

## ✅ Problems with Explanation

### 1. Pascal’s Triangle – All Variants

**Subproblems:**
- Given row `r` and column `c`, find the element at that position.
- Given row `n`, print the `n`th row.
- Given `n`, print the entire triangle.

**Approaches:**
- **Optimized:** For single element – use `nCr` via iterative multiplication.  
- **Optimized:** For a row – use running nCr updates.  
- **Brute:** For full triangle – use nested loops.

---

### 2. Majority Element (> ⌊n/3⌋ times)

Find all elements in the array that appear more than ⌊n/3⌋ times.

**Approaches:**
- **Better:** Count occurrences using a hash map.
- **Optimal:** Extended **Moore’s Voting Algorithm** – can return up to two elements.

---
### 3. 3 Sum

Find all unique triplets in the array which sum up to a given target (commonly 0).

**Brute Force Approach**
- Use three nested loops to generate all triplets.
- Check if their sum equals the target.
- Use a set to avoid duplicates.
- **Time:** O(n³), **Space:** O(1)

**Better Approach**
- Fix the first element.
- Use a hash set to find the other two elements.
- Sort triplet before inserting into a set for uniqueness.
- **Time:** O(n²), **Space:** O(n)

**Optimal Approach**
- Sort the array.
- Use a for loop to fix the first element, then use two-pointer approach to find the remaining two.
- Skip duplicates to avoid repeating triplets.
- **Time:** O(n²), **Space:** O(1)

## 🛠️ Tech Stack

- Language: **C++**
- Platform: **LeetCode**
- Editor: **VS Code**

---

## 📌 Notes

- This repo will be updated regularly as I solve more hard-level array problems.
- Each `.cpp` file follows a structured format:  
  **Problem link → Brute → Better → Optimal (if applicable)** with comments and logic.

---

## 📄 License

This project is licensed under the **MIT License**.

---

> _"Hard problems don’t make you fail, they make you think."_ 🚀
