from contextlib import contextmanager
from time import process_time as process

@contextmanager
def timer():
    try:
        start = process()
        yield
    finally:
        end = process()
        print("---------\n\nstart: {}  -->  end: {}\n--------\ntotal: {}".format(start, end, end - start))

with timer() as t:
    for i in range(0,10000):
        print(i)
