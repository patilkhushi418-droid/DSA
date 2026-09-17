class Solution {
public:
    int countDigitOne(int n) {
        int count = 0;

        for (long long factor = 1; factor <= n; factor *= 10) {
            long long high = n / (factor * 10);
            long long cur = (n / factor) % 10;
            long long low = n % factor;

            if (cur == 0)
                count += high * factor;
            else if (cur == 1)
                count += high * factor + low + 1;
            else
                count += (high + 1) * factor;
        }

        return count;
    }
};