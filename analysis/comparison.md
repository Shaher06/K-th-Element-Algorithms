# Comparison Between Algorithms

| Point | Non-Recursive Algorithm | Recursive Algorithm |
|---|---|---|
| Type | Iterative | Recursive |
| Approach | Iterative merge-like approach | Divide and conquer |
| Main Idea | Moves step by step until reaching the k-th element | Removes about k/2 elements in each recursive call |
| Time Complexity | O(k) | O(log k) |
| Worst Case Time Complexity | O(n + m) | O(log k) |
| Space Complexity | O(1) | O(log k) |
| Difficulty | Easier to understand and implement | More difficult because it uses recursion |
| Best Use | Small inputs or simple implementation | Large inputs and better performance |

## Conclusion

The non-recursive algorithm is simpler, easier to trace, and easier to implement. However, it may take more time when k is large.

The recursive algorithm is more efficient because it reduces the search space during each recursive call. However, it is harder to understand and requires extra memory because of the recursion stack.

For better performance, the recursive algorithm is preferred.

For simplicity and easier implementation, the non-recursive algorithm is preferred.