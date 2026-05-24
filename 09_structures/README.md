### Practice Questions

1. Write a program to store the details of 3 employees from user defined data.

    Solution: [Employee Data](./employee_data.c)

1. Write a program demonstrating the array of structures.

    Solution: [Array of Structures](./array_of_structures.c)

1. Write a program demonstrating the pointers to structures.

    Solution: [Pointers to Structures](./pointers_to_structures.c)

1. Write a program demonstrating passing structure to a function.

    Solution: [Passing Structure to Function](./structure_to_function.c)

1. Create a two-dimensional vector using structures in C.

    Solution: [Vectors in C](./vectors.c)

1. Write a function `sumVector` which returns the sum of two vectors passed to it. The vectors must be two-dimensional.

    Solution: [Sum of Vectors](./vectors_sum.c)

1. Twenty integers are to be stored in memory. What will you prefer - Array or structure?

    Solution: <br />
    Strucutres are preferred over Arrays because structures make data management easier for programmers. If the integers are declared using arrays then the accessing of the integers becomes tedious, so to avoid that structures are used.

1. Write a program with a structure representing a complex number.

    Solution: [Complex Number](./complex_number.c)

1. Create an array of 5 complex numbers and display them with the help of a display function. The values must be taken as an input from the user.

    Solution: [Array of Complex Numbers](./array_of_complex_numbers.c)

1. Write a program with a structure representing a complex number using `typedef`.

    Solution: [Complex Number using typedef](./complex_number_typedef.c)

1. Create a structure representing a bank account of a customer. What fields did you use and why?

    Solution: <br />
    For a structure of a bank account, the necessary fields are account holder's name, account number, account balance, account holder's phone number, account holder's email id, ifsc code of the bank and branch name. <br />

    ```c
    struct bank_account {
        char name[20];
        long int account_number;
        int account_balance;
        long int phone_number;
        char email_id[30];
        char ifsc_code[15];
        char branch[20];
    };
    ```
1. Write a structure capable of storing date. Write a function to compare those dates.

    Solution: [Storage and comparison of dates](./dates_comparison.c)