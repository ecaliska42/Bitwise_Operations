/*
    First operand << Second operand
    
    (Whose bits get  (Number of places
     shifted)         to shift the
                      bits)
*/
/*
    Important Points:
    1. When bits are shifted left then trailing positions are filled with zeros.
    2. Left shifting is equivalent to multiplication by 2^rightOperand
*/
/*
    Examples:
    
    1.
    char var = 3 (0000 0011) // declare and initialize a char var with 3 (bit representation)
    var << 1 // shift bits in var to left by one
    new bits = (0000 0110) // shifted each bit by one to the left and trailing position was filled with 0
    var = 6 // new var is is 6 (0000 0110)

    2.
    var = 3
    var << 1
    Output: 6 [3 x 2^1]
    var << 4
    Output: 48 [3 x 2^4]
*/

#include <stdio.h>
int main(void)
{
    char var = 3;
    printf("%d", var<<4);
    return 0;
}