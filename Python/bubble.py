a =[15,7,12,3,9]
size = len(a)
temp = 0
for i in range(0,size):
    for j in range(0,size-i-1):
        if(a[j]>a[j+1]):
             temp = a[j]
             a[j] = a[j+1]
             a[j+1] = temp
print(a)