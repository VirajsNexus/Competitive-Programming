# 13 Floors

## Problem

Bill is responsible for labeling the floors of a skyscraper. Since he is superstitious, he wants to skip the number **13** when assigning floor labels.

For example:

| True Floor | Label |
|------------|--------|
| 12 | 12 |
| 13 | 14 |
| 14 | 15 |

Given the true floor number, determine the label that should be assigned to that floor.

---

## Approach

The only skipped label is **13**.

- If the true floor number is less than 13, the label remains unchanged.
- If the true floor number is 13 or greater, the label is increased by 1 because label 13 is skipped.

---

## Algorithm

```text
Read n

If n >= 13
    Print n + 1
Else
    Print n
```

---

## Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

## Example

### Input
```text
13
```

### Output
```text
14
```

### Explanation

Since floor label **13** is skipped, the true 13th floor is labeled **14**.