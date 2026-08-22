class Solution {
public:
    string reverseVowels(string s) {
            int left = 0;
        int right = s.length() - 1;
        
        // Inline helper function for fast O(1) checks without external lookups
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        };
        
        while (left < right) {
            // Find the next vowel from the left
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Find the next vowel from the right
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            
            // Swap the found vowels
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};