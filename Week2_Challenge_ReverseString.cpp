class Solution {
public:
    void reverseString(vector<char>& s) {
        // Use two pointers: i starts at the beginning, j starts at the end
        for (int i = 0, j = s.size() - 1; i < j;) {
            // Swap characters at i and j, then move the pointers inward
            swap(s[i++], s[j--]);
        }
    }
};