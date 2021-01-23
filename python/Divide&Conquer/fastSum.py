# n까지 자연수의 합

def fastSum(n):
	if n == 1:
		return 1
	if n % 2 == 1:
		return fastSum(n-1) + n
	else:
		return 2 * fastSum(n//2) + (n//2) * (n//2)

