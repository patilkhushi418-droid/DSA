## Approach

We use two pointers, `left` and `right`, starting from the beginning and end of the string.

We skip characters that are not alphanumeric using `isalnum()`.

For comparison, both characters are converted to lowercase using `tolower()`.

If the characters are different, the string is not a palindrome, so we return `false`.

If all valid characters match while the two pointers move toward each other, the string is a palindrome.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

<ul>
	<li><code>1 &lt;= s.length &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>
