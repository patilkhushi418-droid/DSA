## Approach

The key observation is that Alice wins whenever `n` is even.

If `n` is even, Alice can choose `1`, making the remaining number odd. Whatever divisor Bob chooses next, Alice can continue with the corresponding strategy.

If `n` is odd, every divisor of `n` is odd, so after Alice's move the remaining number becomes even, putting Bob in the winning position.

Therefore, we simply check whether `n` is even.

## Complexity

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)
