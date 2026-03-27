# A. Required Remainder

| Field | Value |
|---|---|
| **Contest** | [1374](https://codeforces.com/contest/1374) |
| **Problem** | [1374A — Required Remainder](https://codeforces.com/contest/1374/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

| Item | Value |
|---|---|
| **Time Limit** | 1 second |
| **Memory Limit** | 256 megabytes |

### Problem Statement

You are given three integers x, y and n. Your task is to find the **maximum** integer k such that 0 \le k \le n that k \bmod x = y, where \bmod is modulo operation. Many programming languages use percent operator `%` to implement it.

In other words, with given x, y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.

You have to answer t independent test cases. It is guaranteed that such k exists for each test case.

### Input

The first line of the input contains one integer t (1 \le t \le 5 \cdot 10^4) — the number of test cases. The next t lines contain test cases.

The only line of the test case contains three integers x, y and n (2 \le x \le 10^9;~ 0 \le y  \lt  x;~ y \le n \le 10^9).

It can be shown that such k always exists under the given constraints.

### Output

For each test case, print the answer — **maximum non-negative** integer k such that 0 \le k \le n and k \bmod x = y. It is guaranteed that the answer always exists.

### Example

**Example**

```input
7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999
```

```output
12339
0
15
54306
999999995
185
999999998
```

### Note

In the first test case of the example, the answer is 12339 = 7 \cdot 1762 + 5 (thus, 12339 \bmod 7 = 5). It is obvious that there is no greater integer not exceeding 12345 which has the remainder 5 modulo 7.

> 🔗 [View full problem on Codeforces](https://codeforces.com/contest/1374/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
