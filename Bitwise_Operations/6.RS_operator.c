/*
    First operand >> Second operand
    
    (Whose bits get  (Number of places
     shifted)         to shift the
                      bits)
*/
/*
    Important Points:
    1. When bits are shifted right then leading positions are filled with zeros.
    2. Right shifting is equivalent to division by 2^rightOperand
*/
/*
    Examples:
    
    1.
    char var = 3 (0000 0011) // declare and initialize a char var with 3 (bit representation)
    var >> 1 // shift bits in var to right by one
    _000 0001 // shifted bits to right by one
    0000 0001 // Leading position is filled with zero.
    1 (0000 0001) // Final output (bit representation)

    2.
    var = 3
    var >> 1
    Output: 1 [3 / 2^1] // 3 / 2 = 1.5 = 1
    var = 32
    var >> 4
    Output: 2 [3 / 2^4] // 32 / 16 = 2
*/

#include <stdio.h>
int main(void)
{
    char var = 3;
    printf("%d", var>>1);
    return 0;
}