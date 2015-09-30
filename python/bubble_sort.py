print("Enter the number of values you want to sort: ")
list1 = []
n = int(input())
for index in range(n):
    print("Number " + str(index + 1) + ' : ', end='')
    list1.append(int(input()))

for base_counter in range(1, n):
    for counter in range(0, n - base_counter):
        if(list1[counter] > list1[counter + 1]):
            list1[counter], list1[counter + 1] = list1[counter + 1], list1[counter]

for index in range(n):
    print("Number " + str(index + 1) + ": " + str(list1[index]))
