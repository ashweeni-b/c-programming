### Practice Questions

1. Write a program with three functions
    1. Good morning function which prints "Good Morning"
    1. Good afternoon function which prints "Good Afternoon"
    1. Good night function which prints "Good Night"

    _main()_ should call all of these in order 1 - 2 - 3

    Solution: [Greeting display](./greeting_display.c)

1. Use the library function to calculate the area of a square with side a/

    Solution: [Area of square](./area_of_square.c)

1. Write a program to calculate factorial of a number.

    Solution: [Factorial of a number](./factorial_of_a_number.c)

1. Write a program using function to find average of three numbers

    Solution: [Average of three numbers](./average_of_three_numbers.c)

1. Write a function to convert Celsius temperature into Fahrenheit

    Solution: [Temperature Conversion](./celsius_to_fahrenheit.c)

1. Write a function to calculate force of attraction on a body of mass 'm' exerted by earth. Consider g = $ 9.8 m/s^2 $

    Solution: [Force of Attraction](./force_of_attraction.c)

1. Write a program using recursion to calculate $ n^{th} $ element of Fibonacci series

    Solution: [Fibonacci series](./nth_element_fibonacci_series.c)

1. What will the following line produce in C: <br />

    ``` c
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    ```

    Solution: <br />
    ``` c
    6 6 4
    ```

    Since, same variable is there within printf(), the evaluation order is from right to left. So,

    ``` c
    a++ = 4     // Post-increment
    ++a = 6     // Pre-increment
    a = 6
    ```

    the output becomes 6 6 4

