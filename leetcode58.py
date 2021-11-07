class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s.rstrip()
        ans = len(s.split()[-1])
       
        return ans
        
