class MinStack(object):

    def __init__(self):
        self.pointer = 0
        self.stack = []
        self.getmin = []
        self.getminpointer = -1
        

    def push(self, val):
        self.pointer +=1
        if len(self.getmin)==0:
            self.getmin.append(val)
            self.getminpointer +=1
        elif val <= self.getmin[self.getminpointer]:
            self.getmin.append(val)
            self.getminpointer +=1

        
        return self.stack.append(val)

    def pop(self):
        if len(self.stack) == 0:
            return False
        else:
            self.pointer -=1
            bb = self.stack.pop()
            if self.getmin[self.getminpointer] ==bb:
                self.getmin.pop()
                self.getminpointer -=1
        
        
        return bb
        
        

    def top(self):
        if len(self.stack) ==0:
            return False
    
        self.pointer -=1
        val = self.stack[self.pointer]
        self.pointer +=1
        return val
        

    def getMin(self):
        return self.getmin[self.getminpointer]


#Your MinStack object will be instantiated and called as such:
obj = MinStack()
obj.push(1)
obj.push(2)
obj.push(10)
obj.push(13)
obj.pop()
obj.push(20)
param_3 = print(obj.top())
param_4 = print(obj.getMin())
print(obj.stack)