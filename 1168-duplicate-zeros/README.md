## Approach

We traverse the array from left to right.

Whenever we find a `0`, we shift all elements after it one position to the right and place another `0` immediately after it.

Since the array size must remain unchanged, elements that move beyond the last position are discarded.

After duplicating a zero, we skip the newly inserted zero to avoid processing it again.

##  Complexity

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)
