#include "rz_lib.h"

BYTE num_to_byte(DWORD num, BYTE len, BYTE* dst, BYTE side) //
{
    if((len != WORD_LEN)    &&  (len != DWORD_LEN))         {return LEN_ERR;}
    if((side != LEFT_SIDE)  &&  (side != RIGHT_SIDE))     {return SIDE_ERR;}

    for (BYTE i = 0; i <= len;i++)
    {
        if(side)    {*dst = num >> (8 * ( len ) - ( i * 8 ));}
        else        {*dst = num >> ( i * 8 );}
    }
    return SUCCES;
}

/*
DWORD len_write(DWORD* ptr_cnt, DWORD len)
{
	for (BYTE i = 0; i < 4; i++)	{ssh.messege[*ptr_cnt] = len >> (24 - (i * 8)); *ptr_cnt += 1;}
	return (*ptr_cnt);
}
*/