import time

class Timer:
    def __init__(self):
        self.start = 0

    def __enter__(self):
        self.start = time.process_time()
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.end = time.process_time()
        print("---------\n\nstart: {}  -->  end: {}\n--------\ntotal: {}".format(self.start, self.end, self.end - self.start))

with Timer() as t:
    for i in range(0,10000):
        print(i)
