/*
    Exclusive OR Operator = XOR
    Takes two bits at a time and performs XOR operation
    XOR ("^") is a binary operator. It takes two numbers and performs bitwise XOR.
    Result of XOR is 1 when two bits are different otherwise the result is 0
    Either A is 1 or B is 1 then the output is 1
    When both A and B are the same (1 or 0) then output is 0
*/
/*
example:

   No.|  Op.| No. in bits
    7 -->    0 | 1 | 1 | 1
    4 --> ^  0 | 1 | 0 | 0
    ----------------------
    3 <--    0 | 0 | 1 | 1 //RESULT OF XOR OPERATOR (0 ^ 0 = 0) (1 ^ 1 = 0)

    7 ^ 4 = 3

TABLE:
    _________________________
    |       |       |       |
    |   A   |   B   | A ^ B |
    |_______|_______|_______|
    |       |       |       |
    |   0   |   0   |   0   |
    |_______|_______|_______|
    |       |       |       |
    |   0   |   1   |   1   |
    |_______|_______|_______|
    |       |       |       |
    |   1   |   0   |   1   |
    |_______|_______|_______|
    |       |       |       |
    |   1   |   1   |   0   |
    |_______|_______|_______|

*/