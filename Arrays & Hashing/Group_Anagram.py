class Solution(object):
    def groupAnagrams(self, strs):
        from collections import defaultdict

        groups = defaultdict(list)

        for word in strs:
            count = [0] * 26
            for ch in word:
                count[ord(ch) - ord('a')] += 1
            
            key = tuple(count)
            groups[key].append(word)
        
        return list(groups.values())
ff = Solution()
print(ff.groupAnagrams(["abc","cba"]))