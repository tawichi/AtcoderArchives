l1=list(map(int,input().split()))
l2=list(map(int,input().split()))
l3=list(map(int,input().split()))
n=int(input())
a=[int(input()) for i in range (n)]
if l1[0] in a:
  l1[0]=0
if l1[1] in a:
  l1[1]=0   
if l1[2] in a:
  l1[2]=0 
if l2[0] in a:
  l2[0]=0 				
if l2[1] in a:
  l2[1]=0 
if l2[2] in a:
  l2[2]=0 
if l3[0] in a:
  l3[0]=0 
if l3[1] in a:
  l3[1]=0
if l3[2] in a:
  l3[2]=0 
ans="No"
if l1==[0,0,0]:
  ans="Yes"
if l2==[0,0,0]:
  ans="Yes"
if l3==[0,0,0]:
  ans="Yes"
if l1[0]==l2[0]==l3[0]==0:
  ans="Yes"
if l1[1]==l2[1]==l3[1]==0:
  ans="Yes"
if l1[2]==l2[2]==l3[2]==0:
  ans="Yes"
if l1[0]==l2[1]==l3[2]==0:
  ans="Yes"
if l1[2]==l2[1]==l3[0]==0:
   ans="Yes"
print(ans)
