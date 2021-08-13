class Seperate:
    def __init__(self,myArray=[]):
        self.myArray=myArray
    def even(self):
        contain=[]
        for i in range(len(self.myArray)):
            if self.myArray[i]%2==0:
                contain.append(self.myArray[i])
        return contain
    def odd(self):
        container=[]
        for i in range(len(self.myArray)):
            if self.myArray[i]%2!=0:
                container.append(self.myArray[i])
        return container