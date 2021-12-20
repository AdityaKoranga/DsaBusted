n=int(input("enter a binary number"))
i=0
ans=0
while n!=0:
    digit=n%10
    if digit==1:
        ans=ans+(2**i)
    
    n=n//10
    i+=1
print("the answer is",ans)
