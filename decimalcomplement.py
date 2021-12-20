n=int(input("enter a number"))
mask=0
if n==0:
    ans=0
while n!=0:
    mask=(mask<<1)|1
    n=n>>1
ans=(~n)& mask
print("the compliment is",ans)
