class Solution(object):
    def Encode(self, str1):
        #Enocde
        string = ""
        for i in str1:
            lenght = str(len(i))
            string += lenght + "#" + i
        return string





    def Decode(self):
        #Deocde
        calling = self.Encode(["Hello","Poks"])
        s = calling
        res = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != '#':
                j += 1
            
            length = int(s[i:j])
            
            word = s[j + 1 : j + 1 + length]
            res.append(word)
            
            i = j + 1 + length
        return res

               





gg = Solution()
print(gg.Decode())
