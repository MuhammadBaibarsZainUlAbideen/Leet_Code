class Solution(object):
    def Encode(self, str):
        gg = []
        for i in str:
            gf = i.encode('UTF-8')
            gg.append(gf)
        return gg



    def Decode(self,str):
        pass


gg = Solution()
print(gg.Encode(["Hello","Poks"]))
