class Solution(object):
    

    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        
        def check(s, open_count, close_count):
            if len(s) == 2 * n:
                result.append(s)
                return
            if open_count < n:
                check(s + "(", open_count + 1, close_count)
            if close_count < open_count:
                check(s + ")", open_count, close_count + 1)
        
        check("", 0, 0)
        return result
    


        