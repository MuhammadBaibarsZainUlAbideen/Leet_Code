class Solution(object):
    def containsDuplicate(self, nums):
        Coverting_To_Sets = set(nums)
        if len(nums) == len(Coverting_To_Sets):
            return False
        else:
            return True
calling = Solution()
print(calling.containsDuplicate([1,2,3,4,5,5]))