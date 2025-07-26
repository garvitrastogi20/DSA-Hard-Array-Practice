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
| 9 | [4Sum](codes/4sumbruteforce.cpp) | Brute Force | O(n⁴) | O(1) | Four nested loops + Set |
| 10 | [4Sum](codes/4sumbetter.cpp) | Better | O(n³) | O(n) | Hashing Triplets |
| 11 | [4Sum](codes/4sumoptimal.cpp) | Optimal | O(n³) | O(1) | Sorting + Two Pointers |
| 12 | [Number of Subarrays with XOR = K](codes/numberofsubarraywithxorkbruteforce.cpp) | Brute Force | O(n²) | O(1) | Nested loops + XOR |
| 13 | [Number of Subarrays with XOR = K](codes/numberofsubarraywithxorkbetter.cpp) | Better | O(n²) | O(n) | Prefix XOR array |
| 14 | [Merge Overlapping Intervals](codes/mergeoverlappingsubintervalsbruteforce.cpp) | Brute Force | O(n²) | O(n) | Compare all + Merge |
| 15 | [Merge Overlapping Intervals](codes/mergeoverlappingsubintervalsoptimal.cpp) | Optimal | O(n log n) | O(n) | Sorting + Merging |
| 16 | [Merge Two Sorted Arrays (with Extra Space)](codes/mergesortedarrayswithextraspace.cpp) | Brute | O(n + m) | O(n + m) | Two Pointers |
| 17 | [Merge Two Sorted Arrays (Without Extra Space)](codes/mergesortedarraysWITHOUTextraspace1.cpp) | Optimal | O((n + m) log(n + m)) | O(1) |Swap and Sort|
| 18 |  [Find Repeating and Missing Number](codes/findrepeatingandmissing.cpp) | Alternative Optimal | O(n) | O(1) | (Potentially another optimal variant for the same problem) |
| 19 | [Find Missing and Repeating Number](codes/findmissingandrepeatinghashing.cpp) | Hashing | O(n) | O(n) | Hash Map |
| 20 | [Find Missing and Repeating Number](codes/findmissingandrepeatingoptimal.cpp) | Optimal | O(n) | O(1) | Math based |
| 21 | [Count Inversions](codes/countinversionsbruteforce.cpp) | Brute Force | O(n²) | O(1) | Nested Loops |
| 22 | [Count Inversions](codes/countinversionoptimal.cpp) | Optimal | O(n log n) | O(n) | Merge Sort (Modified) |
| 23 | [Reverse Pairs](codes/reversepairsbruteforce.cpp) | Brute Force | O(n²) | O(1) | Nested Loops |
| 24 | [Reverse Pairs](codes/reversepairsoptimal.cpp) | Optimal | O(n log n) | O(n) | Merge Sort (Modified) |



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

---

  ### 4. 4Sum

Find all unique quadruplets in the array which sum up to a given target.

**Brute Force Approach**
- Use four nested loops to generate all quadruplets.
- Check if their sum equals the target.
- Use a set to avoid duplicates.
- **Time:** O(n⁴), **Space:** O(1)

**Better Approach**
- Fix the first two elements.
- Use a hash set for the remaining two.
- Sort quadruplets before inserting into a set.
- **Time:** O(n³), **Space:** O(n)

**Optimal Approach**
- Sort the array.
- Fix the first two elements in nested loops.
- Use two pointers for the remaining two.
- Skip duplicates to avoid repeating quadruplets.
- **Time:** O(n³), **Space:** O(1)

---
### 5. Number of Subarrays with XOR = K

Count the number of subarrays whose XOR equals a given integer `K`.

**Brute Force Approach**
- Loop through all subarrays with two nested loops.
- XOR all elements in each subarray and compare with `K`.
- **Time:** O(n²), **Space:** O(1)

**Better Approach**
- Build a prefix XOR array while iterating.
- For every subarray (i, j), compute XOR as `prefix[j] ^ prefix[i-1]`.
- Check how many such values match `K`.
- **Time:** O(n²), **Space:** O(n)
---
### 6. Merge Overlapping Intervals

Given a list of intervals, merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input.

**Brute Force Approach**
- Compare each interval with every other to find overlaps.
- Merge them and keep track of visited.
- Sort the result at the end.
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(n)

**Optimal Approach**
- Sort the intervals by starting time.
- Iterate and merge overlapping ones on the fly.
- Push merged intervals to a new result array.
- **Time Complexity:** O(n log n)  
- **Space Complexity:** O(n)

---
### 7. Merge Two Sorted Arrays

Given two sorted arrays `arr1[]` and `arr2[]`, merge them **without using extra space**, such that the final merged result remains sorted in both arrays.

**With Extra Space (Brute Approach)**
- Use two pointers to merge both arrays into a third temporary array.
- Then copy elements back.
- **Time:** O(n + m), **Space:** O(n + m)

**Without Extra Space (Optimal Approach: Swap and Sort)**
- Compare the largest element of `arr1` with the smallest of `arr2`.
- Swap if out of order.
- Repeat until elements are roughly partitioned.
- Then sort both arrays.
- **Time Complexity:** O(min(n, m) + n log n + m log m)  
- **Space Complexity:** O(1)
---

### 8. Find Missing and Repeating Number

Given an unsorted array of `n` integers from `1` to `n`, where one number is missing and one number is repeating. Find both the repeating and the missing number.

**Brute Force Approach**
- For each number from 1 to `n`, iterate through the given array to count its occurrences.
- The number with a count of 0 is missing.
- The number with a count greater than 1 is repeating.
- **Time Complexity:** $O(n^2)$
- **Space Complexity:** $O(1)$ (if just printing, $O(n)$ if storing counts for all numbers in a separate array/map)

**Hashing Approach**
- Use a hash map (or a boolean/frequency array of size `n+1`) to keep track of the occurrences of each number in the input array.
- Iterate through the given array and update counts in the hash map. The first number whose count becomes 2 is the repeating number.
- Then, iterate from 1 to `n`. The number for which the count in the hash map is 0 is the missing number.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(n)$ (for the hash map/frequency array)

**Optimal Approach (Using Math or XOR)**
- **Mathematical Approach:**
    - Calculate the sum of all numbers in the given array, `S`.
    - Calculate the sum of squares of all numbers in the given array, `P`.
    - Calculate the expected sum of numbers from 1 to `n`, `S_expected = n(n+1)/2$.
    - Calculate the expected sum of squares of numbers from 1 to `n`, `P_expected = n(n+1)(2n+1)/6$.
    - Let the repeating number be `X` and the missing number be `Y`.
    - We have two linear equations derived from the sums:
        - Equation 1: $S - S_{expected} = X - Y$
        - Equation 2: $P - P_{expected} = X^2 - Y^2 = (X-Y)(X+Y)$
    - From Equation 1, substitute $(X-Y)$ into Equation 2, then solve the system of two linear equations for `X` and `Y`.
- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$

---

### 9. Count Inversions

Given an array of integers, find the number of inversions.
An inversion is a pair $(i, j)$ such that $i < j$ and $\text{arr}[i] > \text{arr}[j]$.

**Brute Force Approach**
- Use two nested loops. The outer loop iterates from `i = 0` to `n-1`. The inner loop iterates from `j = i+1` to `n-1`.
- For each pair `(i, j)`, check if `arr[i] > arr[j]`. If true, increment the inversion count.
- **Time Complexity:** $O(n^2)$
- **Space Complexity:** $O(1)$

**Optimal Approach (Modified Merge Sort)**
- This problem is best solved using a modified **Merge Sort** algorithm.
- The standard Merge Sort algorithm already divides the array into halves, sorts them, and then merges them.
- During the **merge step**, when elements from the two sorted halves are being combined:
    - If an element from the left half is taken, no inversions are counted involving it with elements in the right half that are yet to be processed.
    - If an element from the right half is taken, and there are still elements remaining in the left half, it means all those remaining elements in the left half are greater than the current element from the right half (because both halves are sorted). Therefore, each of these remaining elements forms an inversion with the current element from the right half. The count of remaining elements in the left half is added to the total inversion count.
- **Time Complexity:** $O(n \log n)$ (same as Merge Sort, as the inversion counting adds only constant time work to each merge operation)
- **Space Complexity:** $O(n)$ (due to the temporary array used in the merge step of Merge Sort)

---

### 10. Reverse Pairs

Given an integer array `nums`, return the number of *reverse pairs* in the array.
A reverse pair is a pair $(i, j)$ where $0 \le i < j < \text{nums.length}$ and $\text{nums}[i] > 2 \cdot \text{nums}[j]$.

**Brute Force Approach**
- Use two nested loops. The outer loop iterates from `i = 0` to `n-1`. The inner loop iterates from `j = i+1` to `n-1`.
- For each pair `(i, j)`, check if `nums[i] > 2 * nums[j]`. If true, increment the reverse pair count.
- **Time Complexity:** $O(n^2)$
- **Space Complexity:** $O(1)$

**Optimal Approach (Modified Merge Sort)**
- This problem can be efficiently solved by modifying the **Merge Sort** algorithm, similar to counting inversions.
- The key is to count reverse pairs **before** merging the two sorted halves.
- When you have two sorted sub-arrays (left and right), for each element `nums[i]` in the left sub-array:
    - Find the first index `k` in the right sub-array such that `nums[i] <= 2 * nums[k]`.
    - All elements from the start of the right sub-array up to `k-1` will satisfy `nums[i] > 2 * nums[j]`. The number of such elements (`k - start_of_right_subarray`) contributes to the reverse pair count.
    - This counting step can be done efficiently in linear time for each merge operation because both sub-arrays are sorted.
- After counting, proceed with the standard merge operation to sort the combined array.
- **Time Complexity:** $O(n \log n)$ (same as Merge Sort, as the counting adds only linear time work to each merge operation)
- **Space Complexity:** $O(n)$ (due to the temporary array used in the merge step of Merge Sort)

---
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
