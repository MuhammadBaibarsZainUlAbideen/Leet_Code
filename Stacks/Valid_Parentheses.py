class Solution(object):
    def isValid(self, s):
        pointer = 0 
        stack = []
        for i in s:
            if i == "{" or i == "[" or i == "(":
                stack.append(i)
                pointer +=1
            elif i == "}" or i =="]" or i == ")":
                if len(stack) == 0:
                    return False
                g = stack.pop()
                pointer -=1
                f = g+i
                if f == "()" or f=="[]":
                    pass
                else:
                    return False
        if len(stack) == 1:
            return False
        else:
            return True
ff = Solution()
print(ff.isValid("("))
