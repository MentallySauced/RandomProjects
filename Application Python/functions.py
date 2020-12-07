# Main array
a = [10, 12, 14, 15, 24, 18, 19]
# Print main array
print("Main array:", a)

# Imports
import math

# Reversing a list
def Reverse(a):
    
    # Useing inbuilt funciton for reversing
    return [ele for ele in reversed(a)]

# Test of function 1, Reverse
print("reverse:", Reverse(a))


# Index of maximum element
def MaxElem(a):
    
    # Using inbuilt function for index and maximum
    maxind = a.index(max(a))
    
    print("The maximum is at index", maxind)

# Test of function 2, MaxElem
MaxElem(a)


# Return new list with only odd elements
def OddElem(a):

    # Create new list for the odd values and sort out odd values with a remainder function
    b = [i for i in a if (i % 2 != 0)]
    
    # Print the new odd list
    print("Odd values are:", b)

# Test of function 3, OddElem
OddElem(a)


# Creating arrays for distance function
c = [1, 1]
d = [3, 3]

# Distace between 2 points
def Distance(a, b):

    # Equation got me like
    dist = math.sqrt((a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2)

    # Print distance
    print("The distance is:", dist)

# Test of function 4, Distance
Distance(c, d)


# Example file for this function
# File consists of the numbers 1-5 on seperate lines
file = "example.txt"

# Taking file name and returning a list with contents of the file
def FileList(a):

    # Reads file and puts it into a list
    b = open(a).read().splitlines()

    print(b)

# Test of function 5, FileList
FileList(file)


# File for this will be WriteTo.txt
# Writes a list to a file
def WriteTo(a, b):

    # Open the file and get ready to iterate
    with open(a, "w") as f:

        # Iterate through the list
        for item in b:

            # Write each item into the file on a new line
            f.write("%s\n" % item)

#Test of function 6, WriteTo
WriteTo("WriteTo.txt", a)