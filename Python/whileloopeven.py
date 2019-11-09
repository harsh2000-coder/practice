a = int(input("enter first value:- ")) 
b = int(input("enter last value:- "))  
i = a
sum1 = sum2 = 0
x = 0
y = 0
while(i<=b):
    if(i%2 == 0):
        x = i*i
        sum1 = sum1 + x
    else:
        y = i*i
        sum2 = sum2 + y
    i = i + 1
print(sum1)
print(sum2)        