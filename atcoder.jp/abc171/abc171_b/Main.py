N,K=list(map(int,input().split()))
P=list(map(int,input().split()))
P.sort()
price=0
for i in range(K):
	price+=P[i]
print(price)


         