class Solution(object):
    def isAnagram(self, s,t):
        if len(s) != len(t):
            return False
        hash = {}
        for i in s:
            hash[i] = hash.get(i,0)+1
        print(hash)
        for j in t:
            hash[j] = hash.get(j,0)-1
        print(hash)
        for jj in s:
            if hash[jj] != 0:
                return False
        return True


            
call = Solution()
print(call.isAnagram("aacc","ccac"))