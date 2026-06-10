# Basketball One-on-One

## Problem

Alice and Barbara play a basketball game. Each scoring event is recorded
as:

-   `A1` → Alice scores 1 point
-   `A2` → Alice scores 2 points
-   `B1` → Barbara scores 1 point
-   `B2` → Barbara scores 2 points

Given the complete scoring history of a finished game, determine the
winner.

## Approach

We simulate the game by processing the input string two characters at a
time:

1.  Read the player (`A` or `B`).
2.  Read the points scored (`1` or `2`).
3.  Update the corresponding score.
4.  After processing the entire string, compare the final scores.

The problem guarantees that the input represents a valid completed game.

## Algorithm

``` text
alice = 0
barbara = 0

for every pair of characters:
    if player == 'A':
        alice += points
    else:
        barbara += points

if alice > barbara:
    print('A')
else:
    print('B')
```

## Complexity Analysis

-   Time Complexity: **O(n)**
-   Space Complexity: **O(1)**