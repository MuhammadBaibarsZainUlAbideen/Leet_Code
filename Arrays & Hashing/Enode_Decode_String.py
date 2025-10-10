class Solution(object):
    def Encode(self, str1):
        string = ""
        for i in str1:
            lenght = str(len(i))
            string += lenght + "#" + i
        return string





    def Decode(self):
        calling = self.Encode(["Hello","Poks"])
        


gg = Solution()
print(gg.Encode(["Hello","Poks"]))
