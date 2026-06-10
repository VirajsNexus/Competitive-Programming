# Take Two Stones

## Problem

Alice and Bob are playing a game with `n` stones arranged in a sequence.

Players take turns removing **exactly two consecutive stones** until no more valid moves can be made.

After the game ends:

- If the number of stones left is **odd**, Alice wins.
- If the number of stones left is **even**, Bob wins.

Alice always plays first, and both players play optimally.

Your task is to determine the winner.

---

## Key Observation

Each move removes exactly **2 stones**.

Since 2 is an even number, removing 2 stones never changes whether the total number of stones is odd or even.

Therefore:

- If `n` is odd, the number of remaining stones will also be odd.
- If `n` is even, the number of remaining stones will also be even.

The winner depends only on the parity of the initial number of stones.

---

## Approach

1. Read the number of stones `n`.
2. Check whether `n` is odd or even.
3. If `n` is odd, output **Alice**.
4. Otherwise, output **Bob**.

---

## Algorithm

```text
Read n

If n is odd
    Output "Alice"
Else
    Output "Bob"
```

---

## Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

## Examples

### Input
```text
1
```

### Output
```text
Alice
```

### Explanation

One stone is already an odd number, so Alice wins.

---

### Input
```text
2
```

### Output
```text
Bob
```

### Explanation

Two stones form an even number, so Bob wins.

---

### Input
```text
5
```

### Output
```text
Alice
```

### Explanation

Five is odd, and removing pairs of stones does not change the parity.