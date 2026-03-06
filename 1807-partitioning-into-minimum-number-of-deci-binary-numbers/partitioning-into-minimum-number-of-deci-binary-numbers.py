class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """

        max = 0
        for i in n :
            if(max < int(i)):
                max = int(i)
            if(max == 9):
                return 9
        
        return max
        