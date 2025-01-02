class Solution(object):
    def numTrees(self, n):
        memo={}

        def factorial(num):
            if num <= 1:
                return 1
            if num in memo:
                return memo[num]
            res=num*factorial(num - 1)
            memo[num]=res
            return res
            
        catalan_number = factorial(2*n) // (factorial(n+1) * factorial(n))
        return catalan_number