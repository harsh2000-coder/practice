l = [2,4,5,6,4,6,7,8,9,2] 
sum = 0
avg = 0
length = 0
for i in range(0,len(l),3):
        sum = sum+l[i]
        length = length+1
avg = sum/length
print(avg)        
