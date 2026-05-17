### Practice Questions

1. Write a program to accept marks of five students in an array and print them on the screen.

    Solution: [Accessing Marks](./accessing_marks.c)

1. Write a program to demonstrate pointer arithmetic on variables.

    Solution: [Pointer Arithmetic](./pointer_arithmetic.c)

1. Write a program to access arrays using pointers

    Solution: [Arrays using Pointers](./array_using_pointers.c)

1. Create a 2D array by taking input from the user. Write a display function to print the content of this 2D array on the screen

    Solution: [2D Array](./two_dimensional_array.c)

1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr + 2) points to the third element where ptr is a pointer pointing to the first element of the array.

    Solution: [Array and Pointer Arithemtic](./array_pointer_arithmetic.c)

    Hence, it is verified that the third element of the array and pointer pointing to the element are same.

1. If S[3] is a 1-D array of integers then *(S + 3) refers to the third element:
    1. True
    1. False
    1. Depends

    Solution: False

    *(S + 3) points to the garbage value because it denotes the fourth element and not the third element because the maximum size of the array is 3.

    *S points to the first element, *(S + 1) denotes to the second element and *(S + 2) denotes to the third element, which is the last element of the array

1. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

    Solution: [Multiplication table of 5](./multiplication_table_of_5.c)
    
---