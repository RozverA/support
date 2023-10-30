//#include "test.h"

BYTE num_to_byte(DWORD num, BYTE len, BYTE* dst, BYTE side) //
{
    if((len != W_LEN)    &&  (len != DW_LEN))         {return LEN_ERR;}
    if((side != L_SIDE)  &&  (side != R_SIDE))     {return SIDE_ERR;}

    for (BYTE i = 0; i < len;i++)
    {
        if(side)    {*dst = num >> (( 8 * (len - 1 ) ) - ( i * 8 ));}
        else        {*dst = num >> ( i * 8 );}
        dst++;
    }
    return SUCCES;
}

DWORD num_aus_byte(BYTE len, BYTE* src, BYTE side)
{
    DWORD num = 0;
    for (BYTE i = 0; i < len;i++)
    {
        if(side)    {num += *src << (((len - 1) * 8) - (i * 8));}
        else        {num += *src << ( i * 8 );}
        src++;
    }
    return num;
}