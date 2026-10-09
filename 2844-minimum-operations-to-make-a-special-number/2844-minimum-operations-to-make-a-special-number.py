class Solution:
    def minimumOperations(self, num: str) -> int:
        n=len(num)
        seen_zero=False
        seen_five=False
        for i in range(n-1,-1,-1):
            char = num[i]
            if seen_zero and (char=='0' or char=='5'):
                return n-i-2
            if seen_five and (char=='2' or char=='7'):
                return n-i-2
            if char=='0':
                seen_zero=True
            elif char=='5':
                seen_five=True


        return n-1 if seen_zero else n

        