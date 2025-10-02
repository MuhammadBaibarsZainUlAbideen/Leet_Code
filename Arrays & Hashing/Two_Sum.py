class Solution(object):
    def twoSum(self, nums, target):
        earr = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i != j:
                    sum = nums[i] + nums[j]
                    if sum == target:
                        appending = earr.append(i) 
                        apeending2 = earr.append(j)
                        return earr
                else:
                    pass
                    

gg = Solution()
print(gg.twoSum([1,2,3],3))