class Solution(object):
    def productExceptSelf(self, nums):
        emp = [1]*len(nums)
        print(emp)
        pf = 1
        prf=1
        for i in range(len(nums)):
            if i == 0 :
                emp[i] = pf
            else:
                pf = pf * nums[i-1]
                emp[i] = pf
        for j in range(len(nums)-1,-1,-1):
            if j == len(nums)-1:
                emp[j] *= prf
            else:
                prf = prf * nums[j+1]
                emp[j] = emp[j]*prf
             
        return emp

ff = Solution()
print(ff.productExceptSelf([1,2,3,4]))