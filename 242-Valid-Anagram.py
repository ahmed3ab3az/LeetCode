class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        a = {letter: 0 for letter in string.ascii_lowercase}
        for i in s:
            a[i] = a[i] + 1
        b = {letter: 0 for letter in string.ascii_lowercase}
        for i in t:
            b[i] = b[i] + 1
        for ch in string.ascii_lowercase:
            if a[ch] != b[ch]:
                return False
        return True
        
