# -*- coding: utf-8 -*-

def get_array( ) :
    switch = True
    array = []
    while switch:
        array_element = input("Please enter element of array :  ")
        array.append(array_element) if array_element != "" else 0
        switch = False if array_element == "" else True
    return array

def bubble_sort( array ) :
    result = True
    while result:
        result = False
        size_array = len(array) - 1
        index = 0
        while index < size_array:
            if array[index] > array[index + 1]:
                array[index],array[index + 1] = array[index + 1],array[index]
                result = True
            index += 1
    return array

array = get_array()
print(bubble_sort(array))
