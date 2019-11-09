n = int(input("enter the values :-"))
flag = 1
for i in range(1,n):
    if(n%2 == 0):
        flag = 0
        break
    else:
        flag = 1
if(flag ==1 ):
    print("This is a odd number")
else:
    print(" this is even number")

  