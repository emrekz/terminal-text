/**
 * Author:    Emre KOZALTI
 * Github:    github.com/emrekz
**/

#include <stdint.h>

#define CHARACTER_LIMIT 20
#define PATTERN_CHAR '|'
#define zero 0x00
#define hor7b 0xFE
#define hor8b 0xFF
#define hor2bL 0xC0
#define hor2bR 0x03
#define sym2b 0xC3
#define cen4b 0x3C
#define cen2b 0x18
#define hor2bL2bR 0xCC
#define hor4bL 0xF0
#define hor4bR 0x0F
#define sym3b 0xE7
#define sym2b2b2b 0xDB
#define hor2bL4bR 0xCF
#define hor4bL2bR 0xF3
#define hor2bL3bR 0xCE
#define hor6bL 0x3F
#define hor7bL 0x7F
#define hor3bL2bR 0x3B
#define q0 0xC6
#define q1 0x3B
#define sym2b2b 0x66
#define z0 0x06
#define z1 0x60

uint16_t charArr[38][8] = {
  {hor8b,sym2b,sym2b,hor8b,sym2b,sym2b,sym2b,sym2b},            //  A    
  {hor7b,sym2b,sym2b,hor7b,sym2b,sym2b,sym2b,hor7b},            //  B
  {hor8b,hor2bL,hor2bL,hor2bL,hor2bL,hor2bL,hor2bL,hor8b},      //  C
  {hor7b,sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,hor7b},            //  D 
  {hor8b,hor2bL,hor2bL,hor7b,hor2bL,hor2bL,hor2bL,hor8b},       //  E
  {hor8b,hor2bL,hor2bL,hor7b,hor2bL,hor2bL,hor2bL,hor2bL},      //  F
  {cen4b,sym2b,hor2bL,hor8b,sym2b,sym2b,sym2b,cen4b},           //  G
  {sym2b,sym2b,sym2b,hor8b,sym2b,sym2b,sym2b,sym2b},            //  H
  {cen2b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b},            //  I
  {hor2bR,hor2bR,hor2bR,hor2bR,hor2bR,hor2bR,sym2b,cen4b},      //  J
  {sym2b,sym2b,hor2bL2bR,hor4bL,hor2bL2bR,sym2b,sym2b,sym2b},   //  K
  {hor2bL,hor2bL,hor2bL,hor2bL,hor2bL,hor2bL,hor2bL,hor8b},     //  L
  {sym2b,sym3b,sym3b,sym2b2b2b,sym2b,sym2b,sym2b,sym2b},        //  M
  {sym2b,sym2b,hor4bL2bR,sym2b2b2b,hor2bL4bR,sym2b,sym2b,sym2b},//  N
  {cen4b,sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,cen4b},            //  O       
  {hor8b,sym2b,sym2b,hor8b,hor2bL,hor2bL,hor2bL,hor2bL},        //  P 
  {cen4b,sym2b,sym2b,sym2b,sym2b,sym2b,q0,q1},                  //  Q
  {hor8b,sym2b,sym2b,hor7b,hor2bL2bR,sym2b,sym2b,sym2b},        //  R
  {hor7bL,hor2bL,hor2bL,hor8b,hor2bR,hor2bR,hor2bR,hor7b},      //  S
  {hor8b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b},            //  T
  {sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,cen4b},            //  U
  {sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,sym2b2b,cen2b},          //  V
  {sym2b,sym2b,sym2b,sym2b,sym2b2b2b,sym3b,sym3b,sym2b},        //  W
  {sym2b,sym2b,sym2b2b,cen2b,sym2b2b,sym2b,sym2b,sym2b},        //  X
  {sym2b,sym2b,sym2b2b,cen2b,cen2b,cen2b,cen2b,cen2b},          //  Y
  {hor8b,hor2bR,z0,cen2b,z1,hor2bL,hor2bL,hor8b},               //  Z 
  {zero,zero,zero,zero,zero,zero,zero,zero},
  {hor8b,sym2b,sym2b,sym2b,sym2b,sym2b,sym2b,hor8b},            //  0
  {cen2b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b,cen2b},            //  1
  {hor8b,hor2bR,hor2bR,hor8b,hor2bL,hor2bL,hor2bL,hor8b},       //  2
  {hor8b,hor2bR,hor2bR,hor8b,hor2bR,hor2bR,hor2bR,hor8b},       //  3
  {sym2b,sym2b,sym2b,hor8b,hor2bR,hor2bR,hor2bR,hor2bR},        //  4
  {hor8b,hor2bL,hor2bL,hor8b,hor2bR,hor2bR,hor2bR,hor8b},       //  5
  {hor8b,hor2bL,hor2bL,hor8b,sym2b,sym2b,sym2b,hor8b},          //  6
  {hor8b,hor2bR,hor2bR,hor2bR,hor2bR,hor2bR,hor2bR,hor2bR},     //  7
  {hor8b,sym2b,sym2b,hor8b,sym2b,sym2b,sym2b,hor8b},            //  8
  {hor8b,sym2b,sym2b,hor8b,hor2bR,hor2bR,hor2bR,hor8b},         //  9

};