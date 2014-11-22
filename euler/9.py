import time

def tripe(n):
	for i in range(1, n, 1):
		for j in range(1, n - i, 1):
			k = n - i - j
			if i ** 2 + j ** 2 == k ** 2:
				return i * j * k
	return 0

start = time.time()
pro = tripe(1000)
elapse = (time.time() - start)
print "found %s in %s seconds" % (pro, elapse)