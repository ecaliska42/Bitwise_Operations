/*
    Takes two bits at a time and performs OR operation
    OR("|") is a binary operator. It takes two numbers and performs bitwise OR.
    Result of OR is 0 when both bits are 0
*/
/*
example:

   No.|  Op.| No. in bits
    7 -->    0 | 1 | 1 | 1
    4 --> |  0 | 1 | 0 | 0
    ----------------------
    7 <--    0 | 1 | 1 | 1 //RESULT OF OR OPERATOR (0 & 0 = 0)

    7 | 4 = 7

TABLE:
    _________________________
    |       |       |       |
    |   A   |   B   |  A|B  |
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
    |   1   |   1   |   1   |
    |_______|_______|_______|

*/