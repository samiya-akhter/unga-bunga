# A. A Simple Sequence

| Field | Value |
|---|---|
| **Contest** | [2210](https://codeforces.com/contest/2210) |
| **Problem** | [2210A — A Simple Sequence](https://codeforces.com/contest/2210/problem/A) |
| **Rating** | Gym |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

| Item | Value |
|---|---|
| **Time Limit** | 1 second |
| **Memory Limit** | 256 megabytes |

### Problem Statement

You are given an integer n. You need to construct a permutation^{\text{∗}} a_1, a_2, \ldots, a_n using integers from 1 to n such that the following condition is satisfied:

 a_1 \bmod a_2 \ge a_2 \bmod a_3 \geq \ldots \ge a_{n-1} \bmod a_{n},  where u mod v denotes the remainder of dividing u by v.

If multiple valid permutations exist, you may output any of them.

It can be shown that a valid permutation always exists for every n \ge 2.

^{\text{∗}}A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

### Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 \le t \le 100). The description of the test cases follows. 

The first line of each test case contains a single integer n (2 \le n \le 100).

### Output

For each test case, output on a single line n space-separated integers a_1, a_2, \ldots a_n.

If multiple valid permutations exist, you may output any of them.

### Example

**Example**

```input
4
2
3
4
5
```

```output
2 1
2 3 1
2 4 3 1
3 5 4 2 1
```

### Note

In the second test case, 2 \bmod 3 \ge 3 \bmod 1, so the permutation [2, 3, 1] is valid.

In the third test case, 2 \bmod 4 \ge 4 \bmod 3 \ge 3 \bmod 1, so the permutation [2, 4, 3, 1] is valid.

> 🔗 [View full problem on Codeforces](https://codeforces.com/contest/2210/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
