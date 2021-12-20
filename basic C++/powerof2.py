n=int(input("enter a  number"))
a=False
for i in range(1,31):
    ans=2**i
    if ans==n:
        a=True
        break
if a==False:
   print("false")
else:
    print("true")