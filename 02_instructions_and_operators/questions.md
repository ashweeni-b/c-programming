### Practice Questions

1. Which of the following is invalid in C
    1. ```int a = 1; int b = a;```
    1. ```int v = 3 * 3;```
    1. ```char dt = '21 dec 2020'```

    Solution:
    1. Valid
    1. Valid
    1. Invalid

1. What data type will 3.0/8-2 return?

    Solution: [Data type checking](./data_type_checking.c) <br />
    
    Since the size of the output is 4, the data tyep of the output is float.

1. Write a program to check whether a number is divisble by 97 or not.

    Solution: [Checking divisibility by 97](./divisible_by_97.c) <br />

    If output is 0, then the number is divisible by 97 and if the output is other than 0, then the number is not divisible by 97

1. Explain step by step evaluation of 3 * x / y - z + k, where x = 2, y = 3, z = 3, k = 1

    Solution: <br />

    $$
    \begin{aligned}
    &3 * x / y - z + k \\
    &= (3 * 2) / 3 - 3 + 1 \\
    &= (6 / 3) - 3 + 1 \\
    &= (2 - 3) + 1 \\
    &= -1 + 1 \\
    &= 0
    \end{aligned}
    $$

1. 3.0 + 1 will be:
    1. Integer
    1. Floating point number
    1. Character

    Solution: Floating point number

1. Consider the following variables and answer the questions:
    ```c
    int i = 30;
    int j = 20;
    int k = 30;
    int l = 15;
    int m = 15;
    ```

    Answer the following: <br />
    ```i > k```, ```j < k```, ```k > l```, ```l != m```,
    ```i == k```, ```j < l```, ```i != j```, ```j == k```

    Solution:
    1. ```i > k``` - False
    1. ```j < k``` - True
    1. ```k > l``` - True
    1. ```l != m``` - False
    1. ```i == k``` - True
    1. ```j < l``` - False
    1. ```i != j``` - True
    1. ```j == k``` - False
    
---