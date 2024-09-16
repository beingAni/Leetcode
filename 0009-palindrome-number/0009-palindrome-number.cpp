class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;  // Negative numbers are not palindromes
        }

        int orig = x;
        int reversed = 0;
        while (x != 0) {
            int d = x % 10;  // Get last digit
            if (reversed > (INT_MAX - d) / 10) {
                return false;  // This will prevent overflow
            }
            reversed = reversed * 10 + d;  // Append digit to reversed number
            x /= 10;  // Remove last digit from original number
        }

        return orig == reversed;  // Check if original and reversed are the same
    }
};
