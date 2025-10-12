class Solution(object):
    def productExceptSelf(self, nums):
        for i in range(len(nums)):
            l = []
            mul = 1
            if i != 0:
                #left_side = nums[:i]
                l.append(nums[:i])
            if i != len(nums)-1:
                #righ_side = nums[i+1:len(nums)] 
                l.append(nums[i+1:len(nums)] )
                for j in l:
                    mul = mul * j
                return mul
            
ff = Solution()
print(ff.productExceptSelf([1,2,4,3]))