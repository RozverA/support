#include "rz_lib.h"

BYTE num_to_byte(DWORD num, BYTE len, BYTE* dst, BYTE side) //
{
    if((len != WORD_LEN)    &&  (len != DWORD_LEN))         {return LEN_ERR;}
    if((side != LEFT_SIDE)  &&  (side != RIGHT_SIDE))     {return SIDE_ERR;}

    for (BYTE i = 0; i < len;i++)
    {
        if(side)    {*dst = num >> (( 8 * (len - 1 ) ) - ( i * 8 ));}
        else        {*dst = num >> ( i * 8 );}
        dst++;
    }
    return SUCCES;
}