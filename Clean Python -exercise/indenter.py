class Indenter:
    def __init__(self,num):
        self.num = num

    def __enter__(self):
        self.num += 1
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.num -= 1

    def print(self,text):
        print("{}{}".format("\t" * self.num, text))

with Indenter(3) as indent:
    for i in range(0,100):
        print(i)
