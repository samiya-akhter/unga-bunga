# A. Stair, Peak, or Neither?

| Field | Value |
|---|---|
| **Contest** | [1950](https://codeforces.com/contest/1950) |
| **Problem** | [1950A — Stair, Peak, or Neither?](https://codeforces.com/contest/1950/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Runtime** | 15 ms |
| **Memory** | 100 KB |

| Item | Value |
|---|---|
| **Time Limit** | 1 second |
| **Memory Limit** | 256 megabytes |

### Problem Statement

You are given three digits a, b, and c. Determine whether they form a stair, a peak, or neither. 

 
-  A *stair* satisfies the condition a \lt b \lt c. 

-  A *peak* satisfies the condition a \lt b \gt c.

### Input

The first line contains a single integer t (1 \leq t \leq 1000) — the number of test cases.

The only line of each test case contains three digits a, b, c (0 \leq a, b, c \leq 9).

### Output

For each test case, output "`STAIR`" if the digits form a stair, "`PEAK`" if the digits form a peak, and "`NONE`" otherwise (output the strings without quotes).

### Example

**Example**

```input
7
1 2 3
3 2 1
1 5 3
3 4 1
0 0 0
4 1 7
4 5 7
```

```output
STAIR
NONE
PEAK
PEAK
NONE
NONE
STAIR
```

> 🔗 [View full problem on Codeforces](https://codeforces.com/contest/1950/problem/A)

---
*Synced by [CodeforcesSync](https://github.com/parthopaul69/Codeforces)*
