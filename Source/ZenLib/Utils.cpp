// ZenLib::Utils - Very small utilities
// Copyright (C) 2002-2008 Jerome Martinez, Zen@MediaArea.net
//
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#include "ZenLib/Conf_Internal.h"
#ifdef __BORLANDC__
    #pragma hdrstop
#endif
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#include "ZenLib/Utils.h"
//---------------------------------------------------------------------------

namespace ZenLib
{

//***************************************************************************
// Transformations
//***************************************************************************

//---------------------------------------------------------------------------
// Little Endian - 8 bits
int8s  LittleEndian2int8s  (const char* Liste)
{
    return             (int8s)Liste[0];
}

int8u  LittleEndian2int8u  (const char* Liste)
{
    return             (int8u)Liste[0];
}

//---------------------------------------------------------------------------
// Little Endian - 16 bits
int16s LittleEndian2int16s (const char* Liste)
{
    int16s Retour=     (int8s)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int16u LittleEndian2int16u (const char* Liste)
{
    int16u Retour=     (int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 24 bits
int32s LittleEndian2int24s (const char* Liste)
{
    int32s Retour=     (int8s)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int32u LittleEndian2int24u (const char* Liste)
{
    int32u Retour=     (int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 32 bits
int32s LittleEndian2int32s (const char* Liste)
{
    int32s Retour=     (int8s)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int32u LittleEndian2int32u (const char* Liste)
{
    int32u Retour=     (int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 40 bits
int64s LittleEndian2int40s (const char* Liste)
{
    int64s Retour=     (int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int64u LittleEndian2int40u (const char* Liste)
{
    int64u Retour=     (int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 48 bits
int64s LittleEndian2int48s (const char* Liste)
{
    int64s Retour=     (int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int64u LittleEndian2int48u (const char* Liste)
{
    int64u Retour=     (int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 56 bits
int64s LittleEndian2int56s (const char* Liste)
{
    int64s Retour=     (int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int64u LittleEndian2int56u (const char* Liste)
{
    int64u Retour=     (int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 64 bits
int64s LittleEndian2int64s (const char* Liste)
{
    int64s Retour=     (int8s)Liste[7];
    Retour=(Retour<<8)|(int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

int64u LittleEndian2int64u (const char* Liste)
{
    int64u Retour=     (int8u)Liste[7];
    Retour=(Retour<<8)|(int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[0];
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - 128 bits
int128u LittleEndian2int128u(const char* Liste)
{
    int128u Retour;
    Retour.lo=LittleEndian2int64u(Liste);
    Retour.hi=LittleEndian2int64u(Liste+8);
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - float 32 bits
float32 LittleEndian2float32(const char* Liste)
{
    int32u RetourI=LittleEndian2int32u(Liste);
    float32 Retour=*((float32*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - float 64 bits
float64 LittleEndian2float64(const char* Liste)
{
    int64u RetourI=LittleEndian2int64u(Liste);
    float64 Retour=*((float64*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// Little Endian - float 80 bits
float80 LittleEndian2float80(const char* Liste)
{
    int128u RetourI;
    RetourI  =LittleEndian2int64u(Liste);
    RetourI<<=16;
    RetourI |=LittleEndian2int16u(Liste+8);
    float80 Retour=*((float80*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 8 bits
int8s  BigEndian2int8s     (const char* Liste)
{
    return             (int8s)Liste[0];
}

int8u  BigEndian2int8u     (const char* Liste)
{
    return             (int8u)Liste[0];
}

//---------------------------------------------------------------------------
// Big Endian - 16 bits
int16s BigEndian2int16s    (const char* Liste)
{
    int16s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    return Retour;
}

int16u BigEndian2int16u    (const char* Liste)
{
    int16u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 24 bits
int32s BigEndian2int24s    (const char* Liste)
{
    int32s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    return Retour;
}

int32u BigEndian2int24u    (const char* Liste)
{
    int32u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 32 bits
int32s BigEndian2int32s    (const char* Liste)
{
    int32s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    return Retour;
}

int32u BigEndian2int32u    (const char* Liste)
{
    int32u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 40 bits
int64s  BigEndian2int40s    (const char* Liste)
{
    int64s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    return Retour;
}

int64u BigEndian2int40u    (const char* Liste)
{
    int64u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 48 bits
int64s  BigEndian2int48s    (const char* Liste)
{
    int64s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    return Retour;
}

int64u BigEndian2int48u    (const char* Liste)
{
    int64u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 56 bits
int64s  BigEndian2int56s    (const char* Liste)
{
    int64s Retour=     (int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[6];
    return Retour;
}

int64u BigEndian2int56u    (const char* Liste)
{
    int64u Retour=     (int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[6];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 64 bits
int64s  BigEndian2int64s    (const char* Liste)
{
    int64s Retour=(int8s)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[7];
    return Retour;
}

int64u BigEndian2int64u    (const char* Liste)
{
    int64u Retour=(int8u)Liste[0];
    Retour=(Retour<<8)|(int8u)Liste[1];
    Retour=(Retour<<8)|(int8u)Liste[2];
    Retour=(Retour<<8)|(int8u)Liste[3];
    Retour=(Retour<<8)|(int8u)Liste[4];
    Retour=(Retour<<8)|(int8u)Liste[5];
    Retour=(Retour<<8)|(int8u)Liste[6];
    Retour=(Retour<<8)|(int8u)Liste[7];
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - 128 bits
int128u BigEndian2int128u(const char* Liste)
{
    int128u Retour;
    Retour.hi=BigEndian2int64u(Liste);
    Retour.lo=BigEndian2int64u(Liste+8);
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - float 32 bits
float32 BigEndian2float32(const char* Liste)
{
    int32u RetourI=BigEndian2int32u(Liste);
    float32 Retour=*((float32*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - float 64 bits
float64 BigEndian2float64(const char* Liste)
{
    int64u RetourI=BigEndian2int64u(Liste);
    float64 Retour=*((float64*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// Big Endian - float 80 bits
float80 BigEndian2float80(const char* Liste)
{
    int128u RetourI;
    RetourI  =BigEndian2int64u(Liste);
    RetourI<<=16;
    RetourI |=BigEndian2int16u(Liste+8);
    float80 Retour=*((float80*)(&RetourI));
    return Retour;
}

//---------------------------------------------------------------------------
// int32 - int64
int64s int32s_int64s (                int32s  High, int32u  Low)
{
    return ((((int64s)High)<<32) | Low);
}

int64u int32u_int64u (                int32u  High, int32u  Low)
{
    return ((((int64s)High)<<32) | Low);
}

void   int32s_int64s (int64s &BigInt, int32s  High, int32u  Low)
{
    BigInt= ((((int64s)High)<<32) | Low);
}
void   int32u_int64u (int64s &BigInt, int32u  High, int32u  Low)
{
    BigInt= ((((int64s)High)<<32) | Low);
}

void   int64s_int32s (int64s  BigInt, int32s &High, int32u &Low)
{
    High = (int32s) ((BigInt & 0xFFFFFFFF00000000LL)>>32);
    Low  = (int32u) ( BigInt & 0x00000000FFFFFFFF);
}

void   int64u_int32u (int64u  BigInt, int32u &High, int32u &Low)
{
    High = (int32u) ((BigInt & 0xFFFFFFFF00000000LL)>>32);
    Low  = (int32u) ( BigInt & 0x00000000FFFFFFFF);
}

//---------------------------------------------------------------------------
// Floats and ints
int32s float32_int32s (float32 F, bool Rounded)
{
    //Not rounded
    if (!Rounded)
        return (int32s)F;
    //Rounded
    int I1=(int)F;
    if (F-I1>=0.5)
        return I1+1;
    else
        return I1;
}

int64s float32_int64s (float32 F, bool Rounded)
{
    //Not rounded
    if (!Rounded)
        return (int64s)F;
    //Rounded
    int I1=(int)F;
    if (F-I1>=0.5)
        return I1+1;
    else
        return I1;
}

int32s float64_int32s (float64 F, bool Rounded)
{
    //Not rounded
    if (!Rounded)
        return (int32s)F;
    //Rounded
    int I1=(int)F;
    if (F-I1>=0.5)
        return I1+1;
    else
        return I1;
}

int64s float64_int64s (float64 F, bool Rounded)
{
    //Not rounded
    if (!Rounded)
        return (int64s)F;
    //Rounded
    int I1=(int)F;
    if (F-I1>=0.5)
        return I1+1;
    else
        return I1;
}

} //namespace ZenLib


