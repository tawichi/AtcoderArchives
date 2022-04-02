A,B,C,D = map(int,input().split())

if (A==C) & (B==D):
    print("Takahashi")
elif A<C:
    print("Takahashi")
elif (A<C) & (B<D):
    print("Takahashi")
elif (A==0) &(B==0):
    print("Takahashi")
else:
    print("Aoki")