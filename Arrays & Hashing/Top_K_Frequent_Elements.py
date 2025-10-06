class Solution(object):
    def topKFrequent(self, nums, k):
        hash = {}
        new_hash = {}
        emp_list = []
        emplist1 = []
        for i in nums:
            hash[i] = hash.get(i,0)+1
        keys = list(hash.keys())
        keys.sort()
        for ii in keys:
            new_hash[ii] = hash[ii]
        for jf in new_hash:
            emp_list.append(jf)
        for i in range(k):
            emplist1.append(emp_list[i])
        return emplist1






cc = Solution()
print(cc.topKFrequent([1,1,2,3,2],2))
    