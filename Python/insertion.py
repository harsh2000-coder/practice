a = [2,71,69,82,26]
size = len(a)
for i in range(1,size):
    curr_data = a[i]
    curr_pos = i
    prev_pos = i - 1
    while(curr_data<a[prev_pos] and prev_pos>=0):
        a[curr_pos] = a[prev_pos]
        prev_pos -= 1
        curr_pos -= 1
    a[curr_pos] = curr_data
print(a)     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
