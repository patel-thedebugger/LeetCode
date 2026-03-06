class Solution(object):
    def checkOnesSegment(self, s):
        """
        :type s: str
        :rtype: bool
        """
        f1 = s.find('1')
        f0 = s.find('0',f1)
        if(f0 == -1 ):
            return True
        elif(s.find('1',f0) == -1):
            return True
        else:
            return False
        