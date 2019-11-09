a = int(input("enter first value:- ")) 
b = int(input("enter last value:- "))  
i = a
sum1 = sum2 = 0
for i in range(a,b):
    if(i%2 == 0):
        i = i*i
        sum1 = sum1 + i
    else:
        i = i*i
        sum2 = sum2 + i    
        
print(sum1,sum2)
        