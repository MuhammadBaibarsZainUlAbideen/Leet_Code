class Solution(object):
    def evalRPN(self, tokens):
        stack = []
        for token in tokens:
            if token not in {"+", "-", "*", "/"}:
                stack.append(int(token))
            else:
                b = stack.pop()  
                a = stack.pop()  

                if token == "+":
                    stack.append(a + b)
                elif token == "-":
                    stack.append(a - b)
                elif token == "*":
                    stack.append(a * b)
                else:
                    stack.append(int(float(a) / b))  
        return stack[0]
ff = Solution()
print(ff.evalRPN(["10","6","9","3","+","-11","*","/","*","17","+","5","-"]))
