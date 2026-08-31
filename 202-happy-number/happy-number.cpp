class Solution {
public:

    int sumSquare(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> s;

        while (n != 1) {
            if (s.find(n) != s.end())
                return false;

            s.insert(n);
            n = sumSquare(n);
        }

        return true;
    }
};