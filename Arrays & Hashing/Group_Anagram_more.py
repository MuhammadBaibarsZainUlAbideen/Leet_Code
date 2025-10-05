class Solution(object):
    def groupAnagrams(self, strs):
        import collections
        dictinoey = collections.defaultdict(list)
        for i in strs:
            ll = [0]*26
            for  j in i:
                cc = ord(j)-ord('a')
                ll[cc] +=1
            gg = tuple(ll)
            dictinoey[gg].append(i)
        return list(dictinoey.values())
    
ff = Solution()
print(ff.groupAnagrams(["abc","cba","cccc"]))