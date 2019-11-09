n = int(input("enter the value :-"))

i = 2
flag = 0
while(i < n):
    if(n%i==0):
        flag = 1
        break
    i = i+1
    
if(flag == 1):
    print("this is not a prime no.") 
else:
    print("this is prime no.")           

