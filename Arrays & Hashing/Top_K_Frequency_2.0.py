class Solution(object):
    def topKFrequent(self, nums, k):
        hash = {}
        for i in nums:
            hash[i] = hash.get(i,0)+1
        k = list(hash.keys())
        sort = k.sort(key=lambda x : hash[x],reverse=True)#takes one input x and returens the value of that input from the hash.
        return sort[:k]
