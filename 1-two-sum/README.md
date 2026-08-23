##  Approach

We use an `unordered_map` to store each number and its index.

For every element, we calculate the required value:

`second = target - first`

If the required value is already present in the map, we have found the two numbers whose sum equals the target.

Otherwise, we store the current number and its index in the map.

##  Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)
