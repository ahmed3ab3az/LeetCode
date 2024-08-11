#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
class Solution {
public:
char myToLower(char ch) {
    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        // Convert to lowercase by adding 32
        return ch + 32;
    }
    // If not uppercase, return the character as is
    return ch;
}
    bool isPalindrome(string s) {
        string ans ="";
        for (auto ch : s) {
        // if the current character
        // is an alphabet
        if (isalpha(ch))
            ans += myToLower(ch);
        else if(isdigit(ch))
            ans += ch;
    }
        
    int i = 0 ;
    int j = ans.size()-1;
    while(i < j){
        if(ans[i] != ans[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

    }
};