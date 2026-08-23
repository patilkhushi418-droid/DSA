## Approach

We keep track of the lowest price seen so far using `bestBuy`.

For each day's price, we calculate the profit we would get by selling on that day:

`profit = prices[i] - bestBuy`

We update `maxProfit` whenever we find a better profit.

At the same time, we update `bestBuy` whenever we find a lower buying price.

This allows us to find the maximum profit in a single traversal of the array.

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
