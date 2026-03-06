class Solution(object):

    def concatenatedBinary(self, n):
        """
        :type n: int
        :rtype: int
        """
        str = ""
        i=1
        while(i <= n ):
            str += bin(i)[2:]
            i+=1

        return int(str, 2) % (10**9+7)