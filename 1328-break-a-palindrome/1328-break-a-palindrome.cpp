class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length();

        // If the string has only one character, it's impossible
        if (n == 1)
            return "";

        // Check only the first half of the palindrome
        for (int i = 0; i < n / 2; i++) {
            // Replace the first non-'a' character with 'a'
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        // If all characters in the first half are 'a',
        // change the last character to 'b'
        palindrome[n - 1] = 'b';
        return palindrome;
    }
};
