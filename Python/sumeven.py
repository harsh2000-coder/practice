a = int(input("enter first value:- ")) 
b = int(input("enter last value:- "))  
i = a
sum1=sum2=0
while(i<=b):
    if(i%2 == 0):
        sum1 = sum1 + i
    else:
        sum2 = sum2 + i
    i = i + 1
result = sum1 - sum2
print(result)             
