n=int(input("enter a number"))
i=0
ans=0
while n!=0:
    bit=n&1
    ans=(bit*(10**i))+ans
    n=n>>1
    i+=1
print("the answer is ",ans)