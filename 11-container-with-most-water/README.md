## Approach

We use two pointers:

- `lp` starts from the left end.
- `rp` starts from the right end.

At each step, we calculate the area using the distance between the two pointers and the smaller of the two heights.

area = width × minimum height
After calculating the area, we move the pointer with the smaller height because moving the taller pointer cannot increase the limiting height.

We continue until both pointers meet and keep track of the maximum area found.

Complexity
Time Complexity: O(n)
Space Complexity: O(1)
