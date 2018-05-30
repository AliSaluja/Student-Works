import math

def binSearch(array,value):
    highIndex = len(array) - 1
    lowIndex = 0
    while lowIndex <= highIndex:
        middleIndex = math.floor((lowIndex + highIndex) / 2)
        middleEl = array[middleIndex]
        if middleEl == value:
            return middleIndex
        if middleEl > value:
            highIndex = middleIndex - 1
        else:
            lowIndex = middleIndex + 1
    return "Element not found"

array = sorted(range(0,100))
print(binSearch(array, 50))
