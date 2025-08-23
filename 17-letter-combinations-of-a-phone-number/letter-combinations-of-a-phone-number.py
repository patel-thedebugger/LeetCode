class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        if len(digits) == 0 :
            return []
        res = ['']
        for i in digits:
            if i == '2':
                res = map(lambda x  : x + 'a' , res) + map(lambda x  : x + 'b' , res) + map(lambda x  : x + 'c' , res)
            elif i == '3':
                res = map(lambda x  : x + 'd' , res) + map(lambda x  : x + 'e' , res) + map(lambda x  : x + 'f' , res)
            elif i == '4':
                res = map(lambda x  : x + 'g' , res) + map(lambda x  : x + 'h' , res) + map(lambda x  : x + 'i' , res)
            elif i == '5':
                res = map(lambda x  : x + 'j' , res) + map(lambda x  : x + 'k' , res) + map(lambda x  : x + 'l' , res)
            elif i == '6':
                res = map(lambda x  : x + 'm' , res) + map(lambda x  : x + 'n' , res) + map(lambda x  : x + 'o' , res)
            elif i == '7':
                res = map(lambda x  : x + 'p' , res) + map(lambda x  : x + 'q' , res) + map(lambda x  : x + 'r' , res) + map(lambda x  : x + 's' , res)
            elif i == '8':
                res = map(lambda x  : x + 't' , res) + map(lambda x  : x + 'u' , res) + map(lambda x  : x + 'v' , res)
            elif i == '9':
                res = map(lambda x  : x + 'w' , res) + map(lambda x  : x + 'x' , res) + map(lambda x  : x + 'y' , res) + map(lambda x  : x + 'z' , res)
            
        return res