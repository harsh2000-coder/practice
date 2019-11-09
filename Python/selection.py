# A =[3,5,7,1,2,6,4]
A=[]
for i in range(5):
    A.append(int(input("Enter value ")))

size = len(A)

for i in range(0,size):
    small = A[i]
    pos = i
    for j in range(i,size):
        if(A[j]<small):
            small = A[j]
            pos = j
    temp = A[pos]
    A[pos] = A[i]
    A[i] = temp
print(A)        


        
