N = int(input())
if N %1000 == 0:
  print(0)
else:
  mai=(N//1000)+1
  oturi= mai*1000 - N

  print(oturi)