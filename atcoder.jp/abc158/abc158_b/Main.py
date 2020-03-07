n,a,b=map(int,input().split())
if n<=(a+b):
  ans=min(a,n)
if n>(a+b):
  s=n//(a+b)
  k=n%(a+b)
  ans=s*a+min(k,a)
print(ans)