/*
Chapter 2 was mostly conceptual concepts.

1) give an example of three types of tokens:
identifiers (x, y, anyVarName), keywords (char, int), strings ("drr"), constants ('a', '\n'), operators (+, -)

2) Use BNF productions to define the integers 0,1,2,...,9999
zero_through_9::= 0|1|2|3|4|5|6|7|8|9
zero_through_inf::= {zero_through_9}1+

3) Use BNF productions to define a class of identifiers that has only letters at the begining and may have digits at the end.
lower_case::= a|b|c|...|z
upper_case::= A|B|C|...|Z
zero_through_9::= 0|1|2|3|4|5|6|7|8|9
task::={lower_case|upper_case}1+{zero_through_9}0+

4) which of the following are not identifiers and why:
3id             = false. digit at the front
__yes           = true
o_no_o_no       = true
00_go           = false. digit at the front
star*it         = false.use of *
1_i_am          = false. digit
one_i_arent't   = false. use of '
me_to-2         = false. use of -
xYshouldI       = true
int             = false. Keyword

5) list five keywords and explain their use
auto:       declars an "automatic sotrage duration" variable. Ie a "local variable" that is removed from memory when out of scope.
            Somewhat redundant and hardly used except in interesting specific scoping opportunities
continue:   End the current iteration of a loop and go to the next iteration without executing the remaining code
register:   Signals to the compiler that the current variable should be stored in the CPU Register, rather than in memory.
            Used when you have a variable that will be accessed a lot in upcoming code and you want to increase access speed.
            The compiler may ignore this. Can only store one type of a variable at a time (ie: only 1 int). Vars in the register
            also dont have memory addresses and cannot be accessed with the & operator. However, if you use a C++ compiler (like I do)
            it will allow you to access its address. Hardly used anymore.
typedef:    Allow you to alias a storage class specifier. Ie: `typedef unsigned char BYTE`
unsigned:   For an int, the Most Significant Bit denotes wether it is pos or neg. An int is `signed` by default. An `unsigned int` will
            loose the MSB designator allowing you to store twice as large a number, but you cannot store negative numbers

6) dumb

7) dumb

8) Answer: no.

9) dumb. Yes it will compile. It just looks ugly

10) dumb
*/