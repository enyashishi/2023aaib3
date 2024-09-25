#在稻草堆找針 在字串a 找字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)