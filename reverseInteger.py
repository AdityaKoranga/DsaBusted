x=int(input("enter a number"))
ans=0
maxval=2**5-10
minval=-(2**5)
while x!=0:
    digit=x%10
    if (ans>maxval/10) or (ans<minval/10):
        ans=0
        break
    ans= ans*10+digit
    x=x//10
print("the reversed integer",ans)