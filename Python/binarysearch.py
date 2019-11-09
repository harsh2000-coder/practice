def binary_search(A,search):
    first = 0
    last = len(A) - 1

    while(first<=last):
        mid = int((first+last)/2)
        if(A[mid]>search):
            last = mid - 1
        elif(A[mid]<search):
            first = mid + 1
        else:
            return mid
    return 0

A=[]
for i in range(5):
    A.append(int(input("enter values:-")))

search = int(input("The number to search for:"))
index = binary_search(A, search)
if index is 0:
    print("{} was not found.".format(search))
else:
    print("{} was found.".format(search))

