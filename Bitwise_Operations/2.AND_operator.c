/*
    Takes two bits at a time and performs AND operation
    AND("&") is a binary operator. It takes two numbers and performs bitwise AND.
    Result of AND is 1 when both bits are 1
*/
/*
example:

   No.|  Op.| No. in bits
    7 -->    0 | 1 | 1 | 1
    4 --> &  0 | 1 | 0 | 0
    ----------------------
    4 <--    0 | 1 | 0 | 0 //RESULT OF AND OPERATOR (1 & 1 = 1)

    7 & 4 = 4

TABLE:
    _________________________
    |       |       |       |
    |   A   |   B   |  A&B  |
    |_______|_______|_______|
    |       |       |       |
    |   0   |   0   |   0   |
    |_______|_______|_______|
    |       |       |       |
    |   0   |   1   |   0   |
    |_______|_______|_______|
    |       |       |       |
    |   1   |   0   |   0   |
    |_______|_______|_______|
    |       |       |       |
    |   1   |   1   |   1   |
    |_______|_______|_______|

*/