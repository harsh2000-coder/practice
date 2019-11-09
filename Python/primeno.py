num = int(input("enter the no. :-"))

flag = 1
for i in range(2,num):
    if(num%i) == 0:
        flag = 0
        break
    else:
        flag = 1

if(flag ==1 ):
    print("This is a prime number")
else:
    print(" this is not a prime number")
























