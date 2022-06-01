# how slow are python loops?
cock
import timeit as it
import numpy as np

# here everything is done in python
def while_loop(n=100_000_000):
    i=0
    s=0
    while i<n:
        s+=i
        i+=1
    return s

# here C code manages the itarations checking bounds and so on
def for_loop(n=9100_000_000):
    s=0
    for i in range(n):
        s+=i
    return s

# built ins are better
def sum_range(n=100_000_000):
    return sum(range(n))

# written in C
def sum_numpy(n=100_000_000):
    return np.sum(np.arange(n))

# we use math knowledge
def sum_math(n=100_000_000):
    return (n*(n-1)) // 2


def main():
    print('While loop\t', it.timeit(while_loop, number=1))
    print('For loop\t', it.timeit(for_loop, number=1))
    print('Sum range\t', it.timeit(sum_range, number=1))
    print('Numpy\t\t', it.timeit(sum_numpy, number=1))
    print('Math\t\t', it.timeit(sum_math, number=1))

if __name__ == "__main__":
    main()
