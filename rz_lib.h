typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned int    DWORD;

#define BYTE_LEN        0
#define WORD_LEN        1
#define DWORD_LEN       3

#define LEFT_SIDE       1 //1234 - 1.2.3.4
#define RIGHT_SIDE      0 //1234 - 4.3.2.1

#define LEN_ERR         101
#define SIDE_ERR        102

extern num_to_byte(DWORD num, BYTE len, BYTE* dst, BYTE side)
