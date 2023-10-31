#ifndef RZ_LIB_H_
#define RZ_LIB_H_

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned int    DWORD;

#define BYTE_LEN        1
#define W_LEN           2
#define DW_LEN          4

#define L_SIDE          1 //1234 - 1.2.3.4
#define R_SIDE          0 //1234 - 4.3.2.1

#define LEN_ERR         101
#define SIDE_ERR        102

#define SUCCES          0

extern BYTE num_to_byte(DWORD num, BYTE len, BYTE* dst, BYTE side);
extern DWORD num_aus_byte(BYTE len, BYTE* src, BYTE side);

/*exaple deffunx
#define ssh_len_w(num, dst)		(num_to_byte(num, DW_LEN, dst, L_SIDE))
#define ssh_len_r(src)			(num_aus_byte(DW_LEN, src,L_SIDE))
*/

#endif //RZ_LIB_H