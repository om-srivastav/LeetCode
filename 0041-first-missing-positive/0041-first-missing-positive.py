class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        i=1
        nums=set(nums)
        while True:
            if i not in nums:
                return i
            i=i+1
        


            
        