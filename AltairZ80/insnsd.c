/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static struct itemplate instrux[] = {
    /*   0*/ {I_AAA, 0, {0,0,0}, "\1\x37", IF_8086},
    /*   1*/ {I_AAD, 0, {0,0,0}, "\2\xD5\x0A", IF_8086},
    /*   2*/ {I_AAD, 1, {IMMEDIATE,0,0}, "\1\xD5\24", IF_8086|IF_SB},
    /*   3*/ {I_AAM, 0, {0,0,0}, "\2\xD4\x0A", IF_8086},
    /*   4*/ {I_AAM, 1, {IMMEDIATE,0,0}, "\1\xD4\24", IF_8086|IF_SB},
    /*   5*/ {I_AAS, 0, {0,0,0}, "\1\x3F", IF_8086},
    /*   6*/ {I_ADC, 2, {MEMORY,REG8,0}, "\300\1\x10\101", IF_8086|IF_SM},
    /*   7*/ {I_ADC, 2, {REG8,REG8,0}, "\1\x10\101", IF_8086},
    /*   8*/ {I_ADC, 2, {MEMORY,REG16,0}, "\320\300\1\x11\101", IF_8086|IF_SM},
    /*   9*/ {I_ADC, 2, {REG16,REG16,0}, "\320\1\x11\101", IF_8086},
    /*  10*/ {I_ADC, 2, {MEMORY,REG32,0}, "\321\300\1\x11\101", IF_386|IF_SM},
    /*  11*/ {I_ADC, 2, {REG32,REG32,0}, "\321\1\x11\101", IF_386},
    /*  12*/ {I_ADC, 2, {REG8,MEMORY,0}, "\301\1\x12\110", IF_8086|IF_SM},
    /*  13*/ {I_ADC, 2, {REG8,REG8,0}, "\1\x12\110", IF_8086},
    /*  14*/ {I_ADC, 2, {REG16,MEMORY,0}, "\320\301\1\x13\110", IF_8086|IF_SM},
    /*  15*/ {I_ADC, 2, {REG16,REG16,0}, "\320\1\x13\110", IF_8086},
    /*  16*/ {I_ADC, 2, {REG32,MEMORY,0}, "\321\301\1\x13\110", IF_386|IF_SM},
    /*  17*/ {I_ADC, 2, {REG32,REG32,0}, "\321\1\x13\110", IF_386},
    /*  18*/ {I_ADC, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\202\15", IF_8086},
    /*  19*/ {I_ADC, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\202\15", IF_386},
    /*  20*/ {I_ADC, 2, {REG_AL,IMMEDIATE,0}, "\1\x14\21", IF_8086|IF_SM},
    /*  21*/ {I_ADC, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x15\31", IF_8086|IF_SM},
    /*  22*/ {I_ADC, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x15\41", IF_386|IF_SM},
    /*  23*/ {I_ADC, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\202\21", IF_8086|IF_SM},
    /*  24*/ {I_ADC, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\202\131", IF_8086|IF_SM},
    /*  25*/ {I_ADC, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\202\141", IF_386|IF_SM},
    /*  26*/ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\202\21", IF_8086|IF_SM},
    /*  27*/ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\202\131", IF_8086|IF_SM},
    /*  28*/ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\202\141", IF_386|IF_SM},
    /*  29*/ {I_ADD, 2, {MEMORY,REG8,0}, "\300\17\101", IF_8086|IF_SM},
    /*  30*/ {I_ADD, 2, {REG8,REG8,0}, "\17\101", IF_8086},
    /*  31*/ {I_ADD, 2, {MEMORY,REG16,0}, "\320\300\1\x01\101", IF_8086|IF_SM},
    /*  32*/ {I_ADD, 2, {REG16,REG16,0}, "\320\1\x01\101", IF_8086},
    /*  33*/ {I_ADD, 2, {MEMORY,REG32,0}, "\321\300\1\x01\101", IF_386|IF_SM},
    /*  34*/ {I_ADD, 2, {REG32,REG32,0}, "\321\1\x01\101", IF_386},
    /*  35*/ {I_ADD, 2, {REG8,MEMORY,0}, "\301\1\x02\110", IF_8086|IF_SM},
    /*  36*/ {I_ADD, 2, {REG8,REG8,0}, "\1\x02\110", IF_8086},
    /*  37*/ {I_ADD, 2, {REG16,MEMORY,0}, "\320\301\1\x03\110", IF_8086|IF_SM},
    /*  38*/ {I_ADD, 2, {REG16,REG16,0}, "\320\1\x03\110", IF_8086},
    /*  39*/ {I_ADD, 2, {REG32,MEMORY,0}, "\321\301\1\x03\110", IF_386|IF_SM},
    /*  40*/ {I_ADD, 2, {REG32,REG32,0}, "\321\1\x03\110", IF_386},
    /*  41*/ {I_ADD, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\200\15", IF_8086},
    /*  42*/ {I_ADD, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\200\15", IF_386},
    /*  43*/ {I_ADD, 2, {REG_AL,IMMEDIATE,0}, "\1\x04\21", IF_8086|IF_SM},
    /*  44*/ {I_ADD, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x05\31", IF_8086|IF_SM},
    /*  45*/ {I_ADD, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x05\41", IF_386|IF_SM},
    /*  46*/ {I_ADD, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\200\21", IF_8086|IF_SM},
    /*  47*/ {I_ADD, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\200\131", IF_8086|IF_SM},
    /*  48*/ {I_ADD, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\200\141", IF_386|IF_SM},
    /*  49*/ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\200\21", IF_8086|IF_SM},
    /*  50*/ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\200\131", IF_8086|IF_SM},
    /*  51*/ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\200\141", IF_386|IF_SM},
    /*  52*/ {I_AND, 2, {MEMORY,REG8,0}, "\300\1\x20\101", IF_8086|IF_SM},
    /*  53*/ {I_AND, 2, {REG8,REG8,0}, "\1\x20\101", IF_8086},
    /*  54*/ {I_AND, 2, {MEMORY,REG16,0}, "\320\300\1\x21\101", IF_8086|IF_SM},
    /*  55*/ {I_AND, 2, {REG16,REG16,0}, "\320\1\x21\101", IF_8086},
    /*  56*/ {I_AND, 2, {MEMORY,REG32,0}, "\321\300\1\x21\101", IF_386|IF_SM},
    /*  57*/ {I_AND, 2, {REG32,REG32,0}, "\321\1\x21\101", IF_386},
    /*  58*/ {I_AND, 2, {REG8,MEMORY,0}, "\301\1\x22\110", IF_8086|IF_SM},
    /*  59*/ {I_AND, 2, {REG8,REG8,0}, "\1\x22\110", IF_8086},
    /*  60*/ {I_AND, 2, {REG16,MEMORY,0}, "\320\301\1\x23\110", IF_8086|IF_SM},
    /*  61*/ {I_AND, 2, {REG16,REG16,0}, "\320\1\x23\110", IF_8086},
    /*  62*/ {I_AND, 2, {REG32,MEMORY,0}, "\321\301\1\x23\110", IF_386|IF_SM},
    /*  63*/ {I_AND, 2, {REG32,REG32,0}, "\321\1\x23\110", IF_386},
    /*  64*/ {I_AND, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\204\15", IF_8086},
    /*  65*/ {I_AND, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\204\15", IF_386},
    /*  66*/ {I_AND, 2, {REG_AL,IMMEDIATE,0}, "\1\x24\21", IF_8086|IF_SM},
    /*  67*/ {I_AND, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x25\31", IF_8086|IF_SM},
    /*  68*/ {I_AND, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x25\41", IF_386|IF_SM},
    /*  69*/ {I_AND, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\204\21", IF_8086|IF_SM},
    /*  70*/ {I_AND, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\204\131", IF_8086|IF_SM},
    /*  71*/ {I_AND, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\204\141", IF_386|IF_SM},
    /*  72*/ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\204\21", IF_8086|IF_SM},
    /*  73*/ {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\204\131", IF_8086|IF_SM},
    /*  74*/ {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\204\141", IF_386|IF_SM},
    /*  75*/ {I_ARPL, 2, {MEMORY,REG16,0}, "\300\1\x63\101", IF_286|IF_PROT|IF_SM},
    /*  76*/ {I_ARPL, 2, {REG16,REG16,0}, "\1\x63\101", IF_286|IF_PROT},
    /*  77*/ {I_BOUND, 2, {REG16,MEMORY,0}, "\320\301\1\x62\110", IF_186},
    /*  78*/ {I_BOUND, 2, {REG32,MEMORY,0}, "\321\301\1\x62\110", IF_386},
    /*  79*/ {I_BSF, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xBC\110", IF_386|IF_SM},
    /*  80*/ {I_BSF, 2, {REG16,REG16,0}, "\320\2\x0F\xBC\110", IF_386},
    /*  81*/ {I_BSF, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xBC\110", IF_386|IF_SM},
    /*  82*/ {I_BSF, 2, {REG32,REG32,0}, "\321\2\x0F\xBC\110", IF_386},
    /*  83*/ {I_BSR, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xBD\110", IF_386|IF_SM},
    /*  84*/ {I_BSR, 2, {REG16,REG16,0}, "\320\2\x0F\xBD\110", IF_386},
    /*  85*/ {I_BSR, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xBD\110", IF_386|IF_SM},
    /*  86*/ {I_BSR, 2, {REG32,REG32,0}, "\321\2\x0F\xBD\110", IF_386},
    /*  87*/ {I_BSWAP, 1, {REG32,0,0}, "\321\1\x0F\10\xC8", IF_486},
    /*  88*/ {I_BT, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xA3\101", IF_386|IF_SM},
    /*  89*/ {I_BT, 2, {REG16,REG16,0}, "\320\2\x0F\xA3\101", IF_386},
    /*  90*/ {I_BT, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xA3\101", IF_386|IF_SM},
    /*  91*/ {I_BT, 2, {REG32,REG32,0}, "\321\2\x0F\xA3\101", IF_386},
    /*  92*/ {I_BT, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\2\x0F\xBA\204\25", IF_386|IF_SB},
    /*  93*/ {I_BT, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\2\x0F\xBA\204\25", IF_386|IF_SB},
    /*  94*/ {I_BTC, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xBB\101", IF_386|IF_SM},
    /*  95*/ {I_BTC, 2, {REG16,REG16,0}, "\320\2\x0F\xBB\101", IF_386},
    /*  96*/ {I_BTC, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xBB\101", IF_386|IF_SM},
    /*  97*/ {I_BTC, 2, {REG32,REG32,0}, "\321\2\x0F\xBB\101", IF_386},
    /*  98*/ {I_BTC, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\2\x0F\xBA\207\25", IF_386|IF_SB},
    /*  99*/ {I_BTC, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\2\x0F\xBA\207\25", IF_386|IF_SB},
    /* 100*/ {I_BTR, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xB3\101", IF_386|IF_SM},
    /* 101*/ {I_BTR, 2, {REG16,REG16,0}, "\320\2\x0F\xB3\101", IF_386},
    /* 102*/ {I_BTR, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xB3\101", IF_386|IF_SM},
    /* 103*/ {I_BTR, 2, {REG32,REG32,0}, "\321\2\x0F\xB3\101", IF_386},
    /* 104*/ {I_BTR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\2\x0F\xBA\206\25", IF_386|IF_SB},
    /* 105*/ {I_BTR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\2\x0F\xBA\206\25", IF_386|IF_SB},
    /* 106*/ {I_BTS, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xAB\101", IF_386|IF_SM},
    /* 107*/ {I_BTS, 2, {REG16,REG16,0}, "\320\2\x0F\xAB\101", IF_386},
    /* 108*/ {I_BTS, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xAB\101", IF_386|IF_SM},
    /* 109*/ {I_BTS, 2, {REG32,REG32,0}, "\321\2\x0F\xAB\101", IF_386},
    /* 110*/ {I_BTS, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\2\x0F\xBA\205\25", IF_386|IF_SB},
    /* 111*/ {I_BTS, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\2\x0F\xBA\205\25", IF_386|IF_SB},
    /* 112*/ {I_CALL, 1, {IMMEDIATE,0,0}, "\322\1\xE8\64", IF_8086},
    /* 113*/ {I_CALL, 1, {IMMEDIATE|NEAR,0,0}, "\322\1\xE8\64", IF_8086},
    /* 114*/ {I_CALL, 1, {IMMEDIATE|BITS16,0,0}, "\320\1\xE8\64", IF_8086},
    /* 115*/ {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0}, "\320\1\xE8\64", IF_8086},
    /* 116*/ {I_CALL, 1, {IMMEDIATE|BITS32,0,0}, "\321\1\xE8\64", IF_386},
    /* 117*/ {I_CALL, 1, {IMMEDIATE|BITS32|NEAR,0,0}, "\321\1\xE8\64", IF_386},
    /* 118*/ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\322\1\x9A\35\30", IF_8086},
    /* 119*/ {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0}, "\320\1\x9A\31\30", IF_8086},
    /* 120*/ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0}, "\320\1\x9A\31\30", IF_8086},
    /* 121*/ {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0}, "\321\1\x9A\41\30", IF_386},
    /* 122*/ {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0}, "\321\1\x9A\41\30", IF_386},
    /* 123*/ {I_CALL, 1, {MEMORY|FAR,0,0}, "\322\300\1\xFF\203", IF_8086},
    /* 124*/ {I_CALL, 1, {MEMORY|BITS16|FAR,0,0}, "\320\300\1\xFF\203", IF_8086},
    /* 125*/ {I_CALL, 1, {MEMORY|BITS32|FAR,0,0}, "\321\300\1\xFF\203", IF_386},
    /* 126*/ {I_CALL, 1, {MEMORY|NEAR,0,0}, "\322\300\1\xFF\202", IF_8086},
    /* 127*/ {I_CALL, 1, {MEMORY|BITS16|NEAR,0,0}, "\320\300\1\xFF\202", IF_8086},
    /* 128*/ {I_CALL, 1, {MEMORY|BITS32|NEAR,0,0}, "\321\300\1\xFF\202", IF_386},
    /* 129*/ {I_CALL, 1, {REG16,0,0}, "\320\300\1\xFF\202", IF_8086},
    /* 130*/ {I_CALL, 1, {REG32,0,0}, "\321\300\1\xFF\202", IF_386},
    /* 131*/ {I_CALL, 1, {MEMORY,0,0}, "\322\300\1\xFF\202", IF_8086},
    /* 132*/ {I_CALL, 1, {MEMORY|BITS16,0,0}, "\320\300\1\xFF\202", IF_8086},
    /* 133*/ {I_CALL, 1, {MEMORY|BITS32,0,0}, "\321\300\1\xFF\202", IF_386},
    /* 134*/ {I_CBW, 0, {0,0,0}, "\320\1\x98", IF_8086},
    /* 135*/ {I_CDQ, 0, {0,0,0}, "\321\1\x99", IF_386},
    /* 136*/ {I_CLC, 0, {0,0,0}, "\1\xF8", IF_8086},
    /* 137*/ {I_CLD, 0, {0,0,0}, "\1\xFC", IF_8086},
    /* 138*/ {I_CLI, 0, {0,0,0}, "\1\xFA", IF_8086},
    /* 139*/ {I_CLTS, 0, {0,0,0}, "\2\x0F\x06", IF_286|IF_PRIV},
    /* 140*/ {I_CMC, 0, {0,0,0}, "\1\xF5", IF_8086},
    /* 141*/ {I_CMP, 2, {MEMORY,REG8,0}, "\300\1\x38\101", IF_8086|IF_SM},
    /* 142*/ {I_CMP, 2, {REG8,REG8,0}, "\1\x38\101", IF_8086},
    /* 143*/ {I_CMP, 2, {MEMORY,REG16,0}, "\320\300\1\x39\101", IF_8086|IF_SM},
    /* 144*/ {I_CMP, 2, {REG16,REG16,0}, "\320\1\x39\101", IF_8086},
    /* 145*/ {I_CMP, 2, {MEMORY,REG32,0}, "\321\300\1\x39\101", IF_386|IF_SM},
    /* 146*/ {I_CMP, 2, {REG32,REG32,0}, "\321\1\x39\101", IF_386},
    /* 147*/ {I_CMP, 2, {REG8,MEMORY,0}, "\301\1\x3A\110", IF_8086|IF_SM},
    /* 148*/ {I_CMP, 2, {REG8,REG8,0}, "\1\x3A\110", IF_8086},
    /* 149*/ {I_CMP, 2, {REG16,MEMORY,0}, "\320\301\1\x3B\110", IF_8086|IF_SM},
    /* 150*/ {I_CMP, 2, {REG16,REG16,0}, "\320\1\x3B\110", IF_8086},
    /* 151*/ {I_CMP, 2, {REG32,MEMORY,0}, "\321\301\1\x3B\110", IF_386|IF_SM},
    /* 152*/ {I_CMP, 2, {REG32,REG32,0}, "\321\1\x3B\110", IF_386},
    /* 153*/ {I_CMP, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\207\15", IF_8086},
    /* 154*/ {I_CMP, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\207\15", IF_386},
    /* 155*/ {I_CMP, 2, {REG_AL,IMMEDIATE,0}, "\1\x3C\21", IF_8086|IF_SM},
    /* 156*/ {I_CMP, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x3D\31", IF_8086|IF_SM},
    /* 157*/ {I_CMP, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x3D\41", IF_386|IF_SM},
    /* 158*/ {I_CMP, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\207\21", IF_8086|IF_SM},
    /* 159*/ {I_CMP, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\207\131", IF_8086|IF_SM},
    /* 160*/ {I_CMP, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\207\141", IF_386|IF_SM},
    /* 161*/ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\207\21", IF_8086|IF_SM},
    /* 162*/ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\207\131", IF_8086|IF_SM},
    /* 163*/ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\207\141", IF_386|IF_SM},
    /* 164*/ {I_CMPSB, 0, {0,0,0}, "\332\1\xA6", IF_8086},
    /* 165*/ {I_CMPSD, 0, {0,0,0}, "\332\321\1\xA7", IF_386},
    /* 166*/ {I_CMPSW, 0, {0,0,0}, "\332\320\1\xA7", IF_8086},
    /* 167*/ {I_CMPXCHG, 2, {MEMORY,REG8,0}, "\300\2\x0F\xB0\101", IF_PENT|IF_SM},
    /* 168*/ {I_CMPXCHG, 2, {REG8,REG8,0}, "\2\x0F\xB0\101", IF_PENT},
    /* 169*/ {I_CMPXCHG, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xB1\101", IF_PENT|IF_SM},
    /* 170*/ {I_CMPXCHG, 2, {REG16,REG16,0}, "\320\2\x0F\xB1\101", IF_PENT},
    /* 171*/ {I_CMPXCHG, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xB1\101", IF_PENT|IF_SM},
    /* 172*/ {I_CMPXCHG, 2, {REG32,REG32,0}, "\321\2\x0F\xB1\101", IF_PENT},
    /* 173*/ {I_CMPXCHG486, 2, {MEMORY,REG8,0}, "\300\2\x0F\xA6\101", IF_486|IF_SM|IF_UNDOC},
    /* 174*/ {I_CMPXCHG486, 2, {REG8,REG8,0}, "\2\x0F\xA6\101", IF_486|IF_UNDOC},
    /* 175*/ {I_CMPXCHG486, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xA7\101", IF_486|IF_SM|IF_UNDOC},
    /* 176*/ {I_CMPXCHG486, 2, {REG16,REG16,0}, "\320\2\x0F\xA7\101", IF_486|IF_UNDOC},
    /* 177*/ {I_CMPXCHG486, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xA7\101", IF_486|IF_SM|IF_UNDOC},
    /* 178*/ {I_CMPXCHG486, 2, {REG32,REG32,0}, "\321\2\x0F\xA7\101", IF_486|IF_UNDOC},
    /* 179*/ {I_CMPXCHG8B, 1, {MEMORY,0,0}, "\300\2\x0F\xC7\201", IF_PENT},
    /* 180*/ {I_CPUID, 0, {0,0,0}, "\2\x0F\xA2", IF_PENT},
    /* 181*/ {I_CWD, 0, {0,0,0}, "\320\1\x99", IF_8086},
    /* 182*/ {I_CWDE, 0, {0,0,0}, "\321\1\x98", IF_386},
    /* 183*/ {I_DAA, 0, {0,0,0}, "\1\x27", IF_8086},
    /* 184*/ {I_DAS, 0, {0,0,0}, "\1\x2F", IF_8086},
    /* 185*/ {I_DEC, 1, {REG16,0,0}, "\320\10\x48", IF_8086},
    /* 186*/ {I_DEC, 1, {REG32,0,0}, "\321\10\x48", IF_386},
    /* 187*/ {I_DEC, 1, {REGMEM|BITS8,0,0}, "\300\1\xFE\201", IF_8086},
    /* 188*/ {I_DEC, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\201", IF_8086},
    /* 189*/ {I_DEC, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xFF\201", IF_386},
    /* 190*/ {I_DIV, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\206", IF_8086},
    /* 191*/ {I_DIV, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\206", IF_8086},
    /* 192*/ {I_DIV, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\206", IF_386},
    /* 193*/ {I_EMMS, 0, {0,0,0}, "\2\x0F\x77", IF_PENT|IF_MMX},
    /* 194*/ {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0}, "\1\xC8\30\25", IF_186},
    /* 195*/ {I_EQU, 1, {IMMEDIATE,0,0}, "\0", IF_8086},
    /* 196*/ {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\0", IF_8086},
    /* 197*/ {I_F2XM1, 0, {0,0,0}, "\2\xD9\xF0", IF_8086|IF_FPU},
    /* 198*/ {I_FABS, 0, {0,0,0}, "\2\xD9\xE1", IF_8086|IF_FPU},
    /* 199*/ {I_FADD, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\200", IF_8086|IF_FPU},
    /* 200*/ {I_FADD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\200", IF_8086|IF_FPU},
    /* 201*/ {I_FADD, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    /* 202*/ {I_FADD, 1, {FPUREG,0,0}, "\1\xD8\10\xC0", IF_8086|IF_FPU},
    /* 203*/ {I_FADD, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xC0", IF_8086|IF_FPU},
    /* 204*/ {I_FADD, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xC0", IF_8086|IF_FPU},
    /* 205*/ {I_FADDP, 1, {FPUREG,0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    /* 206*/ {I_FADDP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xC0", IF_8086|IF_FPU},
    /* 207*/ {I_FBLD, 1, {MEMORY|BITS80,0,0}, "\300\1\xDF\204", IF_8086|IF_FPU},
    /* 208*/ {I_FBLD, 1, {MEMORY,0,0}, "\300\1\xDF\204", IF_8086|IF_FPU},
    /* 209*/ {I_FBSTP, 1, {MEMORY|BITS80,0,0}, "\300\1\xDF\206", IF_8086|IF_FPU},
    /* 210*/ {I_FBSTP, 1, {MEMORY,0,0}, "\300\1\xDF\206", IF_8086|IF_FPU},
    /* 211*/ {I_FCHS, 0, {0,0,0}, "\2\xD9\xE0", IF_8086|IF_FPU},
    /* 212*/ {I_FCLEX, 0, {0,0,0}, "\3\x9B\xDB\xE2", IF_8086|IF_FPU},
    /* 213*/ {I_FCMOVB, 1, {FPUREG,0,0}, "\1\xDA\10\xC0", IF_P6|IF_FPU},
    /* 214*/ {I_FCMOVB, 2, {FPU0,FPUREG,0}, "\1\xDA\11\xC0", IF_P6|IF_FPU},
    /* 215*/ {I_FCMOVBE, 1, {FPUREG,0,0}, "\1\xDA\10\xD0", IF_P6|IF_FPU},
    /* 216*/ {I_FCMOVBE, 2, {FPU0,FPUREG,0}, "\1\xDA\11\xD0", IF_P6|IF_FPU},
    /* 217*/ {I_FCMOVE, 1, {FPUREG,0,0}, "\1\xDA\10\xC8", IF_P6|IF_FPU},
    /* 218*/ {I_FCMOVE, 2, {FPU0,FPUREG,0}, "\1\xDA\11\xC8", IF_P6|IF_FPU},
    /* 219*/ {I_FCMOVNB, 1, {FPUREG,0,0}, "\1\xDB\10\xC0", IF_P6|IF_FPU},
    /* 220*/ {I_FCMOVNB, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xC0", IF_P6|IF_FPU},
    /* 221*/ {I_FCMOVNBE, 1, {FPUREG,0,0}, "\1\xDB\10\xD0", IF_P6|IF_FPU},
    /* 222*/ {I_FCMOVNBE, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xD0", IF_P6|IF_FPU},
    /* 223*/ {I_FCMOVNE, 1, {FPUREG,0,0}, "\1\xDB\10\xC8", IF_P6|IF_FPU},
    /* 224*/ {I_FCMOVNE, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xC8", IF_P6|IF_FPU},
    /* 225*/ {I_FCMOVNU, 1, {FPUREG,0,0}, "\1\xDB\10\xD8", IF_P6|IF_FPU},
    /* 226*/ {I_FCMOVNU, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xD8", IF_P6|IF_FPU},
    /* 227*/ {I_FCMOVU, 1, {FPUREG,0,0}, "\1\xDA\10\xD8", IF_P6|IF_FPU},
    /* 228*/ {I_FCMOVU, 2, {FPU0,FPUREG,0}, "\1\xDA\11\xD8", IF_P6|IF_FPU},
    /* 229*/ {I_FCOM, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\202", IF_8086|IF_FPU},
    /* 230*/ {I_FCOM, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\202", IF_8086|IF_FPU},
    /* 231*/ {I_FCOM, 1, {FPUREG,0,0}, "\1\xD8\10\xD0", IF_8086|IF_FPU},
    /* 232*/ {I_FCOM, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xD0", IF_8086|IF_FPU},
    /* 233*/ {I_FCOMI, 1, {FPUREG,0,0}, "\1\xDB\10\xF0", IF_P6|IF_FPU},
    /* 234*/ {I_FCOMI, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xF0", IF_P6|IF_FPU},
    /* 235*/ {I_FCOMIP, 1, {FPUREG,0,0}, "\1\xDF\10\xF0", IF_P6|IF_FPU},
    /* 236*/ {I_FCOMIP, 2, {FPU0,FPUREG,0}, "\1\xDF\11\xF0", IF_P6|IF_FPU},
    /* 237*/ {I_FCOMP, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\203", IF_8086|IF_FPU},
    /* 238*/ {I_FCOMP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\203", IF_8086|IF_FPU},
    /* 239*/ {I_FCOMP, 1, {FPUREG,0,0}, "\1\xD8\10\xD8", IF_8086|IF_FPU},
    /* 240*/ {I_FCOMP, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xD8", IF_8086|IF_FPU},
    /* 241*/ {I_FCOMPP, 0, {0,0,0}, "\2\xDE\xD9", IF_8086|IF_FPU},
    /* 242*/ {I_FCOS, 0, {0,0,0}, "\2\xD9\xFF", IF_386|IF_FPU},
    /* 243*/ {I_FDECSTP, 0, {0,0,0}, "\2\xD9\xF6", IF_8086|IF_FPU},
    /* 244*/ {I_FDISI, 0, {0,0,0}, "\3\x9B\xDB\xE1", IF_8086|IF_FPU},
    /* 245*/ {I_FDIV, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\206", IF_8086|IF_FPU},
    /* 246*/ {I_FDIV, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\206", IF_8086|IF_FPU},
    /* 247*/ {I_FDIV, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    /* 248*/ {I_FDIV, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xF8", IF_8086|IF_FPU},
    /* 249*/ {I_FDIV, 1, {FPUREG,0,0}, "\1\xD8\10\xF0", IF_8086|IF_FPU},
    /* 250*/ {I_FDIV, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xF0", IF_8086|IF_FPU},
    /* 251*/ {I_FDIVP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    /* 252*/ {I_FDIVP, 1, {FPUREG,0,0}, "\1\xDE\10\xF8", IF_8086|IF_FPU},
    /* 253*/ {I_FDIVR, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\207", IF_8086|IF_FPU},
    /* 254*/ {I_FDIVR, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\207", IF_8086|IF_FPU},
    /* 255*/ {I_FDIVR, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    /* 256*/ {I_FDIVR, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xF0", IF_8086|IF_FPU},
    /* 257*/ {I_FDIVR, 1, {FPUREG,0,0}, "\1\xD8\10\xF8", IF_8086|IF_FPU},
    /* 258*/ {I_FDIVR, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xF8", IF_8086|IF_FPU},
    /* 259*/ {I_FDIVRP, 1, {FPUREG,0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    /* 260*/ {I_FDIVRP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xF0", IF_8086|IF_FPU},
    /* 261*/ {I_FEMMS, 0, {0,0,0}, "\2\x0F\x0E", IF_PENT|IF_3DNOW},
    /* 262*/ {I_FENI, 0, {0,0,0}, "\3\x9B\xDB\xE0", IF_8086|IF_FPU},
    /* 263*/ {I_FFREE, 1, {FPUREG,0,0}, "\1\xDD\10\xC0", IF_8086|IF_FPU},
    /* 264*/ {I_FFREEP, 1, {FPUREG,0,0}, "\1\xDF\10\xC0", IF_286|IF_FPU|IF_UNDOC},
    /* 265*/ {I_FIADD, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\200", IF_8086|IF_FPU},
    /* 266*/ {I_FIADD, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\200", IF_8086|IF_FPU},
    /* 267*/ {I_FICOM, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\202", IF_8086|IF_FPU},
    /* 268*/ {I_FICOM, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\202", IF_8086|IF_FPU},
    /* 269*/ {I_FICOMP, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\203", IF_8086|IF_FPU},
    /* 270*/ {I_FICOMP, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\203", IF_8086|IF_FPU},
    /* 271*/ {I_FIDIV, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\206", IF_8086|IF_FPU},
    /* 272*/ {I_FIDIV, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\206", IF_8086|IF_FPU},
    /* 273*/ {I_FIDIVR, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\207", IF_8086|IF_FPU},
    /* 274*/ {I_FIDIVR, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\207", IF_8086|IF_FPU},
    /* 275*/ {I_FILD, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\200", IF_8086|IF_FPU},
    /* 276*/ {I_FILD, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\200", IF_8086|IF_FPU},
    /* 277*/ {I_FILD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDF\205", IF_8086|IF_FPU},
    /* 278*/ {I_FIMUL, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\201", IF_8086|IF_FPU},
    /* 279*/ {I_FIMUL, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\201", IF_8086|IF_FPU},
    /* 280*/ {I_FINCSTP, 0, {0,0,0}, "\2\xD9\xF7", IF_8086|IF_FPU},
    /* 281*/ {I_FINIT, 0, {0,0,0}, "\3\x9B\xDB\xE3", IF_8086|IF_FPU},
    /* 282*/ {I_FIST, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\202", IF_8086|IF_FPU},
    /* 283*/ {I_FIST, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\202", IF_8086|IF_FPU},
    /* 284*/ {I_FISTP, 1, {MEMORY|BITS32,0,0}, "\300\1\xDB\203", IF_8086|IF_FPU},
    /* 285*/ {I_FISTP, 1, {MEMORY|BITS16,0,0}, "\300\1\xDF\203", IF_8086|IF_FPU},
    /* 286*/ {I_FISTP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDF\207", IF_8086|IF_FPU},
    /* 287*/ {I_FISTTP, 1, {MEMORY|BITS32,0,0}, "\300\1\xDD\201", IF_PRESCOTT|IF_FPU},
    /* 288*/ {I_FISTTP, 1, {MEMORY|BITS16,0,0}, "\300\1\xDB\201", IF_PRESCOTT|IF_FPU},
    /* 289*/ {I_FISTTP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDF\201", IF_PRESCOTT|IF_FPU},
    /* 290*/ {I_FISUB, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\204", IF_8086|IF_FPU},
    /* 291*/ {I_FISUB, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\204", IF_8086|IF_FPU},
    /* 292*/ {I_FISUBR, 1, {MEMORY|BITS32,0,0}, "\300\1\xDA\205", IF_8086|IF_FPU},
    /* 293*/ {I_FISUBR, 1, {MEMORY|BITS16,0,0}, "\300\1\xDE\205", IF_8086|IF_FPU},
    /* 294*/ {I_FLD, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\200", IF_8086|IF_FPU},
    /* 295*/ {I_FLD, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\200", IF_8086|IF_FPU},
    /* 296*/ {I_FLD, 1, {MEMORY|BITS80,0,0}, "\300\1\xDB\205", IF_8086|IF_FPU},
    /* 297*/ {I_FLD, 1, {FPUREG,0,0}, "\1\xD9\10\xC0", IF_8086|IF_FPU},
    /* 298*/ {I_FLD1, 0, {0,0,0}, "\2\xD9\xE8", IF_8086|IF_FPU},
    /* 299*/ {I_FLDCW, 1, {MEMORY,0,0}, "\300\1\xD9\205", IF_8086|IF_FPU|IF_SW},
    /* 300*/ {I_FLDENV, 1, {MEMORY,0,0}, "\300\1\xD9\204", IF_8086|IF_FPU},
    /* 301*/ {I_FLDL2E, 0, {0,0,0}, "\2\xD9\xEA", IF_8086|IF_FPU},
    /* 302*/ {I_FLDL2T, 0, {0,0,0}, "\2\xD9\xE9", IF_8086|IF_FPU},
    /* 303*/ {I_FLDLG2, 0, {0,0,0}, "\2\xD9\xEC", IF_8086|IF_FPU},
    /* 304*/ {I_FLDLN2, 0, {0,0,0}, "\2\xD9\xED", IF_8086|IF_FPU},
    /* 305*/ {I_FLDPI, 0, {0,0,0}, "\2\xD9\xEB", IF_8086|IF_FPU},
    /* 306*/ {I_FLDZ, 0, {0,0,0}, "\2\xD9\xEE", IF_8086|IF_FPU},
    /* 307*/ {I_FMUL, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\201", IF_8086|IF_FPU},
    /* 308*/ {I_FMUL, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\201", IF_8086|IF_FPU},
    /* 309*/ {I_FMUL, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    /* 310*/ {I_FMUL, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xC8", IF_8086|IF_FPU},
    /* 311*/ {I_FMUL, 1, {FPUREG,0,0}, "\1\xD8\10\xC8", IF_8086|IF_FPU},
    /* 312*/ {I_FMUL, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xC8", IF_8086|IF_FPU},
    /* 313*/ {I_FMULP, 1, {FPUREG,0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    /* 314*/ {I_FMULP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xC8", IF_8086|IF_FPU},
    /* 315*/ {I_FNCLEX, 0, {0,0,0}, "\2\xDB\xE2", IF_8086|IF_FPU},
    /* 316*/ {I_FNDISI, 0, {0,0,0}, "\2\xDB\xE1", IF_8086|IF_FPU},
    /* 317*/ {I_FNENI, 0, {0,0,0}, "\2\xDB\xE0", IF_8086|IF_FPU},
    /* 318*/ {I_FNINIT, 0, {0,0,0}, "\2\xDB\xE3", IF_8086|IF_FPU},
    /* 319*/ {I_FNOP, 0, {0,0,0}, "\2\xD9\xD0", IF_8086|IF_FPU},
    /* 320*/ {I_FNSAVE, 1, {MEMORY,0,0}, "\300\1\xDD\206", IF_8086|IF_FPU},
    /* 321*/ {I_FNSTCW, 1, {MEMORY,0,0}, "\300\1\xD9\207", IF_8086|IF_FPU|IF_SW},
    /* 322*/ {I_FNSTENV, 1, {MEMORY,0,0}, "\300\1\xD9\206", IF_8086|IF_FPU},
    /* 323*/ {I_FNSTSW, 1, {MEMORY,0,0}, "\300\1\xDD\207", IF_8086|IF_FPU|IF_SW},
    /* 324*/ {I_FNSTSW, 1, {REG_AX,0,0}, "\2\xDF\xE0", IF_286|IF_FPU},
    /* 325*/ {I_FPATAN, 0, {0,0,0}, "\2\xD9\xF3", IF_8086|IF_FPU},
    /* 326*/ {I_FPREM, 0, {0,0,0}, "\2\xD9\xF8", IF_8086|IF_FPU},
    /* 327*/ {I_FPREM1, 0, {0,0,0}, "\2\xD9\xF5", IF_386|IF_FPU},
    /* 328*/ {I_FPTAN, 0, {0,0,0}, "\2\xD9\xF2", IF_8086|IF_FPU},
    /* 329*/ {I_FRNDINT, 0, {0,0,0}, "\2\xD9\xFC", IF_8086|IF_FPU},
    /* 330*/ {I_FRSTOR, 1, {MEMORY,0,0}, "\300\1\xDD\204", IF_8086|IF_FPU},
    /* 331*/ {I_FSAVE, 1, {MEMORY,0,0}, "\300\2\x9B\xDD\206", IF_8086|IF_FPU},
    /* 332*/ {I_FSCALE, 0, {0,0,0}, "\2\xD9\xFD", IF_8086|IF_FPU},
    /* 333*/ {I_FSETPM, 0, {0,0,0}, "\2\xDB\xE4", IF_286|IF_FPU},
    /* 334*/ {I_FSIN, 0, {0,0,0}, "\2\xD9\xFE", IF_386|IF_FPU},
    /* 335*/ {I_FSINCOS, 0, {0,0,0}, "\2\xD9\xFB", IF_386|IF_FPU},
    /* 336*/ {I_FSQRT, 0, {0,0,0}, "\2\xD9\xFA", IF_8086|IF_FPU},
    /* 337*/ {I_FST, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\202", IF_8086|IF_FPU},
    /* 338*/ {I_FST, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\202", IF_8086|IF_FPU},
    /* 339*/ {I_FST, 1, {FPUREG,0,0}, "\1\xDD\10\xD0", IF_8086|IF_FPU},
    /* 340*/ {I_FSTCW, 1, {MEMORY,0,0}, "\300\2\x9B\xD9\207", IF_8086|IF_FPU|IF_SW},
    /* 341*/ {I_FSTENV, 1, {MEMORY,0,0}, "\300\2\x9B\xD9\206", IF_8086|IF_FPU},
    /* 342*/ {I_FSTP, 1, {MEMORY|BITS32,0,0}, "\300\1\xD9\203", IF_8086|IF_FPU},
    /* 343*/ {I_FSTP, 1, {MEMORY|BITS64,0,0}, "\300\1\xDD\203", IF_8086|IF_FPU},
    /* 344*/ {I_FSTP, 1, {MEMORY|BITS80,0,0}, "\300\1\xDB\207", IF_8086|IF_FPU},
    /* 345*/ {I_FSTP, 1, {FPUREG,0,0}, "\1\xDD\10\xD8", IF_8086|IF_FPU},
    /* 346*/ {I_FSTSW, 1, {MEMORY,0,0}, "\300\2\x9B\xDD\207", IF_8086|IF_FPU|IF_SW},
    /* 347*/ {I_FSTSW, 1, {REG_AX,0,0}, "\3\x9B\xDF\xE0", IF_286|IF_FPU},
    /* 348*/ {I_FSUB, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\204", IF_8086|IF_FPU},
    /* 349*/ {I_FSUB, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\204", IF_8086|IF_FPU},
    /* 350*/ {I_FSUB, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    /* 351*/ {I_FSUB, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xE8", IF_8086|IF_FPU},
    /* 352*/ {I_FSUB, 1, {FPUREG,0,0}, "\1\xD8\10\xE0", IF_8086|IF_FPU},
    /* 353*/ {I_FSUB, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xE0", IF_8086|IF_FPU},
    /* 354*/ {I_FSUBP, 1, {FPUREG,0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    /* 355*/ {I_FSUBP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xE8", IF_8086|IF_FPU},
    /* 356*/ {I_FSUBR, 1, {MEMORY|BITS32,0,0}, "\300\1\xD8\205", IF_8086|IF_FPU},
    /* 357*/ {I_FSUBR, 1, {MEMORY|BITS64,0,0}, "\300\1\xDC\205", IF_8086|IF_FPU},
    /* 358*/ {I_FSUBR, 1, {FPUREG|TO,0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    /* 359*/ {I_FSUBR, 2, {FPUREG,FPU0,0}, "\1\xDC\10\xE0", IF_8086|IF_FPU},
    /* 360*/ {I_FSUBR, 1, {FPUREG,0,0}, "\1\xD8\10\xE8", IF_8086|IF_FPU},
    /* 361*/ {I_FSUBR, 2, {FPU0,FPUREG,0}, "\1\xD8\11\xE8", IF_8086|IF_FPU},
    /* 362*/ {I_FSUBRP, 1, {FPUREG,0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    /* 363*/ {I_FSUBRP, 2, {FPUREG,FPU0,0}, "\1\xDE\10\xE0", IF_8086|IF_FPU},
    /* 364*/ {I_FTST, 0, {0,0,0}, "\2\xD9\xE4", IF_8086|IF_FPU},
    /* 365*/ {I_FUCOM, 1, {FPUREG,0,0}, "\1\xDD\10\xE0", IF_386|IF_FPU},
    /* 366*/ {I_FUCOM, 2, {FPU0,FPUREG,0}, "\1\xDD\11\xE0", IF_386|IF_FPU},
    /* 367*/ {I_FUCOMI, 1, {FPUREG,0,0}, "\1\xDB\10\xE8", IF_P6|IF_FPU},
    /* 368*/ {I_FUCOMI, 2, {FPU0,FPUREG,0}, "\1\xDB\11\xE8", IF_P6|IF_FPU},
    /* 369*/ {I_FUCOMIP, 1, {FPUREG,0,0}, "\1\xDF\10\xE8", IF_P6|IF_FPU},
    /* 370*/ {I_FUCOMIP, 2, {FPU0,FPUREG,0}, "\1\xDF\11\xE8", IF_P6|IF_FPU},
    /* 371*/ {I_FUCOMP, 1, {FPUREG,0,0}, "\1\xDD\10\xE8", IF_386|IF_FPU},
    /* 372*/ {I_FUCOMP, 2, {FPU0,FPUREG,0}, "\1\xDD\11\xE8", IF_386|IF_FPU},
    /* 373*/ {I_FUCOMPP, 0, {0,0,0}, "\2\xDA\xE9", IF_386|IF_FPU},
    /* 374*/ {I_FXAM, 0, {0,0,0}, "\2\xD9\xE5", IF_8086|IF_FPU},
    /* 375*/ {I_FXCH, 0, {0,0,0}, "\2\xD9\xC9", IF_8086|IF_FPU},
    /* 376*/ {I_FXCH, 1, {FPUREG,0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    /* 377*/ {I_FXCH, 2, {FPUREG,FPU0,0}, "\1\xD9\10\xC8", IF_8086|IF_FPU},
    /* 378*/ {I_FXCH, 2, {FPU0,FPUREG,0}, "\1\xD9\11\xC8", IF_8086|IF_FPU},
    /* 379*/ {I_FXTRACT, 0, {0,0,0}, "\2\xD9\xF4", IF_8086|IF_FPU},
    /* 380*/ {I_FYL2X, 0, {0,0,0}, "\2\xD9\xF1", IF_8086|IF_FPU},
    /* 381*/ {I_FYL2XP1, 0, {0,0,0}, "\2\xD9\xF9", IF_8086|IF_FPU},
    /* 382*/ {I_HLT, 0, {0,0,0}, "\1\xF4", IF_8086|IF_PRIV},
    /* 383*/ {I_IDIV, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\207", IF_8086},
    /* 384*/ {I_IDIV, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\207", IF_8086},
    /* 385*/ {I_IDIV, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\207", IF_386},
    /* 386*/ {I_IMUL, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\205", IF_8086},
    /* 387*/ {I_IMUL, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\205", IF_8086},
    /* 388*/ {I_IMUL, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\205", IF_386},
    /* 389*/ {I_IMUL, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xAF\110", IF_386|IF_SM},
    /* 390*/ {I_IMUL, 2, {REG16,REG16,0}, "\320\2\x0F\xAF\110", IF_386},
    /* 391*/ {I_IMUL, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xAF\110", IF_386|IF_SM},
    /* 392*/ {I_IMUL, 2, {REG32,REG32,0}, "\321\2\x0F\xAF\110", IF_386},
    /* 393*/ {I_IMUL, 3, {REG16,MEMORY,IMMEDIATE|BITS8}, "\320\301\1\x6B\110\16", IF_186|IF_SM},
    /* 394*/ {I_IMUL, 3, {REG16,MEMORY,IMMEDIATE|BITS16}, "\320\301\1\x69\110\32", IF_186|IF_SM},
    /* 395*/ {I_IMUL, 3, {REG16,REG16,IMMEDIATE|BITS8}, "\320\1\x6B\110\16", IF_186},
    /* 396*/ {I_IMUL, 3, {REG16,REG16,IMMEDIATE|BITS16}, "\320\1\x69\110\32", IF_186},
    /* 397*/ {I_IMUL, 3, {REG32,MEMORY,IMMEDIATE|BITS8}, "\321\301\1\x6B\110\16", IF_386|IF_SM},
    /* 398*/ {I_IMUL, 3, {REG32,MEMORY,IMMEDIATE|BITS32}, "\321\301\1\x69\110\42", IF_386|IF_SM},
    /* 399*/ {I_IMUL, 3, {REG32,REG32,IMMEDIATE|BITS8}, "\321\1\x6B\110\16", IF_386},
    /* 400*/ {I_IMUL, 3, {REG32,REG32,IMMEDIATE|BITS32}, "\321\1\x69\110\42", IF_386},
    /* 401*/ {I_IMUL, 2, {REG16,IMMEDIATE|BITS8,0}, "\320\1\x6B\100\15", IF_186},
    /* 402*/ {I_IMUL, 2, {REG16,IMMEDIATE|BITS16,0}, "\320\1\x69\100\31", IF_186},
    /* 403*/ {I_IMUL, 2, {REG32,IMMEDIATE|BITS8,0}, "\321\1\x6B\100\15", IF_386},
    /* 404*/ {I_IMUL, 2, {REG32,IMMEDIATE|BITS32,0}, "\321\1\x69\100\41", IF_386},
    /* 405*/ {I_IN, 2, {REG_AL,IMMEDIATE,0}, "\1\xE4\25", IF_8086|IF_SB},
    /* 406*/ {I_IN, 2, {REG_AX,IMMEDIATE,0}, "\320\1\xE5\25", IF_8086|IF_SB},
    /* 407*/ {I_IN, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\xE5\25", IF_386|IF_SB},
    /* 408*/ {I_IN, 2, {REG_AL,REG_DX,0}, "\1\xEC", IF_8086},
    /* 409*/ {I_IN, 2, {REG_AX,REG_DX,0}, "\320\1\xED", IF_8086},
    /* 410*/ {I_IN, 2, {REG_EAX,REG_DX,0}, "\321\1\xED", IF_386},
    /* 411*/ {I_INC, 1, {REG16,0,0}, "\320\10\x40", IF_8086},
    /* 412*/ {I_INC, 1, {REG32,0,0}, "\321\10\x40", IF_386},
    /* 413*/ {I_INC, 1, {REGMEM|BITS8,0,0}, "\300\1\xFE\200", IF_8086},
    /* 414*/ {I_INC, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\200", IF_8086},
    /* 415*/ {I_INC, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xFF\200", IF_386},
    /* 416*/ {I_INSB, 0, {0,0,0}, "\1\x6C", IF_186},
    /* 417*/ {I_INSD, 0, {0,0,0}, "\321\1\x6D", IF_386},
    /* 418*/ {I_INSW, 0, {0,0,0}, "\320\1\x6D", IF_186},
    /* 419*/ {I_INT, 1, {IMMEDIATE,0,0}, "\1\xCD\24", IF_8086|IF_SB},
    /* 420*/ {I_INT1, 0, {0,0,0}, "\1\xF1", IF_386},
    /* 421*/ {I_INT3, 0, {0,0,0}, "\1\xCC", IF_8086},
    /* 422*/ {I_INTO, 0, {0,0,0}, "\1\xCE", IF_8086},
    /* 423*/ {I_INVD, 0, {0,0,0}, "\2\x0F\x08", IF_486|IF_PRIV},
    /* 424*/ {I_INVLPG, 1, {MEMORY,0,0}, "\300\2\x0F\x01\207", IF_486|IF_PRIV},
    /* 425*/ {I_IRET, 0, {0,0,0}, "\322\1\xCF", IF_8086},
    /* 426*/ {I_IRETD, 0, {0,0,0}, "\321\1\xCF", IF_386},
    /* 427*/ {I_IRETW, 0, {0,0,0}, "\320\1\xCF", IF_8086},
    /* 428*/ {I_JCXZ, 1, {IMMEDIATE,0,0}, "\310\1\xE3\50", IF_8086},
    /* 429*/ {I_JECXZ, 1, {IMMEDIATE,0,0}, "\311\1\xE3\50", IF_386},
    /* 430*/ {I_JMP, 1, {IMMEDIATE|SHORT,0,0}, "\1\xEB\50", IF_8086},
    /* 431*/ {I_JMP, 1, {IMMEDIATE,0,0}, "\322\1\xE9\64", IF_8086},
    /* 432*/ {I_JMP, 1, {IMMEDIATE|BITS16,0,0}, "\320\1\xE9\64", IF_8086},
    /* 433*/ {I_JMP, 1, {IMMEDIATE|BITS32,0,0}, "\321\1\xE9\64", IF_386},
    /* 434*/ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0}, "\322\1\xEA\35\30", IF_8086},
    /* 435*/ {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0}, "\320\1\xEA\31\30", IF_8086},
    /* 436*/ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0}, "\320\1\xEA\31\30", IF_8086},
    /* 437*/ {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0}, "\321\1\xEA\41\30", IF_386},
    /* 438*/ {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0}, "\321\1\xEA\41\30", IF_386},
    /* 439*/ {I_JMP, 1, {MEMORY|FAR,0,0}, "\322\300\1\xFF\205", IF_8086},
    /* 440*/ {I_JMP, 1, {MEMORY|BITS16|FAR,0,0}, "\320\300\1\xFF\205", IF_8086},
    /* 441*/ {I_JMP, 1, {MEMORY|BITS32|FAR,0,0}, "\321\300\1\xFF\205", IF_386},
    /* 442*/ {I_JMP, 1, {MEMORY|NEAR,0,0}, "\322\300\1\xFF\204", IF_8086},
    /* 443*/ {I_JMP, 1, {MEMORY|BITS16|NEAR,0,0}, "\320\300\1\xFF\204", IF_8086},
    /* 444*/ {I_JMP, 1, {MEMORY|BITS32|NEAR,0,0}, "\321\300\1\xFF\204", IF_386},
    /* 445*/ {I_JMP, 1, {REG16,0,0}, "\320\300\1\xFF\204", IF_8086},
    /* 446*/ {I_JMP, 1, {REG32,0,0}, "\321\300\1\xFF\204", IF_386},
    /* 447*/ {I_JMP, 1, {MEMORY,0,0}, "\322\300\1\xFF\204", IF_8086},
    /* 448*/ {I_JMP, 1, {MEMORY|BITS16,0,0}, "\320\300\1\xFF\204", IF_8086},
    /* 449*/ {I_JMP, 1, {MEMORY|BITS32,0,0}, "\321\300\1\xFF\204", IF_386},
    /* 450*/ {I_JMPE, 1, {IMMEDIATE,0,0}, "\322\2\x0F\xB8\64", IF_IA64},
    /* 451*/ {I_JMPE, 1, {IMMEDIATE|BITS16,0,0}, "\320\2\x0F\xB8\64", IF_IA64},
    /* 452*/ {I_JMPE, 1, {IMMEDIATE|BITS32,0,0}, "\321\2\x0F\xB8\64", IF_IA64},
    /* 453*/ {I_JMPE, 1, {REGMEM|BITS16,0,0}, "\320\2\x0F\x00\206", IF_IA64},
    /* 454*/ {I_JMPE, 1, {REGMEM|BITS32,0,0}, "\321\2\x0F\x00\206", IF_IA64},
    /* 455*/ {I_LAHF, 0, {0,0,0}, "\1\x9F", IF_8086},
    /* 456*/ {I_LAR, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\x02\110", IF_286|IF_PROT|IF_SM},
    /* 457*/ {I_LAR, 2, {REG16,REG16,0}, "\320\2\x0F\x02\110", IF_286|IF_PROT},
    /* 458*/ {I_LAR, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\x02\110", IF_386|IF_PROT|IF_SM},
    /* 459*/ {I_LAR, 2, {REG32,REG32,0}, "\321\2\x0F\x02\110", IF_386|IF_PROT},
    /* 460*/ {I_LDS, 2, {REG16,MEMORY,0}, "\320\301\1\xC5\110", IF_8086},
    /* 461*/ {I_LDS, 2, {REG32,MEMORY,0}, "\321\301\1\xC5\110", IF_386},
    /* 462*/ {I_LEA, 2, {REG16,MEMORY,0}, "\320\301\1\x8D\110", IF_8086},
    /* 463*/ {I_LEA, 2, {REG32,MEMORY,0}, "\321\301\1\x8D\110", IF_386},
    /* 464*/ {I_LEAVE, 0, {0,0,0}, "\1\xC9", IF_186},
    /* 465*/ {I_LES, 2, {REG16,MEMORY,0}, "\320\301\1\xC4\110", IF_8086},
    /* 466*/ {I_LES, 2, {REG32,MEMORY,0}, "\321\301\1\xC4\110", IF_386},
    /* 467*/ {I_LFS, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xB4\110", IF_386},
    /* 468*/ {I_LFS, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xB4\110", IF_386},
    /* 469*/ {I_LGDT, 1, {MEMORY,0,0}, "\300\2\x0F\x01\202", IF_286|IF_PRIV},
    /* 470*/ {I_LGS, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xB5\110", IF_386},
    /* 471*/ {I_LGS, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xB5\110", IF_386},
    /* 472*/ {I_LIDT, 1, {MEMORY,0,0}, "\300\2\x0F\x01\203", IF_286|IF_PRIV},
    /* 473*/ {I_LLDT, 1, {MEMORY,0,0}, "\300\1\x0F\17\202", IF_286|IF_PROT|IF_PRIV},
    /* 474*/ {I_LLDT, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\202", IF_286|IF_PROT|IF_PRIV},
    /* 475*/ {I_LLDT, 1, {REG16,0,0}, "\1\x0F\17\202", IF_286|IF_PROT|IF_PRIV},
    /* 476*/ {I_LMSW, 1, {MEMORY,0,0}, "\300\2\x0F\x01\206", IF_286|IF_PRIV},
    /* 477*/ {I_LMSW, 1, {MEMORY|BITS16,0,0}, "\300\2\x0F\x01\206", IF_286|IF_PRIV},
    /* 478*/ {I_LMSW, 1, {REG16,0,0}, "\2\x0F\x01\206", IF_286|IF_PRIV},
    /* 479*/ {I_LOADALL, 0, {0,0,0}, "\2\x0F\x07", IF_386|IF_UNDOC},
    /* 480*/ {I_LOADALL286, 0, {0,0,0}, "\2\x0F\x05", IF_286|IF_UNDOC},
    /* 481*/ {I_LODSB, 0, {0,0,0}, "\1\xAC", IF_8086},
    /* 482*/ {I_LODSD, 0, {0,0,0}, "\321\1\xAD", IF_386},
    /* 483*/ {I_LODSW, 0, {0,0,0}, "\320\1\xAD", IF_8086},
    /* 484*/ {I_LOOP, 1, {IMMEDIATE,0,0}, "\312\1\xE2\50", IF_8086},
    /* 485*/ {I_LOOP, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE2\50", IF_8086},
    /* 486*/ {I_LOOP, 2, {IMMEDIATE,REG_ECX,0}, "\311\1\xE2\50", IF_386},
    /* 487*/ {I_LOOPE, 1, {IMMEDIATE,0,0}, "\312\1\xE1\50", IF_8086},
    /* 488*/ {I_LOOPE, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE1\50", IF_8086},
    /* 489*/ {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0}, "\311\1\xE1\50", IF_386},
    /* 490*/ {I_LOOPNE, 1, {IMMEDIATE,0,0}, "\312\1\xE0\50", IF_8086},
    /* 491*/ {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE0\50", IF_8086},
    /* 492*/ {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0}, "\311\1\xE0\50", IF_386},
    /* 493*/ {I_LOOPNZ, 1, {IMMEDIATE,0,0}, "\312\1\xE0\50", IF_8086},
    /* 494*/ {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE0\50", IF_8086},
    /* 495*/ {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0}, "\311\1\xE0\50", IF_386},
    /* 496*/ {I_LOOPZ, 1, {IMMEDIATE,0,0}, "\312\1\xE1\50", IF_8086},
    /* 497*/ {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0}, "\310\1\xE1\50", IF_8086},
    /* 498*/ {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0}, "\311\1\xE1\50", IF_386},
    /* 499*/ {I_LSL, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\x03\110", IF_286|IF_PROT|IF_SM},
    /* 500*/ {I_LSL, 2, {REG16,REG16,0}, "\320\2\x0F\x03\110", IF_286|IF_PROT},
    /* 501*/ {I_LSL, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\x03\110", IF_386|IF_PROT|IF_SM},
    /* 502*/ {I_LSL, 2, {REG32,REG32,0}, "\321\2\x0F\x03\110", IF_386|IF_PROT},
    /* 503*/ {I_LSS, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xB2\110", IF_386},
    /* 504*/ {I_LSS, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\xB2\110", IF_386},
    /* 505*/ {I_LTR, 1, {MEMORY,0,0}, "\300\1\x0F\17\203", IF_286|IF_PROT|IF_PRIV},
    /* 506*/ {I_LTR, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\203", IF_286|IF_PROT|IF_PRIV},
    /* 507*/ {I_LTR, 1, {REG16,0,0}, "\1\x0F\17\203", IF_286|IF_PROT|IF_PRIV},
    /* 508*/ {I_MONITOR, 0, {0,0,0}, "\3\x0F\x01\xC8", IF_PRESCOTT},
    /* 509*/ {I_MOV, 2, {MEMORY,REG_SREG,0}, "\300\1\x8C\101", IF_8086|IF_SM},
    /* 510*/ {I_MOV, 2, {REG16,REG_SREG,0}, "\320\1\x8C\101", IF_8086},
    /* 511*/ {I_MOV, 2, {REG32,REG_SREG,0}, "\321\1\x8C\101", IF_386},
    /* 512*/ {I_MOV, 2, {REG_SREG,MEMORY,0}, "\301\1\x8E\110", IF_8086|IF_SM},
    /* 513*/ {I_MOV, 2, {REG_SREG,REG16,0}, "\1\x8E\110", IF_8086},
    /* 514*/ {I_MOV, 2, {REG_SREG,REG32,0}, "\1\x8E\110", IF_386},
    /* 515*/ {I_MOV, 2, {REG_AL,MEM_OFFS,0}, "\301\1\xA0\45", IF_8086|IF_SM},
    /* 516*/ {I_MOV, 2, {REG_AX,MEM_OFFS,0}, "\301\320\1\xA1\45", IF_8086|IF_SM},
    /* 517*/ {I_MOV, 2, {REG_EAX,MEM_OFFS,0}, "\301\321\1\xA1\45", IF_386|IF_SM},
    /* 518*/ {I_MOV, 2, {MEM_OFFS,REG_AL,0}, "\300\1\xA2\44", IF_8086|IF_SM},
    /* 519*/ {I_MOV, 2, {MEM_OFFS,REG_AX,0}, "\300\320\1\xA3\44", IF_8086|IF_SM},
    /* 520*/ {I_MOV, 2, {MEM_OFFS,REG_EAX,0}, "\300\321\1\xA3\44", IF_386|IF_SM},
    /* 521*/ {I_MOV, 2, {REG32,REG_CREG,0}, "\2\x0F\x20\101", IF_386|IF_PRIV},
    /* 522*/ {I_MOV, 2, {REG32,REG_DREG,0}, "\2\x0F\x21\101", IF_386|IF_PRIV},
    /* 523*/ {I_MOV, 2, {REG32,REG_TREG,0}, "\2\x0F\x24\101", IF_386|IF_PRIV},
    /* 524*/ {I_MOV, 2, {REG_CREG,REG32,0}, "\2\x0F\x22\110", IF_386|IF_PRIV},
    /* 525*/ {I_MOV, 2, {REG_DREG,REG32,0}, "\2\x0F\x23\110", IF_386|IF_PRIV},
    /* 526*/ {I_MOV, 2, {REG_TREG,REG32,0}, "\2\x0F\x26\110", IF_386|IF_PRIV},
    /* 527*/ {I_MOV, 2, {MEMORY,REG8,0}, "\300\1\x88\101", IF_8086|IF_SM},
    /* 528*/ {I_MOV, 2, {REG8,REG8,0}, "\1\x88\101", IF_8086},
    /* 529*/ {I_MOV, 2, {MEMORY,REG16,0}, "\320\300\1\x89\101", IF_8086|IF_SM},
    /* 530*/ {I_MOV, 2, {REG16,REG16,0}, "\320\1\x89\101", IF_8086},
    /* 531*/ {I_MOV, 2, {MEMORY,REG32,0}, "\321\300\1\x89\101", IF_386|IF_SM},
    /* 532*/ {I_MOV, 2, {REG32,REG32,0}, "\321\1\x89\101", IF_386},
    /* 533*/ {I_MOV, 2, {REG8,MEMORY,0}, "\301\1\x8A\110", IF_8086|IF_SM},
    /* 534*/ {I_MOV, 2, {REG8,REG8,0}, "\1\x8A\110", IF_8086},
    /* 535*/ {I_MOV, 2, {REG16,MEMORY,0}, "\320\301\1\x8B\110", IF_8086|IF_SM},
    /* 536*/ {I_MOV, 2, {REG16,REG16,0}, "\320\1\x8B\110", IF_8086},
    /* 537*/ {I_MOV, 2, {REG32,MEMORY,0}, "\321\301\1\x8B\110", IF_386|IF_SM},
    /* 538*/ {I_MOV, 2, {REG32,REG32,0}, "\321\1\x8B\110", IF_386},
    /* 539*/ {I_MOV, 2, {REG8,IMMEDIATE,0}, "\10\xB0\21", IF_8086|IF_SM},
    /* 540*/ {I_MOV, 2, {REG16,IMMEDIATE,0}, "\320\10\xB8\31", IF_8086|IF_SM},
    /* 541*/ {I_MOV, 2, {REG32,IMMEDIATE,0}, "\321\10\xB8\41", IF_386|IF_SM},
    /* 542*/ {I_MOV, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC6\200\21", IF_8086|IF_SM},
    /* 543*/ {I_MOV, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC7\200\31", IF_8086|IF_SM},
    /* 544*/ {I_MOV, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC7\200\41", IF_386|IF_SM},
    /* 545*/ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\xC6\200\21", IF_8086|IF_SM},
    /* 546*/ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\1\xC7\200\31", IF_8086|IF_SM},
    /* 547*/ {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\1\xC7\200\41", IF_386|IF_SM},
    /* 548*/ {I_MOVD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x6E\110", IF_PENT|IF_MMX|IF_SD},
    /* 549*/ {I_MOVD, 2, {MMXREG,REG32,0}, "\2\x0F\x6E\110", IF_PENT|IF_MMX},
    /* 550*/ {I_MOVD, 2, {MEMORY,MMXREG,0}, "\300\2\x0F\x7E\101", IF_PENT|IF_MMX|IF_SD},
    /* 551*/ {I_MOVD, 2, {REG32,MMXREG,0}, "\2\x0F\x7E\101", IF_PENT|IF_MMX},
    /* 552*/ {I_MOVQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x6F\110", IF_PENT|IF_MMX|IF_SM},
    /* 553*/ {I_MOVQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\x6F\110", IF_PENT|IF_MMX},
    /* 554*/ {I_MOVQ, 2, {MEMORY,MMXREG,0}, "\300\2\x0F\x7F\101", IF_PENT|IF_MMX|IF_SM},
    /* 555*/ {I_MOVQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\x7F\101", IF_PENT|IF_MMX},
    /* 556*/ {I_MOVSB, 0, {0,0,0}, "\1\xA4", IF_8086},
    /* 557*/ {I_MOVSD, 0, {0,0,0}, "\321\1\xA5", IF_386},
    /* 558*/ {I_MOVSW, 0, {0,0,0}, "\320\1\xA5", IF_8086},
    /* 559*/ {I_MOVSX, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xBE\110", IF_386|IF_SB},
    /* 560*/ {I_MOVSX, 2, {REG16,REG8,0}, "\320\2\x0F\xBE\110", IF_386},
    /* 561*/ {I_MOVSX, 2, {REG32,REGMEM|BITS8,0}, "\321\301\2\x0F\xBE\110", IF_386},
    /* 562*/ {I_MOVSX, 2, {REG32,REGMEM|BITS16,0}, "\321\301\2\x0F\xBF\110", IF_386},
    /* 563*/ {I_MOVZX, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\xB6\110", IF_386|IF_SB},
    /* 564*/ {I_MOVZX, 2, {REG16,REG8,0}, "\320\2\x0F\xB6\110", IF_386},
    /* 565*/ {I_MOVZX, 2, {REG32,REGMEM|BITS8,0}, "\321\301\2\x0F\xB6\110", IF_386},
    /* 566*/ {I_MOVZX, 2, {REG32,REGMEM|BITS16,0}, "\321\301\2\x0F\xB7\110", IF_386},
    /* 567*/ {I_MUL, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\204", IF_8086},
    /* 568*/ {I_MUL, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\204", IF_8086},
    /* 569*/ {I_MUL, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\204", IF_386},
    /* 570*/ {I_MWAIT, 0, {0,0,0}, "\3\x0F\x01\xC9", IF_PRESCOTT},
    /* 571*/ {I_NEG, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\203", IF_8086},
    /* 572*/ {I_NEG, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\203", IF_8086},
    /* 573*/ {I_NEG, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\203", IF_386},
    /* 574*/ {I_NOP, 0, {0,0,0}, "\1\x90", IF_8086},
    /* 575*/ {I_NOT, 1, {REGMEM|BITS8,0,0}, "\300\1\xF6\202", IF_8086},
    /* 576*/ {I_NOT, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xF7\202", IF_8086},
    /* 577*/ {I_NOT, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xF7\202", IF_386},
    /* 578*/ {I_OR, 2, {MEMORY,REG8,0}, "\300\1\x08\101", IF_8086|IF_SM},
    /* 579*/ {I_OR, 2, {REG8,REG8,0}, "\1\x08\101", IF_8086},
    /* 580*/ {I_OR, 2, {MEMORY,REG16,0}, "\320\300\1\x09\101", IF_8086|IF_SM},
    /* 581*/ {I_OR, 2, {REG16,REG16,0}, "\320\1\x09\101", IF_8086},
    /* 582*/ {I_OR, 2, {MEMORY,REG32,0}, "\321\300\1\x09\101", IF_386|IF_SM},
    /* 583*/ {I_OR, 2, {REG32,REG32,0}, "\321\1\x09\101", IF_386},
    /* 584*/ {I_OR, 2, {REG8,MEMORY,0}, "\301\1\x0A\110", IF_8086|IF_SM},
    /* 585*/ {I_OR, 2, {REG8,REG8,0}, "\1\x0A\110", IF_8086},
    /* 586*/ {I_OR, 2, {REG16,MEMORY,0}, "\320\301\1\x0B\110", IF_8086|IF_SM},
    /* 587*/ {I_OR, 2, {REG16,REG16,0}, "\320\1\x0B\110", IF_8086},
    /* 588*/ {I_OR, 2, {REG32,MEMORY,0}, "\321\301\1\x0B\110", IF_386|IF_SM},
    /* 589*/ {I_OR, 2, {REG32,REG32,0}, "\321\1\x0B\110", IF_386},
    /* 590*/ {I_OR, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\201\15", IF_8086},
    /* 591*/ {I_OR, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\201\15", IF_386},
    /* 592*/ {I_OR, 2, {REG_AL,IMMEDIATE,0}, "\1\x0C\21", IF_8086|IF_SM},
    /* 593*/ {I_OR, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x0D\31", IF_8086|IF_SM},
    /* 594*/ {I_OR, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x0D\41", IF_386|IF_SM},
    /* 595*/ {I_OR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\201\21", IF_8086|IF_SM},
    /* 596*/ {I_OR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\201\131", IF_8086|IF_SM},
    /* 597*/ {I_OR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\201\141", IF_386|IF_SM},
    /* 598*/ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\201\21", IF_8086|IF_SM},
    /* 599*/ {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\201\131", IF_8086|IF_SM},
    /* 600*/ {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\201\141", IF_386|IF_SM},
    /* 601*/ {I_OUT, 2, {IMMEDIATE,REG_AL,0}, "\1\xE6\24", IF_8086|IF_SB},
    /* 602*/ {I_OUT, 2, {IMMEDIATE,REG_AX,0}, "\320\1\xE7\24", IF_8086|IF_SB},
    /* 603*/ {I_OUT, 2, {IMMEDIATE,REG_EAX,0}, "\321\1\xE7\24", IF_386|IF_SB},
    /* 604*/ {I_OUT, 2, {REG_DX,REG_AL,0}, "\1\xEE", IF_8086},
    /* 605*/ {I_OUT, 2, {REG_DX,REG_AX,0}, "\320\1\xEF", IF_8086},
    /* 606*/ {I_OUT, 2, {REG_DX,REG_EAX,0}, "\321\1\xEF", IF_386},
    /* 607*/ {I_OUTSB, 0, {0,0,0}, "\1\x6E", IF_186},
    /* 608*/ {I_OUTSD, 0, {0,0,0}, "\321\1\x6F", IF_386},
    /* 609*/ {I_OUTSW, 0, {0,0,0}, "\320\1\x6F", IF_186},
    /* 610*/ {I_PACKSSDW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x6B\110", IF_PENT|IF_MMX|IF_SM},
    /* 611*/ {I_PACKSSDW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x6B\110", IF_PENT|IF_MMX},
    /* 612*/ {I_PACKSSWB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x63\110", IF_PENT|IF_MMX|IF_SM},
    /* 613*/ {I_PACKSSWB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x63\110", IF_PENT|IF_MMX},
    /* 614*/ {I_PACKUSWB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x67\110", IF_PENT|IF_MMX|IF_SM},
    /* 615*/ {I_PACKUSWB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x67\110", IF_PENT|IF_MMX},
    /* 616*/ {I_PADDB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xFC\110", IF_PENT|IF_MMX|IF_SM},
    /* 617*/ {I_PADDB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xFC\110", IF_PENT|IF_MMX},
    /* 618*/ {I_PADDD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xFE\110", IF_PENT|IF_MMX|IF_SM},
    /* 619*/ {I_PADDD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xFE\110", IF_PENT|IF_MMX},
    /* 620*/ {I_PADDSB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xEC\110", IF_PENT|IF_MMX|IF_SM},
    /* 621*/ {I_PADDSB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xEC\110", IF_PENT|IF_MMX},
    /* 622*/ {I_PADDSIW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x51\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 623*/ {I_PADDSIW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x51\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 624*/ {I_PADDSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xED\110", IF_PENT|IF_MMX|IF_SM},
    /* 625*/ {I_PADDSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xED\110", IF_PENT|IF_MMX},
    /* 626*/ {I_PADDUSB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDC\110", IF_PENT|IF_MMX|IF_SM},
    /* 627*/ {I_PADDUSB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDC\110", IF_PENT|IF_MMX},
    /* 628*/ {I_PADDUSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDD\110", IF_PENT|IF_MMX|IF_SM},
    /* 629*/ {I_PADDUSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDD\110", IF_PENT|IF_MMX},
    /* 630*/ {I_PADDW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xFD\110", IF_PENT|IF_MMX|IF_SM},
    /* 631*/ {I_PADDW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xFD\110", IF_PENT|IF_MMX},
    /* 632*/ {I_PAND, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDB\110", IF_PENT|IF_MMX|IF_SM},
    /* 633*/ {I_PAND, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDB\110", IF_PENT|IF_MMX},
    /* 634*/ {I_PANDN, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDF\110", IF_PENT|IF_MMX|IF_SM},
    /* 635*/ {I_PANDN, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDF\110", IF_PENT|IF_MMX},
    /* 636*/ {I_PAVEB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x50\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 637*/ {I_PAVEB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x50\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 638*/ {I_PAVGUSB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xBF", IF_PENT|IF_3DNOW|IF_SM},
    /* 639*/ {I_PAVGUSB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xBF", IF_PENT|IF_3DNOW},
    /* 640*/ {I_PCMPEQB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x74\110", IF_PENT|IF_MMX|IF_SM},
    /* 641*/ {I_PCMPEQB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x74\110", IF_PENT|IF_MMX},
    /* 642*/ {I_PCMPEQD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x76\110", IF_PENT|IF_MMX|IF_SM},
    /* 643*/ {I_PCMPEQD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x76\110", IF_PENT|IF_MMX},
    /* 644*/ {I_PCMPEQW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x75\110", IF_PENT|IF_MMX|IF_SM},
    /* 645*/ {I_PCMPEQW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x75\110", IF_PENT|IF_MMX},
    /* 646*/ {I_PCMPGTB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x64\110", IF_PENT|IF_MMX|IF_SM},
    /* 647*/ {I_PCMPGTB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x64\110", IF_PENT|IF_MMX},
    /* 648*/ {I_PCMPGTD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x66\110", IF_PENT|IF_MMX|IF_SM},
    /* 649*/ {I_PCMPGTD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x66\110", IF_PENT|IF_MMX},
    /* 650*/ {I_PCMPGTW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x65\110", IF_PENT|IF_MMX|IF_SM},
    /* 651*/ {I_PCMPGTW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x65\110", IF_PENT|IF_MMX},
    /* 652*/ {I_PDISTIB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x54\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 653*/ {I_PF2ID, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x1D", IF_PENT|IF_3DNOW|IF_SM},
    /* 654*/ {I_PF2ID, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x1D", IF_PENT|IF_3DNOW},
    /* 655*/ {I_PFACC, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xAE", IF_PENT|IF_3DNOW|IF_SM},
    /* 656*/ {I_PFACC, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xAE", IF_PENT|IF_3DNOW},
    /* 657*/ {I_PFADD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x9E", IF_PENT|IF_3DNOW|IF_SM},
    /* 658*/ {I_PFADD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x9E", IF_PENT|IF_3DNOW},
    /* 659*/ {I_PFCMPEQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xB0", IF_PENT|IF_3DNOW|IF_SM},
    /* 660*/ {I_PFCMPEQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xB0", IF_PENT|IF_3DNOW},
    /* 661*/ {I_PFCMPGE, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x90", IF_PENT|IF_3DNOW|IF_SM},
    /* 662*/ {I_PFCMPGE, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x90", IF_PENT|IF_3DNOW},
    /* 663*/ {I_PFCMPGT, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xA0", IF_PENT|IF_3DNOW|IF_SM},
    /* 664*/ {I_PFCMPGT, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xA0", IF_PENT|IF_3DNOW},
    /* 665*/ {I_PFMAX, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xA4", IF_PENT|IF_3DNOW|IF_SM},
    /* 666*/ {I_PFMAX, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xA4", IF_PENT|IF_3DNOW},
    /* 667*/ {I_PFMIN, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x94", IF_PENT|IF_3DNOW|IF_SM},
    /* 668*/ {I_PFMIN, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x94", IF_PENT|IF_3DNOW},
    /* 669*/ {I_PFMUL, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xB4", IF_PENT|IF_3DNOW|IF_SM},
    /* 670*/ {I_PFMUL, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xB4", IF_PENT|IF_3DNOW},
    /* 671*/ {I_PFRCP, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x96", IF_PENT|IF_3DNOW|IF_SM},
    /* 672*/ {I_PFRCP, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x96", IF_PENT|IF_3DNOW},
    /* 673*/ {I_PFRCPIT1, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xA6", IF_PENT|IF_3DNOW|IF_SM},
    /* 674*/ {I_PFRCPIT1, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xA6", IF_PENT|IF_3DNOW},
    /* 675*/ {I_PFRCPIT2, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xB6", IF_PENT|IF_3DNOW|IF_SM},
    /* 676*/ {I_PFRCPIT2, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xB6", IF_PENT|IF_3DNOW},
    /* 677*/ {I_PFRSQIT1, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xA7", IF_PENT|IF_3DNOW|IF_SM},
    /* 678*/ {I_PFRSQIT1, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xA7", IF_PENT|IF_3DNOW},
    /* 679*/ {I_PFRSQRT, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x97", IF_PENT|IF_3DNOW|IF_SM},
    /* 680*/ {I_PFRSQRT, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x97", IF_PENT|IF_3DNOW},
    /* 681*/ {I_PFSUB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x9A", IF_PENT|IF_3DNOW|IF_SM},
    /* 682*/ {I_PFSUB, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x9A", IF_PENT|IF_3DNOW},
    /* 683*/ {I_PFSUBR, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xAA", IF_PENT|IF_3DNOW|IF_SM},
    /* 684*/ {I_PFSUBR, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xAA", IF_PENT|IF_3DNOW},
    /* 685*/ {I_PI2FD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x0D", IF_PENT|IF_3DNOW|IF_SM},
    /* 686*/ {I_PI2FD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x0D", IF_PENT|IF_3DNOW},
    /* 687*/ {I_PMACHRIW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x5E\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 688*/ {I_PMADDWD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF5\110", IF_PENT|IF_MMX|IF_SM},
    /* 689*/ {I_PMADDWD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF5\110", IF_PENT|IF_MMX},
    /* 690*/ {I_PMAGW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x52\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 691*/ {I_PMAGW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x52\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 692*/ {I_PMULHRIW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x5D\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 693*/ {I_PMULHRIW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x5D\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 694*/ {I_PMULHRWA, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\1\xB7", IF_PENT|IF_3DNOW|IF_SM},
    /* 695*/ {I_PMULHRWA, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\1\xB7", IF_PENT|IF_3DNOW},
    /* 696*/ {I_PMULHRWC, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x59\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 697*/ {I_PMULHRWC, 2, {MMXREG,MMXREG,0}, "\2\x0F\x59\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 698*/ {I_PMULHW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE5\110", IF_PENT|IF_MMX|IF_SM},
    /* 699*/ {I_PMULHW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE5\110", IF_PENT|IF_MMX},
    /* 700*/ {I_PMULLW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD5\110", IF_PENT|IF_MMX|IF_SM},
    /* 701*/ {I_PMULLW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD5\110", IF_PENT|IF_MMX},
    /* 702*/ {I_PMVGEZB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x5C\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 703*/ {I_PMVLZB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x5B\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 704*/ {I_PMVNZB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x5A\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 705*/ {I_PMVZB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x58\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 706*/ {I_POP, 1, {REG16,0,0}, "\320\10\x58", IF_8086},
    /* 707*/ {I_POP, 1, {REG32,0,0}, "\321\10\x58", IF_386},
    /* 708*/ {I_POP, 1, {REGMEM|BITS16,0,0}, "\320\300\1\x8F\200", IF_8086},
    /* 709*/ {I_POP, 1, {REGMEM|BITS32,0,0}, "\321\300\1\x8F\200", IF_386},
    /* 710*/ {I_POP, 1, {REG_DESS,0,0}, "\4", IF_8086},
    /* 711*/ {I_POP, 1, {REG_FSGS,0,0}, "\1\x0F\5", IF_386},
    /* 712*/ {I_POPA, 0, {0,0,0}, "\322\1\x61", IF_186},
    /* 713*/ {I_POPAD, 0, {0,0,0}, "\321\1\x61", IF_386},
    /* 714*/ {I_POPAW, 0, {0,0,0}, "\320\1\x61", IF_186},
    /* 715*/ {I_POPF, 0, {0,0,0}, "\322\1\x9D", IF_8086},
    /* 716*/ {I_POPFD, 0, {0,0,0}, "\321\1\x9D", IF_386},
    /* 717*/ {I_POPFW, 0, {0,0,0}, "\320\1\x9D", IF_8086},
    /* 718*/ {I_POR, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xEB\110", IF_PENT|IF_MMX|IF_SM},
    /* 719*/ {I_POR, 2, {MMXREG,MMXREG,0}, "\2\x0F\xEB\110", IF_PENT|IF_MMX},
    /* 720*/ {I_PREFETCH, 1, {MEMORY,0,0}, "\2\x0F\x0D\200", IF_PENT|IF_3DNOW|IF_SM},
    /* 721*/ {I_PREFETCHW, 1, {MEMORY,0,0}, "\2\x0F\x0D\201", IF_PENT|IF_3DNOW|IF_SM},
    /* 722*/ {I_PSLLD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF2\110", IF_PENT|IF_MMX|IF_SM},
    /* 723*/ {I_PSLLD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF2\110", IF_PENT|IF_MMX},
    /* 724*/ {I_PSLLD, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x72\206\25", IF_PENT|IF_MMX},
    /* 725*/ {I_PSLLQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF3\110", IF_PENT|IF_MMX|IF_SM},
    /* 726*/ {I_PSLLQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF3\110", IF_PENT|IF_MMX},
    /* 727*/ {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x73\206\25", IF_PENT|IF_MMX},
    /* 728*/ {I_PSLLW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF1\110", IF_PENT|IF_MMX|IF_SM},
    /* 729*/ {I_PSLLW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF1\110", IF_PENT|IF_MMX},
    /* 730*/ {I_PSLLW, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x71\206\25", IF_PENT|IF_MMX},
    /* 731*/ {I_PSRAD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE2\110", IF_PENT|IF_MMX|IF_SM},
    /* 732*/ {I_PSRAD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE2\110", IF_PENT|IF_MMX},
    /* 733*/ {I_PSRAD, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x72\204\25", IF_PENT|IF_MMX},
    /* 734*/ {I_PSRAW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE1\110", IF_PENT|IF_MMX|IF_SM},
    /* 735*/ {I_PSRAW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE1\110", IF_PENT|IF_MMX},
    /* 736*/ {I_PSRAW, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x71\204\25", IF_PENT|IF_MMX},
    /* 737*/ {I_PSRLD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD2\110", IF_PENT|IF_MMX|IF_SM},
    /* 738*/ {I_PSRLD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD2\110", IF_PENT|IF_MMX},
    /* 739*/ {I_PSRLD, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x72\202\25", IF_PENT|IF_MMX},
    /* 740*/ {I_PSRLQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD3\110", IF_PENT|IF_MMX|IF_SM},
    /* 741*/ {I_PSRLQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD3\110", IF_PENT|IF_MMX},
    /* 742*/ {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x73\202\25", IF_PENT|IF_MMX},
    /* 743*/ {I_PSRLW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD1\110", IF_PENT|IF_MMX|IF_SM},
    /* 744*/ {I_PSRLW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD1\110", IF_PENT|IF_MMX},
    /* 745*/ {I_PSRLW, 2, {MMXREG,IMMEDIATE,0}, "\2\x0F\x71\202\25", IF_PENT|IF_MMX},
    /* 746*/ {I_PSUBB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF8\110", IF_PENT|IF_MMX|IF_SM},
    /* 747*/ {I_PSUBB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF8\110", IF_PENT|IF_MMX},
    /* 748*/ {I_PSUBD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xFA\110", IF_PENT|IF_MMX|IF_SM},
    /* 749*/ {I_PSUBD, 2, {MMXREG,MMXREG,0}, "\2\x0F\xFA\110", IF_PENT|IF_MMX},
    /* 750*/ {I_PSUBSB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE8\110", IF_PENT|IF_MMX|IF_SM},
    /* 751*/ {I_PSUBSB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE8\110", IF_PENT|IF_MMX},
    /* 752*/ {I_PSUBSIW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x55\110", IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    /* 753*/ {I_PSUBSIW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x55\110", IF_PENT|IF_MMX|IF_CYRIX},
    /* 754*/ {I_PSUBSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE9\110", IF_PENT|IF_MMX|IF_SM},
    /* 755*/ {I_PSUBSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE9\110", IF_PENT|IF_MMX},
    /* 756*/ {I_PSUBUSB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD8\110", IF_PENT|IF_MMX|IF_SM},
    /* 757*/ {I_PSUBUSB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD8\110", IF_PENT|IF_MMX},
    /* 758*/ {I_PSUBUSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD9\110", IF_PENT|IF_MMX|IF_SM},
    /* 759*/ {I_PSUBUSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD9\110", IF_PENT|IF_MMX},
    /* 760*/ {I_PSUBW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF9\110", IF_PENT|IF_MMX|IF_SM},
    /* 761*/ {I_PSUBW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF9\110", IF_PENT|IF_MMX},
    /* 762*/ {I_PUNPCKHBW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x68\110", IF_PENT|IF_MMX|IF_SM},
    /* 763*/ {I_PUNPCKHBW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x68\110", IF_PENT|IF_MMX},
    /* 764*/ {I_PUNPCKHDQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x6A\110", IF_PENT|IF_MMX|IF_SM},
    /* 765*/ {I_PUNPCKHDQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\x6A\110", IF_PENT|IF_MMX},
    /* 766*/ {I_PUNPCKHWD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x69\110", IF_PENT|IF_MMX|IF_SM},
    /* 767*/ {I_PUNPCKHWD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x69\110", IF_PENT|IF_MMX},
    /* 768*/ {I_PUNPCKLBW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x60\110", IF_PENT|IF_MMX|IF_SM},
    /* 769*/ {I_PUNPCKLBW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x60\110", IF_PENT|IF_MMX},
    /* 770*/ {I_PUNPCKLDQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x62\110", IF_PENT|IF_MMX|IF_SM},
    /* 771*/ {I_PUNPCKLDQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\x62\110", IF_PENT|IF_MMX},
    /* 772*/ {I_PUNPCKLWD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x61\110", IF_PENT|IF_MMX|IF_SM},
    /* 773*/ {I_PUNPCKLWD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x61\110", IF_PENT|IF_MMX},
    /* 774*/ {I_PUSH, 1, {REG16,0,0}, "\320\10\x50", IF_8086},
    /* 775*/ {I_PUSH, 1, {REG32,0,0}, "\321\10\x50", IF_386},
    /* 776*/ {I_PUSH, 1, {REGMEM|BITS16,0,0}, "\320\300\1\xFF\206", IF_8086},
    /* 777*/ {I_PUSH, 1, {REGMEM|BITS32,0,0}, "\321\300\1\xFF\206", IF_386},
    /* 778*/ {I_PUSH, 1, {REG_CS,0,0}, "\6", IF_8086},
    /* 779*/ {I_PUSH, 1, {REG_DESS,0,0}, "\6", IF_8086},
    /* 780*/ {I_PUSH, 1, {REG_FSGS,0,0}, "\1\x0F\7", IF_386},
    /* 781*/ {I_PUSH, 1, {IMMEDIATE|BITS8,0,0}, "\1\x6A\14", IF_186},
    /* 782*/ {I_PUSH, 1, {IMMEDIATE|BITS16,0,0}, "\320\133\1\x68\130", IF_186},
    /* 783*/ {I_PUSH, 1, {IMMEDIATE|BITS32,0,0}, "\321\143\1\x68\140", IF_386},
    /* 784*/ {I_PUSH, 1, {IMMEDIATE,0,0}, "\1\x68\34", IF_186},
    /* 785*/ {I_PUSHA, 0, {0,0,0}, "\322\1\x60", IF_186},
    /* 786*/ {I_PUSHAD, 0, {0,0,0}, "\321\1\x60", IF_386},
    /* 787*/ {I_PUSHAW, 0, {0,0,0}, "\320\1\x60", IF_186},
    /* 788*/ {I_PUSHF, 0, {0,0,0}, "\322\1\x9C", IF_8086},
    /* 789*/ {I_PUSHFD, 0, {0,0,0}, "\321\1\x9C", IF_386},
    /* 790*/ {I_PUSHFW, 0, {0,0,0}, "\320\1\x9C", IF_8086},
    /* 791*/ {I_PXOR, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xEF\110", IF_PENT|IF_MMX|IF_SM},
    /* 792*/ {I_PXOR, 2, {MMXREG,MMXREG,0}, "\2\x0F\xEF\110", IF_PENT|IF_MMX},
    /* 793*/ {I_RCL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\202", IF_8086},
    /* 794*/ {I_RCL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\202", IF_8086},
    /* 795*/ {I_RCL, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\202\25", IF_186|IF_SB},
    /* 796*/ {I_RCL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\202", IF_8086},
    /* 797*/ {I_RCL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\202", IF_8086},
    /* 798*/ {I_RCL, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\202\25", IF_186|IF_SB},
    /* 799*/ {I_RCL, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\202", IF_386},
    /* 800*/ {I_RCL, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\202", IF_386},
    /* 801*/ {I_RCL, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\202\25", IF_386|IF_SB},
    /* 802*/ {I_RCR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\203", IF_8086},
    /* 803*/ {I_RCR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\203", IF_8086},
    /* 804*/ {I_RCR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\203\25", IF_186|IF_SB},
    /* 805*/ {I_RCR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\203", IF_8086},
    /* 806*/ {I_RCR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\203", IF_8086},
    /* 807*/ {I_RCR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\203\25", IF_186|IF_SB},
    /* 808*/ {I_RCR, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\203", IF_386},
    /* 809*/ {I_RCR, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\203", IF_386},
    /* 810*/ {I_RCR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\203\25", IF_386|IF_SB},
    /* 811*/ {I_RDSHR, 1, {REGMEM|BITS32,0,0}, "\321\300\2\x0F\x36\200", IF_P6|IF_CYRIX|IF_SMM},
    /* 812*/ {I_RDMSR, 0, {0,0,0}, "\2\x0F\x32", IF_PENT|IF_PRIV},
    /* 813*/ {I_RDPMC, 0, {0,0,0}, "\2\x0F\x33", IF_P6},
    /* 814*/ {I_RDTSC, 0, {0,0,0}, "\2\x0F\x31", IF_PENT},
    /* 815*/ {I_RESB, 1, {IMMEDIATE,0,0}, "\340", IF_8086},
    /* 816*/ {I_RET, 0, {0,0,0}, "\1\xC3", IF_8086},
    /* 817*/ {I_RET, 1, {IMMEDIATE,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    /* 818*/ {I_RETF, 0, {0,0,0}, "\1\xCB", IF_8086},
    /* 819*/ {I_RETF, 1, {IMMEDIATE,0,0}, "\1\xCA\30", IF_8086|IF_SW},
    /* 820*/ {I_RETN, 0, {0,0,0}, "\1\xC3", IF_8086},
    /* 821*/ {I_RETN, 1, {IMMEDIATE,0,0}, "\1\xC2\30", IF_8086|IF_SW},
    /* 822*/ {I_ROL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\200", IF_8086},
    /* 823*/ {I_ROL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\200", IF_8086},
    /* 824*/ {I_ROL, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\200\25", IF_186|IF_SB},
    /* 825*/ {I_ROL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\200", IF_8086},
    /* 826*/ {I_ROL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\200", IF_8086},
    /* 827*/ {I_ROL, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\200\25", IF_186|IF_SB},
    /* 828*/ {I_ROL, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\200", IF_386},
    /* 829*/ {I_ROL, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\200", IF_386},
    /* 830*/ {I_ROL, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\200\25", IF_386|IF_SB},
    /* 831*/ {I_ROR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\201", IF_8086},
    /* 832*/ {I_ROR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\201", IF_8086},
    /* 833*/ {I_ROR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\201\25", IF_186|IF_SB},
    /* 834*/ {I_ROR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\201", IF_8086},
    /* 835*/ {I_ROR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\201", IF_8086},
    /* 836*/ {I_ROR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\201\25", IF_186|IF_SB},
    /* 837*/ {I_ROR, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\201", IF_386},
    /* 838*/ {I_ROR, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\201", IF_386},
    /* 839*/ {I_ROR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\201\25", IF_386|IF_SB},
    /* 840*/ {I_RSDC, 2, {REG_SREG,MEMORY|BITS80,0}, "\301\2\x0F\x79\110", IF_486|IF_CYRIX|IF_SMM},
    /* 841*/ {I_RSLDT, 1, {MEMORY|BITS80,0,0}, "\300\2\x0F\x7B\200", IF_486|IF_CYRIX|IF_SMM},
    /* 842*/ {I_RSM, 0, {0,0,0}, "\2\x0F\xAA", IF_PENT|IF_SMM},
    /* 843*/ {I_RSTS, 1, {MEMORY|BITS80,0,0}, "\300\2\x0F\x7D\200", IF_486|IF_CYRIX|IF_SMM},
    /* 844*/ {I_SAHF, 0, {0,0,0}, "\1\x9E", IF_8086},
    /* 845*/ {I_SALC, 0, {0,0,0}, "\1\xD6", IF_8086|IF_UNDOC},
    /* 846*/ {I_SAR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\207", IF_8086},
    /* 847*/ {I_SAR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\207", IF_8086},
    /* 848*/ {I_SAR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\207\25", IF_186|IF_SB},
    /* 849*/ {I_SAR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\207", IF_8086},
    /* 850*/ {I_SAR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\207", IF_8086},
    /* 851*/ {I_SAR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\207\25", IF_186|IF_SB},
    /* 852*/ {I_SAR, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\207", IF_386},
    /* 853*/ {I_SAR, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\207", IF_386},
    /* 854*/ {I_SAR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\207\25", IF_386|IF_SB},
    /* 855*/ {I_SBB, 2, {MEMORY,REG8,0}, "\300\1\x18\101", IF_8086|IF_SM},
    /* 856*/ {I_SBB, 2, {REG8,REG8,0}, "\1\x18\101", IF_8086},
    /* 857*/ {I_SBB, 2, {MEMORY,REG16,0}, "\320\300\1\x19\101", IF_8086|IF_SM},
    /* 858*/ {I_SBB, 2, {REG16,REG16,0}, "\320\1\x19\101", IF_8086},
    /* 859*/ {I_SBB, 2, {MEMORY,REG32,0}, "\321\300\1\x19\101", IF_386|IF_SM},
    /* 860*/ {I_SBB, 2, {REG32,REG32,0}, "\321\1\x19\101", IF_386},
    /* 861*/ {I_SBB, 2, {REG8,MEMORY,0}, "\301\1\x1A\110", IF_8086|IF_SM},
    /* 862*/ {I_SBB, 2, {REG8,REG8,0}, "\1\x1A\110", IF_8086},
    /* 863*/ {I_SBB, 2, {REG16,MEMORY,0}, "\320\301\1\x1B\110", IF_8086|IF_SM},
    /* 864*/ {I_SBB, 2, {REG16,REG16,0}, "\320\1\x1B\110", IF_8086},
    /* 865*/ {I_SBB, 2, {REG32,MEMORY,0}, "\321\301\1\x1B\110", IF_386|IF_SM},
    /* 866*/ {I_SBB, 2, {REG32,REG32,0}, "\321\1\x1B\110", IF_386},
    /* 867*/ {I_SBB, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\203\15", IF_8086},
    /* 868*/ {I_SBB, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\203\15", IF_386},
    /* 869*/ {I_SBB, 2, {REG_AL,IMMEDIATE,0}, "\1\x1C\21", IF_8086|IF_SM},
    /* 870*/ {I_SBB, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x1D\31", IF_8086|IF_SM},
    /* 871*/ {I_SBB, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x1D\41", IF_386|IF_SM},
    /* 872*/ {I_SBB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\203\21", IF_8086|IF_SM},
    /* 873*/ {I_SBB, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\203\131", IF_8086|IF_SM},
    /* 874*/ {I_SBB, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\203\141", IF_386|IF_SM},
    /* 875*/ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\203\21", IF_8086|IF_SM},
    /* 876*/ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\203\131", IF_8086|IF_SM},
    /* 877*/ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\203\141", IF_386|IF_SM},
    /* 878*/ {I_SCASB, 0, {0,0,0}, "\332\1\xAE", IF_8086},
    /* 879*/ {I_SCASD, 0, {0,0,0}, "\332\321\1\xAF", IF_386},
    /* 880*/ {I_SCASW, 0, {0,0,0}, "\332\320\1\xAF", IF_8086},
    /* 881*/ {I_SGDT, 1, {MEMORY,0,0}, "\300\2\x0F\x01\200", IF_286},
    /* 882*/ {I_SHL, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\204", IF_8086},
    /* 883*/ {I_SHL, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\204", IF_8086},
    /* 884*/ {I_SHL, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\204\25", IF_186|IF_SB},
    /* 885*/ {I_SHL, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\204", IF_8086},
    /* 886*/ {I_SHL, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\204", IF_8086},
    /* 887*/ {I_SHL, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\204\25", IF_186|IF_SB},
    /* 888*/ {I_SHL, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\204", IF_386},
    /* 889*/ {I_SHL, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\204", IF_386},
    /* 890*/ {I_SHL, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\204\25", IF_386|IF_SB},
    /* 891*/ {I_SHLD, 3, {MEMORY,REG16,IMMEDIATE}, "\300\320\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 892*/ {I_SHLD, 3, {REG16,REG16,IMMEDIATE}, "\320\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 893*/ {I_SHLD, 3, {MEMORY,REG32,IMMEDIATE}, "\300\321\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 894*/ {I_SHLD, 3, {REG32,REG32,IMMEDIATE}, "\321\2\x0F\xA4\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 895*/ {I_SHLD, 3, {MEMORY,REG16,REG_CL}, "\300\320\2\x0F\xA5\101", IF_386|IF_SM},
    /* 896*/ {I_SHLD, 3, {REG16,REG16,REG_CL}, "\320\2\x0F\xA5\101", IF_386},
    /* 897*/ {I_SHLD, 3, {MEMORY,REG32,REG_CL}, "\300\321\2\x0F\xA5\101", IF_386|IF_SM},
    /* 898*/ {I_SHLD, 3, {REG32,REG32,REG_CL}, "\321\2\x0F\xA5\101", IF_386},
    /* 899*/ {I_SHR, 2, {REGMEM|BITS8,UNITY,0}, "\300\1\xD0\205", IF_8086},
    /* 900*/ {I_SHR, 2, {REGMEM|BITS8,REG_CL,0}, "\300\1\xD2\205", IF_8086},
    /* 901*/ {I_SHR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xC0\205\25", IF_186|IF_SB},
    /* 902*/ {I_SHR, 2, {REGMEM|BITS16,UNITY,0}, "\320\300\1\xD1\205", IF_8086},
    /* 903*/ {I_SHR, 2, {REGMEM|BITS16,REG_CL,0}, "\320\300\1\xD3\205", IF_8086},
    /* 904*/ {I_SHR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xC1\205\25", IF_186|IF_SB},
    /* 905*/ {I_SHR, 2, {REGMEM|BITS32,UNITY,0}, "\321\300\1\xD1\205", IF_386},
    /* 906*/ {I_SHR, 2, {REGMEM|BITS32,REG_CL,0}, "\321\300\1\xD3\205", IF_386},
    /* 907*/ {I_SHR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xC1\205\25", IF_386|IF_SB},
    /* 908*/ {I_SHRD, 3, {MEMORY,REG16,IMMEDIATE}, "\300\320\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 909*/ {I_SHRD, 3, {REG16,REG16,IMMEDIATE}, "\320\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 910*/ {I_SHRD, 3, {MEMORY,REG32,IMMEDIATE}, "\300\321\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 911*/ {I_SHRD, 3, {REG32,REG32,IMMEDIATE}, "\321\2\x0F\xAC\101\26", IF_386|IF_SM2|IF_SB|IF_AR2},
    /* 912*/ {I_SHRD, 3, {MEMORY,REG16,REG_CL}, "\300\320\2\x0F\xAD\101", IF_386|IF_SM},
    /* 913*/ {I_SHRD, 3, {REG16,REG16,REG_CL}, "\320\2\x0F\xAD\101", IF_386},
    /* 914*/ {I_SHRD, 3, {MEMORY,REG32,REG_CL}, "\300\321\2\x0F\xAD\101", IF_386|IF_SM},
    /* 915*/ {I_SHRD, 3, {REG32,REG32,REG_CL}, "\321\2\x0F\xAD\101", IF_386},
    /* 916*/ {I_SIDT, 1, {MEMORY,0,0}, "\300\2\x0F\x01\201", IF_286},
    /* 917*/ {I_SLDT, 1, {MEMORY,0,0}, "\300\1\x0F\17\200", IF_286},
    /* 918*/ {I_SLDT, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\200", IF_286},
    /* 919*/ {I_SLDT, 1, {REG16,0,0}, "\320\1\x0F\17\200", IF_286},
    /* 920*/ {I_SLDT, 1, {REG32,0,0}, "\321\1\x0F\17\200", IF_386},
    /* 921*/ {I_SMI, 0, {0,0,0}, "\1\xF1", IF_386|IF_UNDOC},
    /* 922*/ {I_SMINT, 0, {0,0,0}, "\2\x0F\x38", IF_P6|IF_CYRIX},
    /* 923*/ {I_SMSW, 1, {MEMORY,0,0}, "\300\2\x0F\x01\204", IF_286},
    /* 924*/ {I_SMSW, 1, {MEMORY|BITS16,0,0}, "\300\2\x0F\x01\204", IF_286},
    /* 925*/ {I_SMSW, 1, {REG16,0,0}, "\320\2\x0F\x01\204", IF_286},
    /* 926*/ {I_SMSW, 1, {REG32,0,0}, "\321\2\x0F\x01\204", IF_386},
    /* 927*/ {I_STC, 0, {0,0,0}, "\1\xF9", IF_8086},
    /* 928*/ {I_STD, 0, {0,0,0}, "\1\xFD", IF_8086},
    /* 929*/ {I_STI, 0, {0,0,0}, "\1\xFB", IF_8086},
    /* 930*/ {I_STOSB, 0, {0,0,0}, "\1\xAA", IF_8086},
    /* 931*/ {I_STOSD, 0, {0,0,0}, "\321\1\xAB", IF_386},
    /* 932*/ {I_STOSW, 0, {0,0,0}, "\320\1\xAB", IF_8086},
    /* 933*/ {I_STR, 1, {MEMORY,0,0}, "\300\1\x0F\17\201", IF_286|IF_PROT},
    /* 934*/ {I_STR, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\201", IF_286|IF_PROT},
    /* 935*/ {I_STR, 1, {REG16,0,0}, "\320\1\x0F\17\201", IF_286|IF_PROT},
    /* 936*/ {I_STR, 1, {REG32,0,0}, "\321\1\x0F\17\201", IF_386|IF_PROT},
    /* 937*/ {I_SUB, 2, {MEMORY,REG8,0}, "\300\1\x28\101", IF_8086|IF_SM},
    /* 938*/ {I_SUB, 2, {REG8,REG8,0}, "\1\x28\101", IF_8086},
    /* 939*/ {I_SUB, 2, {MEMORY,REG16,0}, "\320\300\1\x29\101", IF_8086|IF_SM},
    /* 940*/ {I_SUB, 2, {REG16,REG16,0}, "\320\1\x29\101", IF_8086},
    /* 941*/ {I_SUB, 2, {MEMORY,REG32,0}, "\321\300\1\x29\101", IF_386|IF_SM},
    /* 942*/ {I_SUB, 2, {REG32,REG32,0}, "\321\1\x29\101", IF_386},
    /* 943*/ {I_SUB, 2, {REG8,MEMORY,0}, "\301\1\x2A\110", IF_8086|IF_SM},
    /* 944*/ {I_SUB, 2, {REG8,REG8,0}, "\1\x2A\110", IF_8086},
    /* 945*/ {I_SUB, 2, {REG16,MEMORY,0}, "\320\301\1\x2B\110", IF_8086|IF_SM},
    /* 946*/ {I_SUB, 2, {REG16,REG16,0}, "\320\1\x2B\110", IF_8086},
    /* 947*/ {I_SUB, 2, {REG32,MEMORY,0}, "\321\301\1\x2B\110", IF_386|IF_SM},
    /* 948*/ {I_SUB, 2, {REG32,REG32,0}, "\321\1\x2B\110", IF_386},
    /* 949*/ {I_SUB, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\205\15", IF_8086},
    /* 950*/ {I_SUB, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\205\15", IF_386},
    /* 951*/ {I_SUB, 2, {REG_AL,IMMEDIATE,0}, "\1\x2C\21", IF_8086|IF_SM},
    /* 952*/ {I_SUB, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x2D\31", IF_8086|IF_SM},
    /* 953*/ {I_SUB, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x2D\41", IF_386|IF_SM},
    /* 954*/ {I_SUB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\205\21", IF_8086|IF_SM},
    /* 955*/ {I_SUB, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\205\131", IF_8086|IF_SM},
    /* 956*/ {I_SUB, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\205\141", IF_386|IF_SM},
    /* 957*/ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\205\21", IF_8086|IF_SM},
    /* 958*/ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\205\131", IF_8086|IF_SM},
    /* 959*/ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\205\141", IF_386|IF_SM},
    /* 960*/ {I_SVDC, 2, {MEMORY|BITS80,REG_SREG,0}, "\300\2\x0F\x78\101", IF_486|IF_CYRIX|IF_SMM},
    /* 961*/ {I_SVLDT, 1, {MEMORY|BITS80,0,0}, "\300\2\x0F\x7A\200", IF_486|IF_CYRIX|IF_SMM},
    /* 962*/ {I_SVTS, 1, {MEMORY|BITS80,0,0}, "\300\2\x0F\x7C\200", IF_486|IF_CYRIX|IF_SMM},
    /* 963*/ {I_SYSCALL, 0, {0,0,0}, "\2\x0F\x05", IF_P6|IF_AMD},
    /* 964*/ {I_SYSENTER, 0, {0,0,0}, "\2\x0F\x34", IF_P6},
    /* 965*/ {I_SYSEXIT, 0, {0,0,0}, "\2\x0F\x35", IF_P6|IF_PRIV},
    /* 966*/ {I_SYSRET, 0, {0,0,0}, "\2\x0F\x07", IF_P6|IF_PRIV|IF_AMD},
    /* 967*/ {I_TEST, 2, {MEMORY,REG8,0}, "\300\1\x84\101", IF_8086|IF_SM},
    /* 968*/ {I_TEST, 2, {REG8,REG8,0}, "\1\x84\101", IF_8086},
    /* 969*/ {I_TEST, 2, {MEMORY,REG16,0}, "\320\300\1\x85\101", IF_8086|IF_SM},
    /* 970*/ {I_TEST, 2, {REG16,REG16,0}, "\320\1\x85\101", IF_8086},
    /* 971*/ {I_TEST, 2, {MEMORY,REG32,0}, "\321\300\1\x85\101", IF_386|IF_SM},
    /* 972*/ {I_TEST, 2, {REG32,REG32,0}, "\321\1\x85\101", IF_386},
    /* 973*/ {I_TEST, 2, {REG8,MEMORY,0}, "\301\1\x84\110", IF_8086|IF_SM},
    /* 974*/ {I_TEST, 2, {REG16,MEMORY,0}, "\320\301\1\x85\110", IF_8086|IF_SM},
    /* 975*/ {I_TEST, 2, {REG32,MEMORY,0}, "\321\301\1\x85\110", IF_386|IF_SM},
    /* 976*/ {I_TEST, 2, {REG_AL,IMMEDIATE,0}, "\1\xA8\21", IF_8086|IF_SM},
    /* 977*/ {I_TEST, 2, {REG_AX,IMMEDIATE,0}, "\320\1\xA9\31", IF_8086|IF_SM},
    /* 978*/ {I_TEST, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\xA9\41", IF_386|IF_SM},
    /* 979*/ {I_TEST, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\xF6\200\21", IF_8086|IF_SM},
    /* 980*/ {I_TEST, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\1\xF7\200\31", IF_8086|IF_SM},
    /* 981*/ {I_TEST, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\1\xF7\200\41", IF_386|IF_SM},
    /* 982*/ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\xF6\200\21", IF_8086|IF_SM},
    /* 983*/ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\1\xF7\200\31", IF_8086|IF_SM},
    /* 984*/ {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\1\xF7\200\41", IF_386|IF_SM},
    /* 985*/ {I_UD0, 0, {0,0,0}, "\2\x0F\xFF", IF_286|IF_UNDOC},
    /* 986*/ {I_UD1, 0, {0,0,0}, "\2\x0F\xB9", IF_286|IF_UNDOC},
    /* 987*/ {I_UD2, 0, {0,0,0}, "\2\x0F\x0B", IF_286},
    /* 988*/ {I_UMOV, 2, {MEMORY,REG8,0}, "\300\2\x0F\x10\101", IF_386|IF_UNDOC|IF_SM},
    /* 989*/ {I_UMOV, 2, {REG8,REG8,0}, "\2\x0F\x10\101", IF_386|IF_UNDOC},
    /* 990*/ {I_UMOV, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\x11\101", IF_386|IF_UNDOC|IF_SM},
    /* 991*/ {I_UMOV, 2, {REG16,REG16,0}, "\320\2\x0F\x11\101", IF_386|IF_UNDOC},
    /* 992*/ {I_UMOV, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\x11\101", IF_386|IF_UNDOC|IF_SM},
    /* 993*/ {I_UMOV, 2, {REG32,REG32,0}, "\321\2\x0F\x11\101", IF_386|IF_UNDOC},
    /* 994*/ {I_UMOV, 2, {REG8,MEMORY,0}, "\301\2\x0F\x12\110", IF_386|IF_UNDOC|IF_SM},
    /* 995*/ {I_UMOV, 2, {REG8,REG8,0}, "\2\x0F\x12\110", IF_386|IF_UNDOC},
    /* 996*/ {I_UMOV, 2, {REG16,MEMORY,0}, "\320\301\2\x0F\x13\110", IF_386|IF_UNDOC|IF_SM},
    /* 997*/ {I_UMOV, 2, {REG16,REG16,0}, "\320\2\x0F\x13\110", IF_386|IF_UNDOC},
    /* 998*/ {I_UMOV, 2, {REG32,MEMORY,0}, "\321\301\2\x0F\x13\110", IF_386|IF_UNDOC|IF_SM},
    /* 999*/ {I_UMOV, 2, {REG32,REG32,0}, "\321\2\x0F\x13\110", IF_386|IF_UNDOC},
    /*1000*/ {I_VERR, 1, {MEMORY,0,0}, "\300\1\x0F\17\204", IF_286|IF_PROT},
    /*1001*/ {I_VERR, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\204", IF_286|IF_PROT},
    /*1002*/ {I_VERR, 1, {REG16,0,0}, "\1\x0F\17\204", IF_286|IF_PROT},
    /*1003*/ {I_VERW, 1, {MEMORY,0,0}, "\300\1\x0F\17\205", IF_286|IF_PROT},
    /*1004*/ {I_VERW, 1, {MEMORY|BITS16,0,0}, "\300\1\x0F\17\205", IF_286|IF_PROT},
    /*1005*/ {I_VERW, 1, {REG16,0,0}, "\1\x0F\17\205", IF_286|IF_PROT},
    /*1006*/ {I_WAIT, 0, {0,0,0}, "\1\x9B", IF_8086},
    /*1007*/ {I_FWAIT, 0, {0,0,0}, "\1\x9B", IF_8086},
    /*1008*/ {I_WBINVD, 0, {0,0,0}, "\2\x0F\x09", IF_486|IF_PRIV},
    /*1009*/ {I_WRSHR, 1, {REGMEM|BITS32,0,0}, "\321\300\2\x0F\x37\200", IF_P6|IF_CYRIX|IF_SMM},
    /*1010*/ {I_WRMSR, 0, {0,0,0}, "\2\x0F\x30", IF_PENT|IF_PRIV},
    /*1011*/ {I_XADD, 2, {MEMORY,REG8,0}, "\300\2\x0F\xC0\101", IF_486|IF_SM},
    /*1012*/ {I_XADD, 2, {REG8,REG8,0}, "\2\x0F\xC0\101", IF_486},
    /*1013*/ {I_XADD, 2, {MEMORY,REG16,0}, "\320\300\2\x0F\xC1\101", IF_486|IF_SM},
    /*1014*/ {I_XADD, 2, {REG16,REG16,0}, "\320\2\x0F\xC1\101", IF_486},
    /*1015*/ {I_XADD, 2, {MEMORY,REG32,0}, "\321\300\2\x0F\xC1\101", IF_486|IF_SM},
    /*1016*/ {I_XADD, 2, {REG32,REG32,0}, "\321\2\x0F\xC1\101", IF_486},
    /*1017*/ {I_XCHG, 2, {REG_AX,REG16,0}, "\320\11\x90", IF_8086},
    /*1018*/ {I_XCHG, 2, {REG_EAX,REG32,0}, "\321\11\x90", IF_386},
    /*1019*/ {I_XCHG, 2, {REG16,REG_AX,0}, "\320\10\x90", IF_8086},
    /*1020*/ {I_XCHG, 2, {REG32,REG_EAX,0}, "\321\10\x90", IF_386},
    /*1021*/ {I_XCHG, 2, {REG8,MEMORY,0}, "\301\1\x86\110", IF_8086|IF_SM},
    /*1022*/ {I_XCHG, 2, {REG8,REG8,0}, "\1\x86\110", IF_8086},
    /*1023*/ {I_XCHG, 2, {REG16,MEMORY,0}, "\320\301\1\x87\110", IF_8086|IF_SM},
    /*1024*/ {I_XCHG, 2, {REG16,REG16,0}, "\320\1\x87\110", IF_8086},
    /*1025*/ {I_XCHG, 2, {REG32,MEMORY,0}, "\321\301\1\x87\110", IF_386|IF_SM},
    /*1026*/ {I_XCHG, 2, {REG32,REG32,0}, "\321\1\x87\110", IF_386},
    /*1027*/ {I_XCHG, 2, {MEMORY,REG8,0}, "\300\1\x86\101", IF_8086|IF_SM},
    /*1028*/ {I_XCHG, 2, {REG8,REG8,0}, "\1\x86\101", IF_8086},
    /*1029*/ {I_XCHG, 2, {MEMORY,REG16,0}, "\320\300\1\x87\101", IF_8086|IF_SM},
    /*1030*/ {I_XCHG, 2, {REG16,REG16,0}, "\320\1\x87\101", IF_8086},
    /*1031*/ {I_XCHG, 2, {MEMORY,REG32,0}, "\321\300\1\x87\101", IF_386|IF_SM},
    /*1032*/ {I_XCHG, 2, {REG32,REG32,0}, "\321\1\x87\101", IF_386},
    /*1033*/ {I_XLATB, 0, {0,0,0}, "\1\xD7", IF_8086},
    /*1034*/ {I_XLAT, 0, {0,0,0}, "\1\xD7", IF_8086},
    /*1035*/ {I_XOR, 2, {MEMORY,REG8,0}, "\300\1\x30\101", IF_8086|IF_SM},
    /*1036*/ {I_XOR, 2, {REG8,REG8,0}, "\1\x30\101", IF_8086},
    /*1037*/ {I_XOR, 2, {MEMORY,REG16,0}, "\320\300\1\x31\101", IF_8086|IF_SM},
    /*1038*/ {I_XOR, 2, {REG16,REG16,0}, "\320\1\x31\101", IF_8086},
    /*1039*/ {I_XOR, 2, {MEMORY,REG32,0}, "\321\300\1\x31\101", IF_386|IF_SM},
    /*1040*/ {I_XOR, 2, {REG32,REG32,0}, "\321\1\x31\101", IF_386},
    /*1041*/ {I_XOR, 2, {REG8,MEMORY,0}, "\301\1\x32\110", IF_8086|IF_SM},
    /*1042*/ {I_XOR, 2, {REG8,REG8,0}, "\1\x32\110", IF_8086},
    /*1043*/ {I_XOR, 2, {REG16,MEMORY,0}, "\320\301\1\x33\110", IF_8086|IF_SM},
    /*1044*/ {I_XOR, 2, {REG16,REG16,0}, "\320\1\x33\110", IF_8086},
    /*1045*/ {I_XOR, 2, {REG32,MEMORY,0}, "\321\301\1\x33\110", IF_386|IF_SM},
    /*1046*/ {I_XOR, 2, {REG32,REG32,0}, "\321\1\x33\110", IF_386},
    /*1047*/ {I_XOR, 2, {REGMEM|BITS16,IMMEDIATE|BITS8,0}, "\320\300\1\x83\206\15", IF_8086},
    /*1048*/ {I_XOR, 2, {REGMEM|BITS32,IMMEDIATE|BITS8,0}, "\321\300\1\x83\206\15", IF_386},
    /*1049*/ {I_XOR, 2, {REG_AL,IMMEDIATE,0}, "\1\x34\21", IF_8086|IF_SM},
    /*1050*/ {I_XOR, 2, {REG_AX,IMMEDIATE,0}, "\320\1\x35\31", IF_8086|IF_SM},
    /*1051*/ {I_XOR, 2, {REG_EAX,IMMEDIATE,0}, "\321\1\x35\41", IF_386|IF_SM},
    /*1052*/ {I_XOR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x80\206\21", IF_8086|IF_SM},
    /*1053*/ {I_XOR, 2, {REGMEM|BITS16,IMMEDIATE,0}, "\320\300\134\1\x81\206\131", IF_8086|IF_SM},
    /*1054*/ {I_XOR, 2, {REGMEM|BITS32,IMMEDIATE,0}, "\321\300\144\1\x81\206\141", IF_386|IF_SM},
    /*1055*/ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x80\206\21", IF_8086|IF_SM},
    /*1056*/ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0}, "\320\300\134\1\x81\206\131", IF_8086|IF_SM},
    /*1057*/ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0}, "\321\300\144\1\x81\206\141", IF_386|IF_SM},
    /*1058*/ {I_XSTORE, 0, {0,0,0}, "\3\x0F\xA7\xC0", IF_P6|IF_CYRIX},
    /*1059*/ {I_CMOVcc, 2, {REG16,MEMORY,0}, "\320\301\1\x0F\330\x40\110", IF_P6|IF_SM},
    /*1060*/ {I_CMOVcc, 2, {REG16,REG16,0}, "\320\1\x0F\330\x40\110", IF_P6},
    /*1061*/ {I_CMOVcc, 2, {REG32,MEMORY,0}, "\321\301\1\x0F\330\x40\110", IF_P6|IF_SM},
    /*1062*/ {I_CMOVcc, 2, {REG32,REG32,0}, "\321\1\x0F\330\x40\110", IF_P6},
    /*1063*/ {I_Jcc, 1, {IMMEDIATE|NEAR,0,0}, "\322\1\x0F\330\x80\64", IF_386},
    /*1064*/ {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0}, "\320\1\x0F\330\x80\64", IF_386},
    /*1065*/ {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0}, "\321\1\x0F\330\x80\64", IF_386},
    /*1066*/ {I_Jcc, 1, {IMMEDIATE,0,0}, "\330\x70\50", IF_8086},
    /*1067*/ {I_SETcc, 1, {MEMORY,0,0}, "\300\1\x0F\330\x90\200", IF_386|IF_SB},
    /*1068*/ {I_SETcc, 1, {REG8,0,0}, "\300\1\x0F\330\x90\200", IF_386},
    /*1069*/ {I_ADDPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /*1070*/ {I_ADDPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /*1071*/ {I_ADDSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /*1072*/ {I_ADDSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x58\110", IF_KATMAI|IF_SSE},
    /*1073*/ {I_ANDNPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x55\110", IF_KATMAI|IF_SSE},
    /*1074*/ {I_ANDNPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x55\110", IF_KATMAI|IF_SSE},
    /*1075*/ {I_ANDPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x54\110", IF_KATMAI|IF_SSE},
    /*1076*/ {I_ANDPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x54\110", IF_KATMAI|IF_SSE},
    /*1077*/ {I_CMPEQPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /*1078*/ {I_CMPEQPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /*1079*/ {I_CMPEQSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /*1080*/ {I_CMPEQSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x00", IF_KATMAI|IF_SSE},
    /*1081*/ {I_CMPLEPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /*1082*/ {I_CMPLEPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /*1083*/ {I_CMPLESS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /*1084*/ {I_CMPLESS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x02", IF_KATMAI|IF_SSE},
    /*1085*/ {I_CMPLTPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /*1086*/ {I_CMPLTPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /*1087*/ {I_CMPLTSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /*1088*/ {I_CMPLTSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x01", IF_KATMAI|IF_SSE},
    /*1089*/ {I_CMPNEQPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /*1090*/ {I_CMPNEQPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /*1091*/ {I_CMPNEQSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /*1092*/ {I_CMPNEQSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x04", IF_KATMAI|IF_SSE},
    /*1093*/ {I_CMPNLEPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /*1094*/ {I_CMPNLEPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /*1095*/ {I_CMPNLESS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /*1096*/ {I_CMPNLESS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x06", IF_KATMAI|IF_SSE},
    /*1097*/ {I_CMPNLTPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /*1098*/ {I_CMPNLTPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /*1099*/ {I_CMPNLTSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /*1100*/ {I_CMPNLTSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x05", IF_KATMAI|IF_SSE},
    /*1101*/ {I_CMPORDPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /*1102*/ {I_CMPORDPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /*1103*/ {I_CMPORDSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /*1104*/ {I_CMPORDSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x07", IF_KATMAI|IF_SSE},
    /*1105*/ {I_CMPUNORDPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /*1106*/ {I_CMPUNORDPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /*1107*/ {I_CMPUNORDSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /*1108*/ {I_CMPUNORDSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xC2\110\1\x03", IF_KATMAI|IF_SSE},
    /*1109*/ {I_CMPPS, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\331\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1110*/ {I_CMPPS, 3, {XMMREG,XMMREG,IMMEDIATE}, "\331\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1111*/ {I_CMPSS, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\333\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1112*/ {I_CMPSS, 3, {XMMREG,XMMREG,IMMEDIATE}, "\333\2\x0F\xC2\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1113*/ {I_COMISS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x2F\110", IF_KATMAI|IF_SSE},
    /*1114*/ {I_COMISS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x2F\110", IF_KATMAI|IF_SSE},
    /*1115*/ {I_CVTPI2PS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x2A\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1116*/ {I_CVTPI2PS, 2, {XMMREG,MMXREG,0}, "\331\2\x0F\x2A\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1117*/ {I_CVTPS2PI, 2, {MMXREG,MEMORY,0}, "\301\331\2\x0F\x2D\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1118*/ {I_CVTPS2PI, 2, {MMXREG,XMMREG,0}, "\331\2\x0F\x2D\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1119*/ {I_CVTSI2SS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x2A\110", IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    /*1120*/ {I_CVTSI2SS, 2, {XMMREG,REG32,0}, "\333\2\x0F\x2A\110", IF_KATMAI|IF_SSE},
    /*1121*/ {I_CVTSS2SI, 2, {REG32,MEMORY,0}, "\301\333\2\x0F\x2D\110", IF_KATMAI|IF_SSE},
    /*1122*/ {I_CVTSS2SI, 2, {REG32,XMMREG,0}, "\333\2\x0F\x2D\110", IF_KATMAI|IF_SSE},
    /*1123*/ {I_CVTTPS2PI, 2, {MMXREG,MEMORY,0}, "\301\331\2\x0F\x2C\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1124*/ {I_CVTTPS2PI, 2, {MMXREG,XMMREG,0}, "\331\2\x0F\x2C\110", IF_KATMAI|IF_SSE|IF_MMX},
    /*1125*/ {I_CVTTSS2SI, 2, {REG32,MEMORY,0}, "\301\333\2\x0F\x2C\110", IF_KATMAI|IF_SSE},
    /*1126*/ {I_CVTTSS2SI, 2, {REG32,XMMREG,0}, "\333\2\x0F\x2C\110", IF_KATMAI|IF_SSE},
    /*1127*/ {I_DIVPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /*1128*/ {I_DIVPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /*1129*/ {I_DIVSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /*1130*/ {I_DIVSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5E\110", IF_KATMAI|IF_SSE},
    /*1131*/ {I_LDMXCSR, 1, {MEMORY,0,0}, "\300\2\x0F\xAE\202", IF_KATMAI|IF_SSE|IF_SD},
    /*1132*/ {I_MAXPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /*1133*/ {I_MAXPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /*1134*/ {I_MAXSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /*1135*/ {I_MAXSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5F\110", IF_KATMAI|IF_SSE},
    /*1136*/ {I_MINPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /*1137*/ {I_MINPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /*1138*/ {I_MINSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /*1139*/ {I_MINSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5D\110", IF_KATMAI|IF_SSE},
    /*1140*/ {I_MOVAPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x28\110", IF_KATMAI|IF_SSE},
    /*1141*/ {I_MOVAPS, 2, {MEMORY,XMMREG,0}, "\300\2\x0F\x29\101", IF_KATMAI|IF_SSE},
    /*1142*/ {I_MOVAPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x28\110", IF_KATMAI|IF_SSE},
    /*1143*/ {I_MOVAPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x29\101", IF_KATMAI|IF_SSE},
    /*1144*/ {I_MOVHPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x16\110", IF_KATMAI|IF_SSE},
    /*1145*/ {I_MOVHPS, 2, {MEMORY,XMMREG,0}, "\300\2\x0F\x17\101", IF_KATMAI|IF_SSE},
    /*1146*/ {I_MOVLHPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x16\110", IF_KATMAI|IF_SSE},
    /*1147*/ {I_MOVLPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x12\110", IF_KATMAI|IF_SSE},
    /*1148*/ {I_MOVLPS, 2, {MEMORY,XMMREG,0}, "\300\2\x0F\x13\101", IF_KATMAI|IF_SSE},
    /*1149*/ {I_MOVHLPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x12\110", IF_KATMAI|IF_SSE},
    /*1150*/ {I_MOVMSKPS, 2, {REG32,XMMREG,0}, "\2\x0F\x50\110", IF_KATMAI|IF_SSE},
    /*1151*/ {I_MOVNTPS, 2, {MEMORY,XMMREG,0}, "\300\2\x0F\x2B\101", IF_KATMAI|IF_SSE},
    /*1152*/ {I_MOVSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /*1153*/ {I_MOVSS, 2, {MEMORY,XMMREG,0}, "\300\333\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /*1154*/ {I_MOVSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /*1155*/ {I_MOVSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /*1156*/ {I_MOVUPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /*1157*/ {I_MOVUPS, 2, {MEMORY,XMMREG,0}, "\300\331\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /*1158*/ {I_MOVUPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x10\110", IF_KATMAI|IF_SSE},
    /*1159*/ {I_MOVUPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x11\101", IF_KATMAI|IF_SSE},
    /*1160*/ {I_MULPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /*1161*/ {I_MULPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /*1162*/ {I_MULSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /*1163*/ {I_MULSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x59\110", IF_KATMAI|IF_SSE},
    /*1164*/ {I_ORPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x56\110", IF_KATMAI|IF_SSE},
    /*1165*/ {I_ORPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x56\110", IF_KATMAI|IF_SSE},
    /*1166*/ {I_RCPPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /*1167*/ {I_RCPPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /*1168*/ {I_RCPSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /*1169*/ {I_RCPSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x53\110", IF_KATMAI|IF_SSE},
    /*1170*/ {I_RSQRTPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /*1171*/ {I_RSQRTPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /*1172*/ {I_RSQRTSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /*1173*/ {I_RSQRTSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x52\110", IF_KATMAI|IF_SSE},
    /*1174*/ {I_SHUFPS, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\2\x0F\xC6\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1175*/ {I_SHUFPS, 3, {XMMREG,XMMREG,IMMEDIATE}, "\2\x0F\xC6\110\26", IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    /*1176*/ {I_SQRTPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /*1177*/ {I_SQRTPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /*1178*/ {I_SQRTSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /*1179*/ {I_SQRTSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x51\110", IF_KATMAI|IF_SSE},
    /*1180*/ {I_STMXCSR, 1, {MEMORY,0,0}, "\300\2\x0F\xAE\203", IF_KATMAI|IF_SSE|IF_SD},
    /*1181*/ {I_SUBPS, 2, {XMMREG,MEMORY,0}, "\301\331\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /*1182*/ {I_SUBPS, 2, {XMMREG,XMMREG,0}, "\331\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /*1183*/ {I_SUBSS, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /*1184*/ {I_SUBSS, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5C\110", IF_KATMAI|IF_SSE},
    /*1185*/ {I_UCOMISS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x2E\110", IF_KATMAI|IF_SSE},
    /*1186*/ {I_UCOMISS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x2E\110", IF_KATMAI|IF_SSE},
    /*1187*/ {I_UNPCKHPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x15\110", IF_KATMAI|IF_SSE},
    /*1188*/ {I_UNPCKHPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x15\110", IF_KATMAI|IF_SSE},
    /*1189*/ {I_UNPCKLPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x14\110", IF_KATMAI|IF_SSE},
    /*1190*/ {I_UNPCKLPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x14\110", IF_KATMAI|IF_SSE},
    /*1191*/ {I_XORPS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x57\110", IF_KATMAI|IF_SSE},
    /*1192*/ {I_XORPS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x57\110", IF_KATMAI|IF_SSE},
    /*1193*/ {I_FXRSTOR, 1, {MEMORY,0,0}, "\300\2\x0F\xAE\201", IF_P6|IF_SSE|IF_FPU},
    /*1194*/ {I_FXSAVE, 1, {MEMORY,0,0}, "\300\2\x0F\xAE\200", IF_P6|IF_SSE|IF_FPU},
    /*1195*/ {I_PREFETCHNTA, 1, {MEMORY,0,0}, "\300\2\x0F\x18\200", IF_KATMAI},
    /*1196*/ {I_PREFETCHT0, 1, {MEMORY,0,0}, "\300\2\x0F\x18\201", IF_KATMAI},
    /*1197*/ {I_PREFETCHT1, 1, {MEMORY,0,0}, "\300\2\x0F\x18\202", IF_KATMAI},
    /*1198*/ {I_PREFETCHT2, 1, {MEMORY,0,0}, "\300\2\x0F\x18\203", IF_KATMAI},
    /*1199*/ {I_SFENCE, 0, {0,0,0}, "\3\x0F\xAE\xF8", IF_KATMAI},
    /*1200*/ {I_MASKMOVQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF7\110", IF_KATMAI|IF_MMX},
    /*1201*/ {I_MOVNTQ, 2, {MEMORY,MMXREG,0}, "\300\2\x0F\xE7\101", IF_KATMAI|IF_MMX|IF_SM},
    /*1202*/ {I_PAVGB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE0\110", IF_KATMAI|IF_MMX},
    /*1203*/ {I_PAVGB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE0\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1204*/ {I_PAVGW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE3\110", IF_KATMAI|IF_MMX},
    /*1205*/ {I_PAVGW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE3\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1206*/ {I_PEXTRW, 3, {REG32,MMXREG,IMMEDIATE}, "\2\x0F\xC5\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /*1207*/ {I_PINSRW, 3, {MMXREG,REG16,IMMEDIATE}, "\2\x0F\xC4\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /*1208*/ {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE}, "\301\2\x0F\xC4\110\26", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /*1209*/ {I_PMAXSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xEE\110", IF_KATMAI|IF_MMX},
    /*1210*/ {I_PMAXSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xEE\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1211*/ {I_PMAXUB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDE\110", IF_KATMAI|IF_MMX},
    /*1212*/ {I_PMAXUB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDE\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1213*/ {I_PMINSW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xEA\110", IF_KATMAI|IF_MMX},
    /*1214*/ {I_PMINSW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xEA\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1215*/ {I_PMINUB, 2, {MMXREG,MMXREG,0}, "\2\x0F\xDA\110", IF_KATMAI|IF_MMX},
    /*1216*/ {I_PMINUB, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xDA\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1217*/ {I_PMOVMSKB, 2, {REG32,MMXREG,0}, "\2\x0F\xD7\110", IF_KATMAI|IF_MMX},
    /*1218*/ {I_PMULHUW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xE4\110", IF_KATMAI|IF_MMX},
    /*1219*/ {I_PMULHUW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xE4\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1220*/ {I_PSADBW, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF6\110", IF_KATMAI|IF_MMX},
    /*1221*/ {I_PSADBW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF6\110", IF_KATMAI|IF_MMX|IF_SM},
    /*1222*/ {I_PSHUFW, 3, {MMXREG,MMXREG,IMMEDIATE}, "\2\x0F\x70\110\22", IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    /*1223*/ {I_PSHUFW, 3, {MMXREG,MEMORY,IMMEDIATE}, "\301\2\x0F\x70\110\22", IF_KATMAI|IF_MMX|IF_SM2|IF_SB|IF_AR2},
    /*1224*/ {I_PF2IW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x1C", IF_PENT|IF_3DNOW|IF_SM},
    /*1225*/ {I_PF2IW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x1C", IF_PENT|IF_3DNOW},
    /*1226*/ {I_PFNACC, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x8A", IF_PENT|IF_3DNOW|IF_SM},
    /*1227*/ {I_PFNACC, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x8A", IF_PENT|IF_3DNOW},
    /*1228*/ {I_PFPNACC, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x8E", IF_PENT|IF_3DNOW|IF_SM},
    /*1229*/ {I_PFPNACC, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x8E", IF_PENT|IF_3DNOW},
    /*1230*/ {I_PI2FW, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\x0C", IF_PENT|IF_3DNOW|IF_SM},
    /*1231*/ {I_PI2FW, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\x0C", IF_PENT|IF_3DNOW},
    /*1232*/ {I_PSWAPD, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\x0F\110\01\xBB", IF_PENT|IF_3DNOW|IF_SM},
    /*1233*/ {I_PSWAPD, 2, {MMXREG,MMXREG,0}, "\2\x0F\x0F\110\01\xBB", IF_PENT|IF_3DNOW},
    /*1234*/ {I_MASKMOVDQU, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF7\110", IF_WILLAMETTE|IF_SSE2},
    /*1235*/ {I_CLFLUSH, 1, {MEMORY,0,0}, "\300\2\x0F\xAE\207", IF_WILLAMETTE|IF_SSE2},
    /*1236*/ {I_MOVNTDQ, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\xE7\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1237*/ {I_MOVNTI, 2, {MEMORY,REG32,0}, "\300\2\x0F\xC3\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1238*/ {I_MOVNTPD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x2B\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1239*/ {I_PAUSE, 0, {0,0,0}, "\333\1\x90", IF_WILLAMETTE|IF_SSE2},
    /*1240*/ {I_LFENCE, 0, {0,0,0}, "\3\x0F\xAE\xE8", IF_WILLAMETTE|IF_SSE2},
    /*1241*/ {I_MFENCE, 0, {0,0,0}, "\3\x0F\xAE\xF0", IF_WILLAMETTE|IF_SSE2},
    /*1242*/ {I_MOVD, 2, {XMMREG,REG32,0}, "\3\x66\x0F\x6E\110", IF_WILLAMETTE|IF_SSE2},
    /*1243*/ {I_MOVD, 2, {REG32,XMMREG,0}, "\3\x66\x0F\x7E\101", IF_WILLAMETTE|IF_SSE2},
    /*1244*/ {I_MOVD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x7E\101", IF_WILLAMETTE|IF_SSE2},
    /*1245*/ {I_MOVD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6E\110", IF_WILLAMETTE|IF_SSE2},
    /*1246*/ {I_MOVDQA, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2},
    /*1247*/ {I_MOVDQA, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x7F\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1248*/ {I_MOVDQA, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1249*/ {I_MOVDQA, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x7F\110", IF_WILLAMETTE|IF_SSE2},
    /*1250*/ {I_MOVDQU, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2},
    /*1251*/ {I_MOVDQU, 2, {MEMORY,XMMREG,0}, "\333\300\2\x0F\x7F\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1252*/ {I_MOVDQU, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x6F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1253*/ {I_MOVDQU, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x7F\110", IF_WILLAMETTE|IF_SSE2},
    /*1254*/ {I_MOVDQ2Q, 2, {MMXREG,XMMREG,0}, "\3\xF2\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /*1255*/ {I_MOVQ, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x7E\110", IF_WILLAMETTE|IF_SSE2},
    /*1256*/ {I_MOVQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /*1257*/ {I_MOVQ, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\xD6\101", IF_WILLAMETTE|IF_SSE2},
    /*1258*/ {I_MOVQ, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x7E\110", IF_WILLAMETTE|IF_SSE2},
    /*1259*/ {I_MOVQ2DQ, 2, {XMMREG,MMXREG,0}, "\333\2\x0F\xD6\110", IF_WILLAMETTE|IF_SSE2},
    /*1260*/ {I_PACKSSWB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x63\110", IF_WILLAMETTE|IF_SSE2},
    /*1261*/ {I_PACKSSWB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x63\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1262*/ {I_PACKSSDW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x6B\110", IF_WILLAMETTE|IF_SSE2},
    /*1263*/ {I_PACKSSDW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1264*/ {I_PACKUSWB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x67\110", IF_WILLAMETTE|IF_SSE2},
    /*1265*/ {I_PACKUSWB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x67\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1266*/ {I_PADDB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xFC\110", IF_WILLAMETTE|IF_SSE2},
    /*1267*/ {I_PADDB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xFC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1268*/ {I_PADDW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xFD\110", IF_WILLAMETTE|IF_SSE2},
    /*1269*/ {I_PADDW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xFD\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1270*/ {I_PADDD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xFE\110", IF_WILLAMETTE|IF_SSE2},
    /*1271*/ {I_PADDD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xFE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1272*/ {I_PADDQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2},
    /*1273*/ {I_PADDQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1274*/ {I_PADDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2},
    /*1275*/ {I_PADDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1276*/ {I_PADDSB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xEC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1277*/ {I_PADDSB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xEC\110", IF_WILLAMETTE|IF_SSE2},
    /*1278*/ {I_PADDSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xED\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1279*/ {I_PADDSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xED\110", IF_WILLAMETTE|IF_SSE2},
    /*1280*/ {I_PADDUSB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDC\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1281*/ {I_PADDUSB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDC\110", IF_WILLAMETTE|IF_SSE2},
    /*1282*/ {I_PADDUSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDD\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1283*/ {I_PADDUSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDD\110", IF_WILLAMETTE|IF_SSE2},
    /*1284*/ {I_PAND, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDB\110", IF_WILLAMETTE|IF_SSE2},
    /*1285*/ {I_PAND, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1286*/ {I_PANDN, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDF\110", IF_WILLAMETTE|IF_SSE2},
    /*1287*/ {I_PANDN, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDF\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1288*/ {I_PAVGB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE0\110", IF_WILLAMETTE|IF_SSE2},
    /*1289*/ {I_PAVGB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE0\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1290*/ {I_PAVGW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE3\110", IF_WILLAMETTE|IF_SSE2},
    /*1291*/ {I_PAVGW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1292*/ {I_PCMPEQB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x74\110", IF_WILLAMETTE|IF_SSE2},
    /*1293*/ {I_PCMPEQB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x74\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1294*/ {I_PCMPEQW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x75\110", IF_WILLAMETTE|IF_SSE2},
    /*1295*/ {I_PCMPEQW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x75\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1296*/ {I_PCMPEQD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x76\110", IF_WILLAMETTE|IF_SSE2},
    /*1297*/ {I_PCMPEQD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x76\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1298*/ {I_PCMPGTB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x64\110", IF_WILLAMETTE|IF_SSE2},
    /*1299*/ {I_PCMPGTB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x64\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1300*/ {I_PCMPGTW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x65\110", IF_WILLAMETTE|IF_SSE2},
    /*1301*/ {I_PCMPGTW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x65\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1302*/ {I_PCMPGTD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x66\110", IF_WILLAMETTE|IF_SSE2},
    /*1303*/ {I_PCMPGTD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x66\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1304*/ {I_PEXTRW, 3, {REG32,XMMREG,IMMEDIATE}, "\3\x66\x0F\xC5\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1305*/ {I_PINSRW, 3, {XMMREG,REG16,IMMEDIATE}, "\3\x66\x0F\xC4\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1306*/ {I_PINSRW, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\3\x66\x0F\xC4\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1307*/ {I_PMADDWD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1308*/ {I_PMADDWD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF5\110", IF_WILLAMETTE|IF_SSE2},
    /*1309*/ {I_PMAXSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xEE\110", IF_WILLAMETTE|IF_SSE2},
    /*1310*/ {I_PMAXSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xEE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1311*/ {I_PMAXUB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDE\110", IF_WILLAMETTE|IF_SSE2},
    /*1312*/ {I_PMAXUB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDE\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1313*/ {I_PMINSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xEA\110", IF_WILLAMETTE|IF_SSE2},
    /*1314*/ {I_PMINSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xEA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1315*/ {I_PMINUB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xDA\110", IF_WILLAMETTE|IF_SSE2},
    /*1316*/ {I_PMINUB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xDA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1317*/ {I_PMOVMSKB, 2, {REG32,XMMREG,0}, "\3\x66\x0F\xD7\110", IF_WILLAMETTE|IF_SSE2},
    /*1318*/ {I_PMULHUW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE4\110", IF_WILLAMETTE|IF_SSE2},
    /*1319*/ {I_PMULHUW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1320*/ {I_PMULHW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1321*/ {I_PMULHW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE5\110", IF_WILLAMETTE|IF_SSE2},
    /*1322*/ {I_PMULLW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD5\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1323*/ {I_PMULLW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD5\110", IF_WILLAMETTE|IF_SSE2},
    /*1324*/ {I_PMULUDQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2},
    /*1325*/ {I_PMULUDQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1326*/ {I_PMULUDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2},
    /*1327*/ {I_PMULUDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF4\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1328*/ {I_POR, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xEB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1329*/ {I_POR, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xEB\110", IF_WILLAMETTE|IF_SSE2},
    /*1330*/ {I_PSADBW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF6\110", IF_WILLAMETTE|IF_SSE2},
    /*1331*/ {I_PSADBW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1332*/ {I_PSHUFD, 3, {XMMREG,XMMREG,IMMEDIATE}, "\3\x66\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1333*/ {I_PSHUFD, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\3\x66\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /*1334*/ {I_PSHUFHW, 3, {XMMREG,XMMREG,IMMEDIATE}, "\333\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1335*/ {I_PSHUFHW, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\333\2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /*1336*/ {I_PSHUFLW, 3, {XMMREG,XMMREG,IMMEDIATE}, "\3\xF2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1337*/ {I_PSHUFLW, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\3\xF2\x0F\x70\110\22", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /*1338*/ {I_PSLLDQ, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x73\207\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1339*/ {I_PSLLW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1340*/ {I_PSLLW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF1\110", IF_WILLAMETTE|IF_SSE2},
    /*1341*/ {I_PSLLW, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x71\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1342*/ {I_PSLLD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1343*/ {I_PSLLD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF2\110", IF_WILLAMETTE|IF_SSE2},
    /*1344*/ {I_PSLLD, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x72\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1345*/ {I_PSLLQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1346*/ {I_PSLLQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF3\110", IF_WILLAMETTE|IF_SSE2},
    /*1347*/ {I_PSLLQ, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x73\206\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1348*/ {I_PSRAW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1349*/ {I_PSRAW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE1\110", IF_WILLAMETTE|IF_SSE2},
    /*1350*/ {I_PSRAW, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x71\204\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1351*/ {I_PSRAD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1352*/ {I_PSRAD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE2\110", IF_WILLAMETTE|IF_SSE2},
    /*1353*/ {I_PSRAD, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x72\204\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1354*/ {I_PSRLDQ, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x73\203\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1355*/ {I_PSRLW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD1\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1356*/ {I_PSRLW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD1\110", IF_WILLAMETTE|IF_SSE2},
    /*1357*/ {I_PSRLW, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x71\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1358*/ {I_PSRLD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD2\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1359*/ {I_PSRLD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD2\110", IF_WILLAMETTE|IF_SSE2},
    /*1360*/ {I_PSRLD, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x72\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1361*/ {I_PSRLQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD3\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1362*/ {I_PSRLQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD3\110", IF_WILLAMETTE|IF_SSE2},
    /*1363*/ {I_PSRLQ, 2, {XMMREG,IMMEDIATE,0}, "\3\x66\x0F\x73\202\25", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    /*1364*/ {I_PSUBB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1365*/ {I_PSUBB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF8\110", IF_WILLAMETTE|IF_SSE2},
    /*1366*/ {I_PSUBW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xF9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1367*/ {I_PSUBW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xF9\110", IF_WILLAMETTE|IF_SSE2},
    /*1368*/ {I_PSUBD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xFA\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1369*/ {I_PSUBD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xFA\110", IF_WILLAMETTE|IF_SSE2},
    /*1370*/ {I_PSUBQ, 2, {MMXREG,MMXREG,0}, "\2\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2},
    /*1371*/ {I_PSUBQ, 2, {MMXREG,MEMORY,0}, "\301\2\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1372*/ {I_PSUBQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2},
    /*1373*/ {I_PSUBQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xFB\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1374*/ {I_PSUBSB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1375*/ {I_PSUBSB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE8\110", IF_WILLAMETTE|IF_SSE2},
    /*1376*/ {I_PSUBSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1377*/ {I_PSUBSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE9\110", IF_WILLAMETTE|IF_SSE2},
    /*1378*/ {I_PSUBUSB, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD8\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1379*/ {I_PSUBUSB, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD8\110", IF_WILLAMETTE|IF_SSE2},
    /*1380*/ {I_PSUBUSW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD9\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1381*/ {I_PSUBUSW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD9\110", IF_WILLAMETTE|IF_SSE2},
    /*1382*/ {I_PUNPCKHBW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x68\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1383*/ {I_PUNPCKHBW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x68\110", IF_WILLAMETTE|IF_SSE2},
    /*1384*/ {I_PUNPCKHWD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x69\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1385*/ {I_PUNPCKHWD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x69\110", IF_WILLAMETTE|IF_SSE2},
    /*1386*/ {I_PUNPCKHDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6A\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1387*/ {I_PUNPCKHDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x6A\110", IF_WILLAMETTE|IF_SSE2},
    /*1388*/ {I_PUNPCKHQDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x6D\110", IF_WILLAMETTE|IF_SSE2},
    /*1389*/ {I_PUNPCKHQDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6D\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1390*/ {I_PUNPCKLBW, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x60\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1391*/ {I_PUNPCKLBW, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x60\110", IF_WILLAMETTE|IF_SSE2},
    /*1392*/ {I_PUNPCKLWD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x61\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1393*/ {I_PUNPCKLWD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x61\110", IF_WILLAMETTE|IF_SSE2},
    /*1394*/ {I_PUNPCKLDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x62\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1395*/ {I_PUNPCKLDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x62\110", IF_WILLAMETTE|IF_SSE2},
    /*1396*/ {I_PUNPCKLQDQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x6C\110", IF_WILLAMETTE|IF_SSE2},
    /*1397*/ {I_PUNPCKLQDQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x6C\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1398*/ {I_PXOR, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xEF\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1399*/ {I_PXOR, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xEF\110", IF_WILLAMETTE|IF_SSE2},
    /*1400*/ {I_ADDPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\x58\110", IF_WILLAMETTE|IF_SSE2},
    /*1401*/ {I_ADDPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\x58\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1402*/ {I_ADDSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\x58\110", IF_WILLAMETTE|IF_SSE2},
    /*1403*/ {I_ADDSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\x58\110", IF_WILLAMETTE|IF_SSE2},
    /*1404*/ {I_ANDNPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\x55\110", IF_WILLAMETTE|IF_SSE2},
    /*1405*/ {I_ANDNPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\x55\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1406*/ {I_ANDPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\x54\110", IF_WILLAMETTE|IF_SSE2},
    /*1407*/ {I_ANDPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\x54\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1408*/ {I_CMPEQPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1409*/ {I_CMPEQPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2},
    /*1410*/ {I_CMPEQSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2},
    /*1411*/ {I_CMPEQSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x00", IF_WILLAMETTE|IF_SSE2},
    /*1412*/ {I_CMPLEPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1413*/ {I_CMPLEPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2},
    /*1414*/ {I_CMPLESD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2},
    /*1415*/ {I_CMPLESD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x02", IF_WILLAMETTE|IF_SSE2},
    /*1416*/ {I_CMPLTPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1417*/ {I_CMPLTPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2},
    /*1418*/ {I_CMPLTSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2},
    /*1419*/ {I_CMPLTSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x01", IF_WILLAMETTE|IF_SSE2},
    /*1420*/ {I_CMPNEQPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1421*/ {I_CMPNEQPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2},
    /*1422*/ {I_CMPNEQSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2},
    /*1423*/ {I_CMPNEQSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x04", IF_WILLAMETTE|IF_SSE2},
    /*1424*/ {I_CMPNLEPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1425*/ {I_CMPNLEPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2},
    /*1426*/ {I_CMPNLESD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2},
    /*1427*/ {I_CMPNLESD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x06", IF_WILLAMETTE|IF_SSE2},
    /*1428*/ {I_CMPNLTPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1429*/ {I_CMPNLTPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2},
    /*1430*/ {I_CMPNLTSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2},
    /*1431*/ {I_CMPNLTSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x05", IF_WILLAMETTE|IF_SSE2},
    /*1432*/ {I_CMPORDPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1433*/ {I_CMPORDPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2},
    /*1434*/ {I_CMPORDSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2},
    /*1435*/ {I_CMPORDSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x07", IF_WILLAMETTE|IF_SSE2},
    /*1436*/ {I_CMPUNORDPD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1437*/ {I_CMPUNORDPD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2},
    /*1438*/ {I_CMPUNORDSD, 2, {XMMREG,MEMORY,0}, "\301\331\3\xF2\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2},
    /*1439*/ {I_CMPUNORDSD, 2, {XMMREG,XMMREG,0}, "\331\3\xF2\x0F\xC2\110\1\x03", IF_WILLAMETTE|IF_SSE2},
    /*1440*/ {I_CMPPD, 3, {XMMREG,XMMREG,IMMEDIATE}, "\331\3\x66\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1441*/ {I_CMPPD, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\331\3\x66\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    /*1442*/ {I_CMPSD, 3, {XMMREG,XMMREG,IMMEDIATE}, "\331\3\xF2\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1443*/ {I_CMPSD, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\331\3\xF2\x0F\xC2\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1444*/ {I_COMISD, 2, {XMMREG,XMMREG,0}, "\331\3\x66\x0F\x2F\110", IF_WILLAMETTE|IF_SSE2},
    /*1445*/ {I_COMISD, 2, {XMMREG,MEMORY,0}, "\301\331\3\x66\x0F\x2F\110", IF_WILLAMETTE|IF_SSE2},
    /*1446*/ {I_CVTDQ2PD, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2},
    /*1447*/ {I_CVTDQ2PD, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2},
    /*1448*/ {I_CVTDQ2PS, 2, {XMMREG,XMMREG,0}, "\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2},
    /*1449*/ {I_CVTDQ2PS, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1450*/ {I_CVTPD2DQ, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2},
    /*1451*/ {I_CVTPD2DQ, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1452*/ {I_CVTPD2PI, 2, {MMXREG,XMMREG,0}, "\3\x66\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /*1453*/ {I_CVTPD2PI, 2, {MMXREG,MEMORY,0}, "\301\3\x66\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /*1454*/ {I_CVTPD2PS, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1455*/ {I_CVTPD2PS, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1456*/ {I_CVTPI2PD, 2, {XMMREG,MMXREG,0}, "\3\x66\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /*1457*/ {I_CVTPI2PD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /*1458*/ {I_CVTPS2DQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2},
    /*1459*/ {I_CVTPS2DQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1460*/ {I_CVTPS2PD, 2, {XMMREG,XMMREG,0}, "\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1461*/ {I_CVTPS2PD, 2, {XMMREG,MEMORY,0}, "\301\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1462*/ {I_CVTSD2SI, 2, {REG32,XMMREG,0}, "\3\xF2\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /*1463*/ {I_CVTSD2SI, 2, {REG32,MEMORY,0}, "\301\3\xF2\x0F\x2D\110", IF_WILLAMETTE|IF_SSE2},
    /*1464*/ {I_CVTSD2SS, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1465*/ {I_CVTSD2SS, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1466*/ {I_CVTSI2SD, 2, {XMMREG,REG32,0}, "\3\xF2\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /*1467*/ {I_CVTSI2SD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x2A\110", IF_WILLAMETTE|IF_SSE2},
    /*1468*/ {I_CVTSS2SD, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1469*/ {I_CVTSS2SD, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5A\110", IF_WILLAMETTE|IF_SSE2},
    /*1470*/ {I_CVTTPD2PI, 2, {MMXREG,XMMREG,0}, "\3\x66\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /*1471*/ {I_CVTTPD2PI, 2, {MMXREG,MEMORY,0}, "\301\3\x66\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /*1472*/ {I_CVTTPD2DQ, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2},
    /*1473*/ {I_CVTTPD2DQ, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xE6\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1474*/ {I_CVTTPS2DQ, 2, {XMMREG,XMMREG,0}, "\333\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2},
    /*1475*/ {I_CVTTPS2DQ, 2, {XMMREG,MEMORY,0}, "\301\333\2\x0F\x5B\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1476*/ {I_CVTTSD2SI, 2, {REG32,XMMREG,0}, "\3\xF2\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /*1477*/ {I_CVTTSD2SI, 2, {REG32,MEMORY,0}, "\301\3\xF2\x0F\x2C\110", IF_WILLAMETTE|IF_SSE2},
    /*1478*/ {I_DIVPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2},
    /*1479*/ {I_DIVPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1480*/ {I_DIVSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2},
    /*1481*/ {I_DIVSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x5E\110", IF_WILLAMETTE|IF_SSE2},
    /*1482*/ {I_MAXPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2},
    /*1483*/ {I_MAXPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1484*/ {I_MAXSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2},
    /*1485*/ {I_MAXSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x5F\110", IF_WILLAMETTE|IF_SSE2},
    /*1486*/ {I_MINPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2},
    /*1487*/ {I_MINPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1488*/ {I_MINSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2},
    /*1489*/ {I_MINSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x5D\110", IF_WILLAMETTE|IF_SSE2},
    /*1490*/ {I_MOVAPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x28\110", IF_WILLAMETTE|IF_SSE2},
    /*1491*/ {I_MOVAPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x29\110", IF_WILLAMETTE|IF_SSE2},
    /*1492*/ {I_MOVAPD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x29\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1493*/ {I_MOVAPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x28\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1494*/ {I_MOVHPD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x17\101", IF_WILLAMETTE|IF_SSE2},
    /*1495*/ {I_MOVHPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x16\110", IF_WILLAMETTE|IF_SSE2},
    /*1496*/ {I_MOVLPD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x13\101", IF_WILLAMETTE|IF_SSE2},
    /*1497*/ {I_MOVLPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x12\110", IF_WILLAMETTE|IF_SSE2},
    /*1498*/ {I_MOVMSKPD, 2, {REG32,XMMREG,0}, "\3\x66\x0F\x50\110", IF_WILLAMETTE|IF_SSE2},
    /*1499*/ {I_MOVSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /*1500*/ {I_MOVSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x11\110", IF_WILLAMETTE|IF_SSE2},
    /*1501*/ {I_MOVSD, 2, {MEMORY,XMMREG,0}, "\300\3\xF2\x0F\x11\101", IF_WILLAMETTE|IF_SSE2},
    /*1502*/ {I_MOVSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /*1503*/ {I_MOVUPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x10\110", IF_WILLAMETTE|IF_SSE2},
    /*1504*/ {I_MOVUPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x11\110", IF_WILLAMETTE|IF_SSE2},
    /*1505*/ {I_MOVUPD, 2, {MEMORY,XMMREG,0}, "\300\3\x66\x0F\x11\101", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1506*/ {I_MOVUPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x10\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1507*/ {I_MULPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x59\110", IF_WILLAMETTE|IF_SSE2},
    /*1508*/ {I_MULPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x59\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1509*/ {I_MULSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x59\110", IF_WILLAMETTE|IF_SSE2},
    /*1510*/ {I_MULSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x59\110", IF_WILLAMETTE|IF_SSE2},
    /*1511*/ {I_ORPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x56\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1512*/ {I_ORPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x56\110", IF_WILLAMETTE|IF_SSE2},
    /*1513*/ {I_SHUFPD, 3, {XMMREG,XMMREG,IMMEDIATE}, "\3\x66\x0F\xC6\110\26", IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    /*1514*/ {I_SHUFPD, 3, {XMMREG,MEMORY,IMMEDIATE}, "\301\3\x66\x0F\xC6\110\26", IF_WILLAMETTE|IF_SSE2|IF_SM|IF_SB|IF_AR2},
    /*1515*/ {I_SQRTPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x51\110", IF_WILLAMETTE|IF_SSE2},
    /*1516*/ {I_SQRTPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x51\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1517*/ {I_SQRTSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x51\110", IF_WILLAMETTE|IF_SSE2},
    /*1518*/ {I_SQRTSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x51\110", IF_WILLAMETTE|IF_SSE2},
    /*1519*/ {I_SUBPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2},
    /*1520*/ {I_SUBPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1521*/ {I_SUBSD, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2},
    /*1522*/ {I_SUBSD, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x5C\110", IF_WILLAMETTE|IF_SSE2},
    /*1523*/ {I_UCOMISD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x2E\110", IF_WILLAMETTE|IF_SSE2},
    /*1524*/ {I_UCOMISD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x2E\110", IF_WILLAMETTE|IF_SSE2},
    /*1525*/ {I_UNPCKHPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x15\110", IF_WILLAMETTE|IF_SSE2},
    /*1526*/ {I_UNPCKHPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x15\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1527*/ {I_UNPCKLPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x14\110", IF_WILLAMETTE|IF_SSE2},
    /*1528*/ {I_UNPCKLPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x14\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1529*/ {I_XORPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x57\110", IF_WILLAMETTE|IF_SSE2},
    /*1530*/ {I_XORPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x57\110", IF_WILLAMETTE|IF_SSE2|IF_SM},
    /*1531*/ {I_ADDSUBPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\xD0\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1532*/ {I_ADDSUBPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\xD0\110", IF_PRESCOTT|IF_SSE3},
    /*1533*/ {I_ADDSUBPS, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\xD0\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1534*/ {I_ADDSUBPS, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\xD0\110", IF_PRESCOTT|IF_SSE3},
    /*1535*/ {I_HADDPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x7C\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1536*/ {I_HADDPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x7C\110", IF_PRESCOTT|IF_SSE3},
    /*1537*/ {I_HADDPS, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x7C\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1538*/ {I_HADDPS, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x7C\110", IF_PRESCOTT|IF_SSE3},
    /*1539*/ {I_HSUBPD, 2, {XMMREG,MEMORY,0}, "\301\3\x66\x0F\x7D\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1540*/ {I_HSUBPD, 2, {XMMREG,XMMREG,0}, "\3\x66\x0F\x7D\110", IF_PRESCOTT|IF_SSE3},
    /*1541*/ {I_HSUBPS, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x7D\110", IF_PRESCOTT|IF_SSE3|IF_SM},
    /*1542*/ {I_HSUBPS, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x7D\110", IF_PRESCOTT|IF_SSE3},
    /*1543*/ {I_LDDQU, 2, {XMMREG,MEMORY,0}, "\3\xF2\x0F\xF0\110", IF_PRESCOTT|IF_SSE3},
    /*1544*/ {I_MOVDDUP, 2, {XMMREG,MEMORY,0}, "\301\3\xF2\x0F\x12\110", IF_PRESCOTT|IF_SSE3},
    /*1545*/ {I_MOVDDUP, 2, {XMMREG,XMMREG,0}, "\3\xF2\x0F\x12\110", IF_PRESCOTT|IF_SSE3},
    /*1546*/ {I_MOVSHDUP, 2, {XMMREG,MEMORY,0}, "\301\3\xF3\x0F\x16\110", IF_PRESCOTT|IF_SSE3},
    /*1547*/ {I_MOVSHDUP, 2, {XMMREG,XMMREG,0}, "\3\xF3\x0F\x16\110", IF_PRESCOTT|IF_SSE3},
    /*1548*/ {I_MOVSLDUP, 2, {XMMREG,MEMORY,0}, "\301\3\xF3\x0F\x12\110", IF_PRESCOTT|IF_SSE3},
    /*1549*/ {I_MOVSLDUP, 2, {XMMREG,XMMREG,0}, "\3\xF3\x0F\x12\110", IF_PRESCOTT|IF_SSE3},

    /*1550   23*/ {I_ADC, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\202\21", IF_8086|IF_SM},
    /*1551   26*/ {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\202\21", IF_8086|IF_SM},
    /*1552   46*/ {I_ADD, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\200\21", IF_8086|IF_SM},
    /*1553   49*/ {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\200\21", IF_8086|IF_SM},
    /*1554   69*/ {I_AND, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\204\21", IF_8086|IF_SM},
    /*1555   72*/ {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\204\21", IF_8086|IF_SM},
    /*1556  158*/ {I_CMP, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\207\21", IF_8086|IF_SM},
    /*1557  161*/ {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\207\21", IF_8086|IF_SM},
    /*1558  595*/ {I_OR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\201\21", IF_8086|IF_SM},
    /*1559  598*/ {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\201\21", IF_8086|IF_SM},
    /*1560  872*/ {I_SBB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\203\21", IF_8086|IF_SM},
    /*1561  875*/ {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\203\21", IF_8086|IF_SM},
    /*1562  954*/ {I_SUB, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\205\21", IF_8086|IF_SM},
    /*1563  957*/ {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\205\21", IF_8086|IF_SM},
    /*1564 1052*/ {I_XOR, 2, {REGMEM|BITS8,IMMEDIATE,0}, "\300\1\x82\206\21", IF_8086|IF_SM},
    /*1565 1055*/ {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0}, "\300\1\x82\206\21", IF_8086|IF_SM},

    /*1566*/ ITEMPLATE_END
};

static struct itemplate *itable_00[] = {
    instrux + 29,
    instrux + 30,
    NULL
};

static struct itemplate *itable_01[] = {
    instrux + 31,
    instrux + 32,
    instrux + 33,
    instrux + 34,
    NULL
};

static struct itemplate *itable_02[] = {
    instrux + 35,
    instrux + 36,
    NULL
};

static struct itemplate *itable_03[] = {
    instrux + 37,
    instrux + 38,
    instrux + 39,
    instrux + 40,
    NULL
};

static struct itemplate *itable_04[] = {
    instrux + 43,
    NULL
};

static struct itemplate *itable_05[] = {
    instrux + 44,
    instrux + 45,
    NULL
};

static struct itemplate *itable_06[] = {
    instrux + 778,
    instrux + 779,
    NULL
};

static struct itemplate *itable_07[] = {
    instrux + 710,
    NULL
};

static struct itemplate *itable_08[] = {
    instrux + 578,
    instrux + 579,
    NULL
};

static struct itemplate *itable_09[] = {
    instrux + 580,
    instrux + 581,
    instrux + 582,
    instrux + 583,
    NULL
};

static struct itemplate *itable_0A[] = {
    instrux + 584,
    instrux + 585,
    NULL
};

static struct itemplate *itable_0B[] = {
    instrux + 586,
    instrux + 587,
    instrux + 588,
    instrux + 589,
    NULL
};

static struct itemplate *itable_0C[] = {
    instrux + 592,
    NULL
};

static struct itemplate *itable_0D[] = {
    instrux + 593,
    instrux + 594,
    NULL
};

static struct itemplate *itable_0E[] = {
    instrux + 778,
    instrux + 779,
    NULL
};

static struct itemplate *itable_0F[] = {
    instrux + 79,
    instrux + 80,
    instrux + 81,
    instrux + 82,
    instrux + 83,
    instrux + 84,
    instrux + 85,
    instrux + 86,
    instrux + 87,
    instrux + 88,
    instrux + 89,
    instrux + 90,
    instrux + 91,
    instrux + 92,
    instrux + 93,
    instrux + 94,
    instrux + 95,
    instrux + 96,
    instrux + 97,
    instrux + 98,
    instrux + 99,
    instrux + 100,
    instrux + 101,
    instrux + 102,
    instrux + 103,
    instrux + 104,
    instrux + 105,
    instrux + 106,
    instrux + 107,
    instrux + 108,
    instrux + 109,
    instrux + 110,
    instrux + 111,
    instrux + 139,
    instrux + 167,
    instrux + 168,
    instrux + 169,
    instrux + 170,
    instrux + 171,
    instrux + 172,
    instrux + 173,
    instrux + 174,
    instrux + 175,
    instrux + 176,
    instrux + 177,
    instrux + 178,
    instrux + 179,
    instrux + 180,
    instrux + 193,
    instrux + 261,
    instrux + 389,
    instrux + 390,
    instrux + 391,
    instrux + 392,
    instrux + 423,
    instrux + 424,
    instrux + 450,
    instrux + 451,
    instrux + 452,
    instrux + 453,
    instrux + 454,
    instrux + 456,
    instrux + 457,
    instrux + 458,
    instrux + 459,
    instrux + 467,
    instrux + 468,
    instrux + 469,
    instrux + 470,
    instrux + 471,
    instrux + 472,
    instrux + 473,
    instrux + 474,
    instrux + 475,
    instrux + 476,
    instrux + 477,
    instrux + 478,
    instrux + 479,
    instrux + 480,
    instrux + 499,
    instrux + 500,
    instrux + 501,
    instrux + 502,
    instrux + 503,
    instrux + 504,
    instrux + 505,
    instrux + 506,
    instrux + 507,
    instrux + 508,
    instrux + 521,
    instrux + 522,
    instrux + 523,
    instrux + 524,
    instrux + 525,
    instrux + 526,
    instrux + 548,
    instrux + 549,
    instrux + 550,
    instrux + 551,
    instrux + 552,
    instrux + 553,
    instrux + 554,
    instrux + 555,
    instrux + 559,
    instrux + 560,
    instrux + 561,
    instrux + 562,
    instrux + 563,
    instrux + 564,
    instrux + 565,
    instrux + 566,
    instrux + 570,
    instrux + 610,
    instrux + 611,
    instrux + 612,
    instrux + 613,
    instrux + 614,
    instrux + 615,
    instrux + 616,
    instrux + 617,
    instrux + 618,
    instrux + 619,
    instrux + 620,
    instrux + 621,
    instrux + 622,
    instrux + 623,
    instrux + 624,
    instrux + 625,
    instrux + 626,
    instrux + 627,
    instrux + 628,
    instrux + 629,
    instrux + 630,
    instrux + 631,
    instrux + 632,
    instrux + 633,
    instrux + 634,
    instrux + 635,
    instrux + 636,
    instrux + 637,
    instrux + 638,
    instrux + 639,
    instrux + 640,
    instrux + 641,
    instrux + 642,
    instrux + 643,
    instrux + 644,
    instrux + 645,
    instrux + 646,
    instrux + 647,
    instrux + 648,
    instrux + 649,
    instrux + 650,
    instrux + 651,
    instrux + 652,
    instrux + 653,
    instrux + 654,
    instrux + 655,
    instrux + 656,
    instrux + 657,
    instrux + 658,
    instrux + 659,
    instrux + 660,
    instrux + 661,
    instrux + 662,
    instrux + 663,
    instrux + 664,
    instrux + 665,
    instrux + 666,
    instrux + 667,
    instrux + 668,
    instrux + 669,
    instrux + 670,
    instrux + 671,
    instrux + 672,
    instrux + 673,
    instrux + 674,
    instrux + 675,
    instrux + 676,
    instrux + 677,
    instrux + 678,
    instrux + 679,
    instrux + 680,
    instrux + 681,
    instrux + 682,
    instrux + 683,
    instrux + 684,
    instrux + 685,
    instrux + 686,
    instrux + 687,
    instrux + 688,
    instrux + 689,
    instrux + 690,
    instrux + 691,
    instrux + 692,
    instrux + 693,
    instrux + 694,
    instrux + 695,
    instrux + 696,
    instrux + 697,
    instrux + 698,
    instrux + 699,
    instrux + 700,
    instrux + 701,
    instrux + 702,
    instrux + 703,
    instrux + 704,
    instrux + 705,
    instrux + 711,
    instrux + 718,
    instrux + 719,
    instrux + 720,
    instrux + 721,
    instrux + 722,
    instrux + 723,
    instrux + 724,
    instrux + 725,
    instrux + 726,
    instrux + 727,
    instrux + 728,
    instrux + 729,
    instrux + 730,
    instrux + 731,
    instrux + 732,
    instrux + 733,
    instrux + 734,
    instrux + 735,
    instrux + 736,
    instrux + 737,
    instrux + 738,
    instrux + 739,
    instrux + 740,
    instrux + 741,
    instrux + 742,
    instrux + 743,
    instrux + 744,
    instrux + 745,
    instrux + 746,
    instrux + 747,
    instrux + 748,
    instrux + 749,
    instrux + 750,
    instrux + 751,
    instrux + 752,
    instrux + 753,
    instrux + 754,
    instrux + 755,
    instrux + 756,
    instrux + 757,
    instrux + 758,
    instrux + 759,
    instrux + 760,
    instrux + 761,
    instrux + 762,
    instrux + 763,
    instrux + 764,
    instrux + 765,
    instrux + 766,
    instrux + 767,
    instrux + 768,
    instrux + 769,
    instrux + 770,
    instrux + 771,
    instrux + 772,
    instrux + 773,
    instrux + 780,
    instrux + 791,
    instrux + 792,
    instrux + 811,
    instrux + 812,
    instrux + 813,
    instrux + 814,
    instrux + 840,
    instrux + 841,
    instrux + 842,
    instrux + 843,
    instrux + 881,
    instrux + 891,
    instrux + 892,
    instrux + 893,
    instrux + 894,
    instrux + 895,
    instrux + 896,
    instrux + 897,
    instrux + 898,
    instrux + 908,
    instrux + 909,
    instrux + 910,
    instrux + 911,
    instrux + 912,
    instrux + 913,
    instrux + 914,
    instrux + 915,
    instrux + 916,
    instrux + 917,
    instrux + 918,
    instrux + 919,
    instrux + 920,
    instrux + 922,
    instrux + 923,
    instrux + 924,
    instrux + 925,
    instrux + 926,
    instrux + 933,
    instrux + 934,
    instrux + 935,
    instrux + 936,
    instrux + 960,
    instrux + 961,
    instrux + 962,
    instrux + 963,
    instrux + 964,
    instrux + 965,
    instrux + 966,
    instrux + 985,
    instrux + 986,
    instrux + 987,
    instrux + 988,
    instrux + 989,
    instrux + 990,
    instrux + 991,
    instrux + 992,
    instrux + 993,
    instrux + 994,
    instrux + 995,
    instrux + 996,
    instrux + 997,
    instrux + 998,
    instrux + 999,
    instrux + 1000,
    instrux + 1001,
    instrux + 1002,
    instrux + 1003,
    instrux + 1004,
    instrux + 1005,
    instrux + 1008,
    instrux + 1009,
    instrux + 1010,
    instrux + 1011,
    instrux + 1012,
    instrux + 1013,
    instrux + 1014,
    instrux + 1015,
    instrux + 1016,
    instrux + 1058,
    instrux + 1059,
    instrux + 1060,
    instrux + 1061,
    instrux + 1062,
    instrux + 1063,
    instrux + 1064,
    instrux + 1065,
    instrux + 1067,
    instrux + 1068,
    instrux + 1069,
    instrux + 1070,
    instrux + 1071,
    instrux + 1072,
    instrux + 1073,
    instrux + 1074,
    instrux + 1075,
    instrux + 1076,
    instrux + 1077,
    instrux + 1078,
    instrux + 1079,
    instrux + 1080,
    instrux + 1081,
    instrux + 1082,
    instrux + 1083,
    instrux + 1084,
    instrux + 1085,
    instrux + 1086,
    instrux + 1087,
    instrux + 1088,
    instrux + 1089,
    instrux + 1090,
    instrux + 1091,
    instrux + 1092,
    instrux + 1093,
    instrux + 1094,
    instrux + 1095,
    instrux + 1096,
    instrux + 1097,
    instrux + 1098,
    instrux + 1099,
    instrux + 1100,
    instrux + 1101,
    instrux + 1102,
    instrux + 1103,
    instrux + 1104,
    instrux + 1105,
    instrux + 1106,
    instrux + 1107,
    instrux + 1108,
    instrux + 1109,
    instrux + 1110,
    instrux + 1111,
    instrux + 1112,
    instrux + 1113,
    instrux + 1114,
    instrux + 1115,
    instrux + 1116,
    instrux + 1117,
    instrux + 1118,
    instrux + 1119,
    instrux + 1120,
    instrux + 1121,
    instrux + 1122,
    instrux + 1123,
    instrux + 1124,
    instrux + 1125,
    instrux + 1126,
    instrux + 1127,
    instrux + 1128,
    instrux + 1129,
    instrux + 1130,
    instrux + 1131,
    instrux + 1132,
    instrux + 1133,
    instrux + 1134,
    instrux + 1135,
    instrux + 1136,
    instrux + 1137,
    instrux + 1138,
    instrux + 1139,
    instrux + 1140,
    instrux + 1141,
    instrux + 1142,
    instrux + 1143,
    instrux + 1144,
    instrux + 1145,
    instrux + 1146,
    instrux + 1147,
    instrux + 1148,
    instrux + 1149,
    instrux + 1150,
    instrux + 1151,
    instrux + 1152,
    instrux + 1153,
    instrux + 1154,
    instrux + 1155,
    instrux + 1156,
    instrux + 1157,
    instrux + 1158,
    instrux + 1159,
    instrux + 1160,
    instrux + 1161,
    instrux + 1162,
    instrux + 1163,
    instrux + 1164,
    instrux + 1165,
    instrux + 1166,
    instrux + 1167,
    instrux + 1168,
    instrux + 1169,
    instrux + 1170,
    instrux + 1171,
    instrux + 1172,
    instrux + 1173,
    instrux + 1174,
    instrux + 1175,
    instrux + 1176,
    instrux + 1177,
    instrux + 1178,
    instrux + 1179,
    instrux + 1180,
    instrux + 1181,
    instrux + 1182,
    instrux + 1183,
    instrux + 1184,
    instrux + 1185,
    instrux + 1186,
    instrux + 1187,
    instrux + 1188,
    instrux + 1189,
    instrux + 1190,
    instrux + 1191,
    instrux + 1192,
    instrux + 1193,
    instrux + 1194,
    instrux + 1195,
    instrux + 1196,
    instrux + 1197,
    instrux + 1198,
    instrux + 1199,
    instrux + 1200,
    instrux + 1201,
    instrux + 1202,
    instrux + 1203,
    instrux + 1204,
    instrux + 1205,
    instrux + 1206,
    instrux + 1207,
    instrux + 1208,
    instrux + 1209,
    instrux + 1210,
    instrux + 1211,
    instrux + 1212,
    instrux + 1213,
    instrux + 1214,
    instrux + 1215,
    instrux + 1216,
    instrux + 1217,
    instrux + 1218,
    instrux + 1219,
    instrux + 1220,
    instrux + 1221,
    instrux + 1222,
    instrux + 1223,
    instrux + 1224,
    instrux + 1225,
    instrux + 1226,
    instrux + 1227,
    instrux + 1228,
    instrux + 1229,
    instrux + 1230,
    instrux + 1231,
    instrux + 1232,
    instrux + 1233,
    instrux + 1235,
    instrux + 1237,
    instrux + 1240,
    instrux + 1241,
    instrux + 1250,
    instrux + 1251,
    instrux + 1252,
    instrux + 1253,
    instrux + 1255,
    instrux + 1258,
    instrux + 1259,
    instrux + 1272,
    instrux + 1273,
    instrux + 1324,
    instrux + 1325,
    instrux + 1334,
    instrux + 1335,
    instrux + 1370,
    instrux + 1371,
    instrux + 1446,
    instrux + 1447,
    instrux + 1448,
    instrux + 1449,
    instrux + 1460,
    instrux + 1461,
    instrux + 1468,
    instrux + 1469,
    instrux + 1474,
    instrux + 1475,
    NULL
};

static struct itemplate *itable_10[] = {
    instrux + 6,
    instrux + 7,
    NULL
};

static struct itemplate *itable_11[] = {
    instrux + 8,
    instrux + 9,
    instrux + 10,
    instrux + 11,
    NULL
};

static struct itemplate *itable_12[] = {
    instrux + 12,
    instrux + 13,
    NULL
};

static struct itemplate *itable_13[] = {
    instrux + 14,
    instrux + 15,
    instrux + 16,
    instrux + 17,
    NULL
};

static struct itemplate *itable_14[] = {
    instrux + 20,
    NULL
};

static struct itemplate *itable_15[] = {
    instrux + 21,
    instrux + 22,
    NULL
};

static struct itemplate *itable_16[] = {
    instrux + 778,
    instrux + 779,
    NULL
};

static struct itemplate *itable_17[] = {
    instrux + 710,
    NULL
};

static struct itemplate *itable_18[] = {
    instrux + 855,
    instrux + 856,
    NULL
};

static struct itemplate *itable_19[] = {
    instrux + 857,
    instrux + 858,
    instrux + 859,
    instrux + 860,
    NULL
};

static struct itemplate *itable_1A[] = {
    instrux + 861,
    instrux + 862,
    NULL
};

static struct itemplate *itable_1B[] = {
    instrux + 863,
    instrux + 864,
    instrux + 865,
    instrux + 866,
    NULL
};

static struct itemplate *itable_1C[] = {
    instrux + 869,
    NULL
};

static struct itemplate *itable_1D[] = {
    instrux + 870,
    instrux + 871,
    NULL
};

static struct itemplate *itable_1E[] = {
    instrux + 778,
    instrux + 779,
    NULL
};

static struct itemplate *itable_1F[] = {
    instrux + 710,
    NULL
};

static struct itemplate *itable_20[] = {
    instrux + 52,
    instrux + 53,
    NULL
};

static struct itemplate *itable_21[] = {
    instrux + 54,
    instrux + 55,
    instrux + 56,
    instrux + 57,
    NULL
};

static struct itemplate *itable_22[] = {
    instrux + 58,
    instrux + 59,
    NULL
};

static struct itemplate *itable_23[] = {
    instrux + 60,
    instrux + 61,
    instrux + 62,
    instrux + 63,
    NULL
};

static struct itemplate *itable_24[] = {
    instrux + 66,
    NULL
};

static struct itemplate *itable_25[] = {
    instrux + 67,
    instrux + 68,
    NULL
};

static struct itemplate *itable_26[] = {
    NULL
};

static struct itemplate *itable_27[] = {
    instrux + 183,
    NULL
};

static struct itemplate *itable_28[] = {
    instrux + 937,
    instrux + 938,
    NULL
};

static struct itemplate *itable_29[] = {
    instrux + 939,
    instrux + 940,
    instrux + 941,
    instrux + 942,
    NULL
};

static struct itemplate *itable_2A[] = {
    instrux + 943,
    instrux + 944,
    NULL
};

static struct itemplate *itable_2B[] = {
    instrux + 945,
    instrux + 946,
    instrux + 947,
    instrux + 948,
    NULL
};

static struct itemplate *itable_2C[] = {
    instrux + 951,
    NULL
};

static struct itemplate *itable_2D[] = {
    instrux + 952,
    instrux + 953,
    NULL
};

static struct itemplate *itable_2E[] = {
    NULL
};

static struct itemplate *itable_2F[] = {
    instrux + 184,
    NULL
};

static struct itemplate *itable_30[] = {
    instrux + 1035,
    instrux + 1036,
    NULL
};

static struct itemplate *itable_31[] = {
    instrux + 1037,
    instrux + 1038,
    instrux + 1039,
    instrux + 1040,
    NULL
};

static struct itemplate *itable_32[] = {
    instrux + 1041,
    instrux + 1042,
    NULL
};

static struct itemplate *itable_33[] = {
    instrux + 1043,
    instrux + 1044,
    instrux + 1045,
    instrux + 1046,
    NULL
};

static struct itemplate *itable_34[] = {
    instrux + 1049,
    NULL
};

static struct itemplate *itable_35[] = {
    instrux + 1050,
    instrux + 1051,
    NULL
};

static struct itemplate *itable_36[] = {
    NULL
};

static struct itemplate *itable_37[] = {
    instrux + 0,
    NULL
};

static struct itemplate *itable_38[] = {
    instrux + 141,
    instrux + 142,
    NULL
};

static struct itemplate *itable_39[] = {
    instrux + 143,
    instrux + 144,
    instrux + 145,
    instrux + 146,
    NULL
};

static struct itemplate *itable_3A[] = {
    instrux + 147,
    instrux + 148,
    NULL
};

static struct itemplate *itable_3B[] = {
    instrux + 149,
    instrux + 150,
    instrux + 151,
    instrux + 152,
    NULL
};

static struct itemplate *itable_3C[] = {
    instrux + 155,
    NULL
};

static struct itemplate *itable_3D[] = {
    instrux + 156,
    instrux + 157,
    NULL
};

static struct itemplate *itable_3E[] = {
    NULL
};

static struct itemplate *itable_3F[] = {
    instrux + 5,
    NULL
};

static struct itemplate *itable_40[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_41[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_42[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_43[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_44[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_45[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_46[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_47[] = {
    instrux + 411,
    instrux + 412,
    NULL
};

static struct itemplate *itable_48[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_49[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4A[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4B[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4C[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4D[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4E[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_4F[] = {
    instrux + 185,
    instrux + 186,
    NULL
};

static struct itemplate *itable_50[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_51[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_52[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_53[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_54[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_55[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_56[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_57[] = {
    instrux + 774,
    instrux + 775,
    NULL
};

static struct itemplate *itable_58[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_59[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5A[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5B[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5C[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5D[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5E[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_5F[] = {
    instrux + 706,
    instrux + 707,
    NULL
};

static struct itemplate *itable_60[] = {
    instrux + 785,
    instrux + 786,
    instrux + 787,
    NULL
};

static struct itemplate *itable_61[] = {
    instrux + 712,
    instrux + 713,
    instrux + 714,
    NULL
};

static struct itemplate *itable_62[] = {
    instrux + 77,
    instrux + 78,
    NULL
};

static struct itemplate *itable_63[] = {
    instrux + 75,
    instrux + 76,
    NULL
};

static struct itemplate *itable_64[] = {
    NULL
};

static struct itemplate *itable_65[] = {
    NULL
};

static struct itemplate *itable_66[] = {
    instrux + 1234,
    instrux + 1236,
    instrux + 1238,
    instrux + 1242,
    instrux + 1243,
    instrux + 1244,
    instrux + 1245,
    instrux + 1246,
    instrux + 1247,
    instrux + 1248,
    instrux + 1249,
    instrux + 1256,
    instrux + 1257,
    instrux + 1260,
    instrux + 1261,
    instrux + 1262,
    instrux + 1263,
    instrux + 1264,
    instrux + 1265,
    instrux + 1266,
    instrux + 1267,
    instrux + 1268,
    instrux + 1269,
    instrux + 1270,
    instrux + 1271,
    instrux + 1274,
    instrux + 1275,
    instrux + 1276,
    instrux + 1277,
    instrux + 1278,
    instrux + 1279,
    instrux + 1280,
    instrux + 1281,
    instrux + 1282,
    instrux + 1283,
    instrux + 1284,
    instrux + 1285,
    instrux + 1286,
    instrux + 1287,
    instrux + 1288,
    instrux + 1289,
    instrux + 1290,
    instrux + 1291,
    instrux + 1292,
    instrux + 1293,
    instrux + 1294,
    instrux + 1295,
    instrux + 1296,
    instrux + 1297,
    instrux + 1298,
    instrux + 1299,
    instrux + 1300,
    instrux + 1301,
    instrux + 1302,
    instrux + 1303,
    instrux + 1304,
    instrux + 1305,
    instrux + 1306,
    instrux + 1307,
    instrux + 1308,
    instrux + 1309,
    instrux + 1310,
    instrux + 1311,
    instrux + 1312,
    instrux + 1313,
    instrux + 1314,
    instrux + 1315,
    instrux + 1316,
    instrux + 1317,
    instrux + 1318,
    instrux + 1319,
    instrux + 1320,
    instrux + 1321,
    instrux + 1322,
    instrux + 1323,
    instrux + 1326,
    instrux + 1327,
    instrux + 1328,
    instrux + 1329,
    instrux + 1330,
    instrux + 1331,
    instrux + 1332,
    instrux + 1333,
    instrux + 1338,
    instrux + 1339,
    instrux + 1340,
    instrux + 1341,
    instrux + 1342,
    instrux + 1343,
    instrux + 1344,
    instrux + 1345,
    instrux + 1346,
    instrux + 1347,
    instrux + 1348,
    instrux + 1349,
    instrux + 1350,
    instrux + 1351,
    instrux + 1352,
    instrux + 1353,
    instrux + 1354,
    instrux + 1355,
    instrux + 1356,
    instrux + 1357,
    instrux + 1358,
    instrux + 1359,
    instrux + 1360,
    instrux + 1361,
    instrux + 1362,
    instrux + 1363,
    instrux + 1364,
    instrux + 1365,
    instrux + 1366,
    instrux + 1367,
    instrux + 1368,
    instrux + 1369,
    instrux + 1372,
    instrux + 1373,
    instrux + 1374,
    instrux + 1375,
    instrux + 1376,
    instrux + 1377,
    instrux + 1378,
    instrux + 1379,
    instrux + 1380,
    instrux + 1381,
    instrux + 1382,
    instrux + 1383,
    instrux + 1384,
    instrux + 1385,
    instrux + 1386,
    instrux + 1387,
    instrux + 1388,
    instrux + 1389,
    instrux + 1390,
    instrux + 1391,
    instrux + 1392,
    instrux + 1393,
    instrux + 1394,
    instrux + 1395,
    instrux + 1396,
    instrux + 1397,
    instrux + 1398,
    instrux + 1399,
    instrux + 1400,
    instrux + 1401,
    instrux + 1404,
    instrux + 1405,
    instrux + 1406,
    instrux + 1407,
    instrux + 1408,
    instrux + 1409,
    instrux + 1412,
    instrux + 1413,
    instrux + 1416,
    instrux + 1417,
    instrux + 1420,
    instrux + 1421,
    instrux + 1424,
    instrux + 1425,
    instrux + 1428,
    instrux + 1429,
    instrux + 1432,
    instrux + 1433,
    instrux + 1436,
    instrux + 1437,
    instrux + 1440,
    instrux + 1441,
    instrux + 1444,
    instrux + 1445,
    instrux + 1452,
    instrux + 1453,
    instrux + 1454,
    instrux + 1455,
    instrux + 1456,
    instrux + 1457,
    instrux + 1458,
    instrux + 1459,
    instrux + 1470,
    instrux + 1471,
    instrux + 1472,
    instrux + 1473,
    instrux + 1478,
    instrux + 1479,
    instrux + 1482,
    instrux + 1483,
    instrux + 1486,
    instrux + 1487,
    instrux + 1490,
    instrux + 1491,
    instrux + 1492,
    instrux + 1493,
    instrux + 1494,
    instrux + 1495,
    instrux + 1496,
    instrux + 1497,
    instrux + 1498,
    instrux + 1503,
    instrux + 1504,
    instrux + 1505,
    instrux + 1506,
    instrux + 1507,
    instrux + 1508,
    instrux + 1511,
    instrux + 1512,
    instrux + 1513,
    instrux + 1514,
    instrux + 1515,
    instrux + 1516,
    instrux + 1519,
    instrux + 1520,
    instrux + 1523,
    instrux + 1524,
    instrux + 1525,
    instrux + 1526,
    instrux + 1527,
    instrux + 1528,
    instrux + 1529,
    instrux + 1530,
    instrux + 1531,
    instrux + 1532,
    instrux + 1535,
    instrux + 1536,
    instrux + 1539,
    instrux + 1540,
    NULL
};

static struct itemplate *itable_67[] = {
    NULL
};

static struct itemplate *itable_68[] = {
    instrux + 782,
    instrux + 783,
    instrux + 784,
    NULL
};

static struct itemplate *itable_69[] = {
    instrux + 394,
    instrux + 396,
    instrux + 398,
    instrux + 400,
    instrux + 402,
    instrux + 404,
    NULL
};

static struct itemplate *itable_6A[] = {
    instrux + 781,
    NULL
};

static struct itemplate *itable_6B[] = {
    instrux + 393,
    instrux + 395,
    instrux + 397,
    instrux + 399,
    instrux + 401,
    instrux + 403,
    NULL
};

static struct itemplate *itable_6C[] = {
    instrux + 416,
    NULL
};

static struct itemplate *itable_6D[] = {
    instrux + 417,
    instrux + 418,
    NULL
};

static struct itemplate *itable_6E[] = {
    instrux + 607,
    NULL
};

static struct itemplate *itable_6F[] = {
    instrux + 608,
    instrux + 609,
    NULL
};

static struct itemplate *itable_70[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_71[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_72[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_73[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_74[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_75[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_76[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_77[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_78[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_79[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7A[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7B[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7C[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7D[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7E[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_7F[] = {
    instrux + 1066,
    NULL
};

static struct itemplate *itable_80[] = {
    instrux + 23,
    instrux + 26,
    instrux + 46,
    instrux + 49,
    instrux + 69,
    instrux + 72,
    instrux + 158,
    instrux + 161,
    instrux + 595,
    instrux + 598,
    instrux + 872,
    instrux + 875,
    instrux + 954,
    instrux + 957,
    instrux + 1052,
    instrux + 1055,
    NULL
};

static struct itemplate *itable_81[] = {
    instrux + 24,
    instrux + 25,
    instrux + 27,
    instrux + 28,
    instrux + 47,
    instrux + 48,
    instrux + 50,
    instrux + 51,
    instrux + 70,
    instrux + 71,
    instrux + 73,
    instrux + 74,
    instrux + 159,
    instrux + 160,
    instrux + 162,
    instrux + 163,
    instrux + 596,
    instrux + 597,
    instrux + 599,
    instrux + 600,
    instrux + 873,
    instrux + 874,
    instrux + 876,
    instrux + 877,
    instrux + 955,
    instrux + 956,
    instrux + 958,
    instrux + 959,
    instrux + 1053,
    instrux + 1054,
    instrux + 1056,
    instrux + 1057,
    NULL
};

static struct itemplate *itable_82[] = {
    instrux + 1550,
    instrux + 1551,
    instrux + 1552,
    instrux + 1553,
    instrux + 1554,
    instrux + 1555,
    instrux + 1556,
    instrux + 1557,
    instrux + 1558,
    instrux + 1559,
    instrux + 1560,
    instrux + 1561,
    instrux + 1562,
    instrux + 1563,
    instrux + 1564,
    instrux + 1565,
    NULL
};

static struct itemplate *itable_83[] = {
    instrux + 18,
    instrux + 19,
    instrux + 41,
    instrux + 42,
    instrux + 64,
    instrux + 65,
    instrux + 153,
    instrux + 154,
    instrux + 590,
    instrux + 591,
    instrux + 867,
    instrux + 868,
    instrux + 949,
    instrux + 950,
    instrux + 1047,
    instrux + 1048,
    NULL
};

static struct itemplate *itable_84[] = {
    instrux + 967,
    instrux + 968,
    instrux + 973,
    NULL
};

static struct itemplate *itable_85[] = {
    instrux + 969,
    instrux + 970,
    instrux + 971,
    instrux + 972,
    instrux + 974,
    instrux + 975,
    NULL
};

static struct itemplate *itable_86[] = {
    instrux + 1021,
    instrux + 1022,
    instrux + 1027,
    instrux + 1028,
    NULL
};

static struct itemplate *itable_87[] = {
    instrux + 1023,
    instrux + 1024,
    instrux + 1025,
    instrux + 1026,
    instrux + 1029,
    instrux + 1030,
    instrux + 1031,
    instrux + 1032,
    NULL
};

static struct itemplate *itable_88[] = {
    instrux + 527,
    instrux + 528,
    NULL
};

static struct itemplate *itable_89[] = {
    instrux + 529,
    instrux + 530,
    instrux + 531,
    instrux + 532,
    NULL
};

static struct itemplate *itable_8A[] = {
    instrux + 533,
    instrux + 534,
    NULL
};

static struct itemplate *itable_8B[] = {
    instrux + 535,
    instrux + 536,
    instrux + 537,
    instrux + 538,
    NULL
};

static struct itemplate *itable_8C[] = {
    instrux + 509,
    instrux + 510,
    instrux + 511,
    NULL
};

static struct itemplate *itable_8D[] = {
    instrux + 462,
    instrux + 463,
    NULL
};

static struct itemplate *itable_8E[] = {
    instrux + 512,
    instrux + 513,
    instrux + 514,
    NULL
};

static struct itemplate *itable_8F[] = {
    instrux + 708,
    instrux + 709,
    NULL
};

static struct itemplate *itable_90[] = {
    instrux + 574,
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    instrux + 1239,
    NULL
};

static struct itemplate *itable_91[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_92[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_93[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_94[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_95[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_96[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_97[] = {
    instrux + 1017,
    instrux + 1018,
    instrux + 1019,
    instrux + 1020,
    NULL
};

static struct itemplate *itable_98[] = {
    instrux + 134,
    instrux + 182,
    NULL
};

static struct itemplate *itable_99[] = {
    instrux + 135,
    instrux + 181,
    NULL
};

static struct itemplate *itable_9A[] = {
    instrux + 118,
    instrux + 119,
    instrux + 120,
    instrux + 121,
    instrux + 122,
    NULL
};

static struct itemplate *itable_9B[] = {
    instrux + 212,
    instrux + 244,
    instrux + 262,
    instrux + 281,
    instrux + 331,
    instrux + 340,
    instrux + 341,
    instrux + 346,
    instrux + 347,
    instrux + 1006,
    instrux + 1007,
    NULL
};

static struct itemplate *itable_9C[] = {
    instrux + 788,
    instrux + 789,
    instrux + 790,
    NULL
};

static struct itemplate *itable_9D[] = {
    instrux + 715,
    instrux + 716,
    instrux + 717,
    NULL
};

static struct itemplate *itable_9E[] = {
    instrux + 844,
    NULL
};

static struct itemplate *itable_9F[] = {
    instrux + 455,
    NULL
};

static struct itemplate *itable_A0[] = {
    instrux + 515,
    NULL
};

static struct itemplate *itable_A1[] = {
    instrux + 516,
    instrux + 517,
    NULL
};

static struct itemplate *itable_A2[] = {
    instrux + 518,
    NULL
};

static struct itemplate *itable_A3[] = {
    instrux + 519,
    instrux + 520,
    NULL
};

static struct itemplate *itable_A4[] = {
    instrux + 556,
    NULL
};

static struct itemplate *itable_A5[] = {
    instrux + 557,
    instrux + 558,
    NULL
};

static struct itemplate *itable_A6[] = {
    instrux + 164,
    NULL
};

static struct itemplate *itable_A7[] = {
    instrux + 165,
    instrux + 166,
    NULL
};

static struct itemplate *itable_A8[] = {
    instrux + 976,
    NULL
};

static struct itemplate *itable_A9[] = {
    instrux + 977,
    instrux + 978,
    NULL
};

static struct itemplate *itable_AA[] = {
    instrux + 930,
    NULL
};

static struct itemplate *itable_AB[] = {
    instrux + 931,
    instrux + 932,
    NULL
};

static struct itemplate *itable_AC[] = {
    instrux + 481,
    NULL
};

static struct itemplate *itable_AD[] = {
    instrux + 482,
    instrux + 483,
    NULL
};

static struct itemplate *itable_AE[] = {
    instrux + 878,
    NULL
};

static struct itemplate *itable_AF[] = {
    instrux + 879,
    instrux + 880,
    NULL
};

static struct itemplate *itable_B0[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B1[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B2[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B3[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B4[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B5[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B6[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B7[] = {
    instrux + 539,
    NULL
};

static struct itemplate *itable_B8[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_B9[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BA[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BB[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BC[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BD[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BE[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_BF[] = {
    instrux + 540,
    instrux + 541,
    NULL
};

static struct itemplate *itable_C0[] = {
    instrux + 795,
    instrux + 804,
    instrux + 824,
    instrux + 833,
    instrux + 848,
    instrux + 884,
    instrux + 901,
    NULL
};

static struct itemplate *itable_C1[] = {
    instrux + 798,
    instrux + 801,
    instrux + 807,
    instrux + 810,
    instrux + 827,
    instrux + 830,
    instrux + 836,
    instrux + 839,
    instrux + 851,
    instrux + 854,
    instrux + 887,
    instrux + 890,
    instrux + 904,
    instrux + 907,
    NULL
};

static struct itemplate *itable_C2[] = {
    instrux + 817,
    instrux + 821,
    NULL
};

static struct itemplate *itable_C3[] = {
    instrux + 816,
    instrux + 820,
    NULL
};

static struct itemplate *itable_C4[] = {
    instrux + 465,
    instrux + 466,
    NULL
};

static struct itemplate *itable_C5[] = {
    instrux + 460,
    instrux + 461,
    NULL
};

static struct itemplate *itable_C6[] = {
    instrux + 542,
    instrux + 545,
    NULL
};

static struct itemplate *itable_C7[] = {
    instrux + 543,
    instrux + 544,
    instrux + 546,
    instrux + 547,
    NULL
};

static struct itemplate *itable_C8[] = {
    instrux + 194,
    NULL
};

static struct itemplate *itable_C9[] = {
    instrux + 464,
    NULL
};

static struct itemplate *itable_CA[] = {
    instrux + 819,
    NULL
};

static struct itemplate *itable_CB[] = {
    instrux + 818,
    NULL
};

static struct itemplate *itable_CC[] = {
    instrux + 421,
    NULL
};

static struct itemplate *itable_CD[] = {
    instrux + 419,
    NULL
};

static struct itemplate *itable_CE[] = {
    instrux + 422,
    NULL
};

static struct itemplate *itable_CF[] = {
    instrux + 425,
    instrux + 426,
    instrux + 427,
    NULL
};

static struct itemplate *itable_D0[] = {
    instrux + 793,
    instrux + 802,
    instrux + 822,
    instrux + 831,
    instrux + 846,
    instrux + 882,
    instrux + 899,
    NULL
};

static struct itemplate *itable_D1[] = {
    instrux + 796,
    instrux + 799,
    instrux + 805,
    instrux + 808,
    instrux + 825,
    instrux + 828,
    instrux + 834,
    instrux + 837,
    instrux + 849,
    instrux + 852,
    instrux + 885,
    instrux + 888,
    instrux + 902,
    instrux + 905,
    NULL
};

static struct itemplate *itable_D2[] = {
    instrux + 794,
    instrux + 803,
    instrux + 823,
    instrux + 832,
    instrux + 847,
    instrux + 883,
    instrux + 900,
    NULL
};

static struct itemplate *itable_D3[] = {
    instrux + 797,
    instrux + 800,
    instrux + 806,
    instrux + 809,
    instrux + 826,
    instrux + 829,
    instrux + 835,
    instrux + 838,
    instrux + 850,
    instrux + 853,
    instrux + 886,
    instrux + 889,
    instrux + 903,
    instrux + 906,
    NULL
};

static struct itemplate *itable_D4[] = {
    instrux + 3,
    instrux + 4,
    NULL
};

static struct itemplate *itable_D5[] = {
    instrux + 1,
    instrux + 2,
    NULL
};

static struct itemplate *itable_D6[] = {
    instrux + 845,
    NULL
};

static struct itemplate *itable_D7[] = {
    instrux + 1033,
    instrux + 1034,
    NULL
};

static struct itemplate *itable_D8[] = {
    instrux + 199,
    instrux + 202,
    instrux + 204,
    instrux + 229,
    instrux + 231,
    instrux + 232,
    instrux + 237,
    instrux + 239,
    instrux + 240,
    instrux + 245,
    instrux + 249,
    instrux + 250,
    instrux + 253,
    instrux + 257,
    instrux + 258,
    instrux + 307,
    instrux + 311,
    instrux + 312,
    instrux + 348,
    instrux + 352,
    instrux + 353,
    instrux + 356,
    instrux + 360,
    instrux + 361,
    NULL
};

static struct itemplate *itable_D9[] = {
    instrux + 197,
    instrux + 198,
    instrux + 211,
    instrux + 242,
    instrux + 243,
    instrux + 280,
    instrux + 294,
    instrux + 297,
    instrux + 298,
    instrux + 299,
    instrux + 300,
    instrux + 301,
    instrux + 302,
    instrux + 303,
    instrux + 304,
    instrux + 305,
    instrux + 306,
    instrux + 319,
    instrux + 321,
    instrux + 322,
    instrux + 325,
    instrux + 326,
    instrux + 327,
    instrux + 328,
    instrux + 329,
    instrux + 332,
    instrux + 334,
    instrux + 335,
    instrux + 336,
    instrux + 337,
    instrux + 342,
    instrux + 364,
    instrux + 374,
    instrux + 375,
    instrux + 376,
    instrux + 377,
    instrux + 378,
    instrux + 379,
    instrux + 380,
    instrux + 381,
    NULL
};

static struct itemplate *itable_DA[] = {
    instrux + 213,
    instrux + 214,
    instrux + 215,
    instrux + 216,
    instrux + 217,
    instrux + 218,
    instrux + 227,
    instrux + 228,
    instrux + 265,
    instrux + 267,
    instrux + 269,
    instrux + 271,
    instrux + 273,
    instrux + 278,
    instrux + 290,
    instrux + 292,
    instrux + 373,
    NULL
};

static struct itemplate *itable_DB[] = {
    instrux + 219,
    instrux + 220,
    instrux + 221,
    instrux + 222,
    instrux + 223,
    instrux + 224,
    instrux + 225,
    instrux + 226,
    instrux + 233,
    instrux + 234,
    instrux + 275,
    instrux + 282,
    instrux + 284,
    instrux + 288,
    instrux + 296,
    instrux + 315,
    instrux + 316,
    instrux + 317,
    instrux + 318,
    instrux + 333,
    instrux + 344,
    instrux + 367,
    instrux + 368,
    NULL
};

static struct itemplate *itable_DC[] = {
    instrux + 200,
    instrux + 201,
    instrux + 203,
    instrux + 230,
    instrux + 238,
    instrux + 246,
    instrux + 247,
    instrux + 248,
    instrux + 254,
    instrux + 255,
    instrux + 256,
    instrux + 308,
    instrux + 309,
    instrux + 310,
    instrux + 349,
    instrux + 350,
    instrux + 351,
    instrux + 357,
    instrux + 358,
    instrux + 359,
    NULL
};

static struct itemplate *itable_DD[] = {
    instrux + 263,
    instrux + 287,
    instrux + 295,
    instrux + 320,
    instrux + 323,
    instrux + 330,
    instrux + 338,
    instrux + 339,
    instrux + 343,
    instrux + 345,
    instrux + 365,
    instrux + 366,
    instrux + 371,
    instrux + 372,
    NULL
};

static struct itemplate *itable_DE[] = {
    instrux + 205,
    instrux + 206,
    instrux + 241,
    instrux + 251,
    instrux + 252,
    instrux + 259,
    instrux + 260,
    instrux + 266,
    instrux + 268,
    instrux + 270,
    instrux + 272,
    instrux + 274,
    instrux + 279,
    instrux + 291,
    instrux + 293,
    instrux + 313,
    instrux + 314,
    instrux + 354,
    instrux + 355,
    instrux + 362,
    instrux + 363,
    NULL
};

static struct itemplate *itable_DF[] = {
    instrux + 207,
    instrux + 208,
    instrux + 209,
    instrux + 210,
    instrux + 235,
    instrux + 236,
    instrux + 264,
    instrux + 276,
    instrux + 277,
    instrux + 283,
    instrux + 285,
    instrux + 286,
    instrux + 289,
    instrux + 324,
    instrux + 369,
    instrux + 370,
    NULL
};

static struct itemplate *itable_E0[] = {
    instrux + 490,
    instrux + 491,
    instrux + 492,
    instrux + 493,
    instrux + 494,
    instrux + 495,
    NULL
};

static struct itemplate *itable_E1[] = {
    instrux + 487,
    instrux + 488,
    instrux + 489,
    instrux + 496,
    instrux + 497,
    instrux + 498,
    NULL
};

static struct itemplate *itable_E2[] = {
    instrux + 484,
    instrux + 485,
    instrux + 486,
    NULL
};

static struct itemplate *itable_E3[] = {
    instrux + 428,
    instrux + 429,
    NULL
};

static struct itemplate *itable_E4[] = {
    instrux + 405,
    NULL
};

static struct itemplate *itable_E5[] = {
    instrux + 406,
    instrux + 407,
    NULL
};

static struct itemplate *itable_E6[] = {
    instrux + 601,
    NULL
};

static struct itemplate *itable_E7[] = {
    instrux + 602,
    instrux + 603,
    NULL
};

static struct itemplate *itable_E8[] = {
    instrux + 112,
    instrux + 113,
    instrux + 114,
    instrux + 115,
    instrux + 116,
    instrux + 117,
    NULL
};

static struct itemplate *itable_E9[] = {
    instrux + 431,
    instrux + 432,
    instrux + 433,
    NULL
};

static struct itemplate *itable_EA[] = {
    instrux + 434,
    instrux + 435,
    instrux + 436,
    instrux + 437,
    instrux + 438,
    NULL
};

static struct itemplate *itable_EB[] = {
    instrux + 430,
    NULL
};

static struct itemplate *itable_EC[] = {
    instrux + 408,
    NULL
};

static struct itemplate *itable_ED[] = {
    instrux + 409,
    instrux + 410,
    NULL
};

static struct itemplate *itable_EE[] = {
    instrux + 604,
    NULL
};

static struct itemplate *itable_EF[] = {
    instrux + 605,
    instrux + 606,
    NULL
};

static struct itemplate *itable_F0[] = {
    NULL
};

static struct itemplate *itable_F1[] = {
    instrux + 420,
    instrux + 921,
    NULL
};

static struct itemplate *itable_F2[] = {
    instrux + 1254,
    instrux + 1336,
    instrux + 1337,
    instrux + 1402,
    instrux + 1403,
    instrux + 1410,
    instrux + 1411,
    instrux + 1414,
    instrux + 1415,
    instrux + 1418,
    instrux + 1419,
    instrux + 1422,
    instrux + 1423,
    instrux + 1426,
    instrux + 1427,
    instrux + 1430,
    instrux + 1431,
    instrux + 1434,
    instrux + 1435,
    instrux + 1438,
    instrux + 1439,
    instrux + 1442,
    instrux + 1443,
    instrux + 1450,
    instrux + 1451,
    instrux + 1462,
    instrux + 1463,
    instrux + 1464,
    instrux + 1465,
    instrux + 1466,
    instrux + 1467,
    instrux + 1476,
    instrux + 1477,
    instrux + 1480,
    instrux + 1481,
    instrux + 1484,
    instrux + 1485,
    instrux + 1488,
    instrux + 1489,
    instrux + 1499,
    instrux + 1500,
    instrux + 1501,
    instrux + 1502,
    instrux + 1509,
    instrux + 1510,
    instrux + 1517,
    instrux + 1518,
    instrux + 1521,
    instrux + 1522,
    instrux + 1533,
    instrux + 1534,
    instrux + 1537,
    instrux + 1538,
    instrux + 1541,
    instrux + 1542,
    instrux + 1543,
    instrux + 1544,
    instrux + 1545,
    NULL
};

static struct itemplate *itable_F3[] = {
    instrux + 1546,
    instrux + 1547,
    instrux + 1548,
    instrux + 1549,
    NULL
};

static struct itemplate *itable_F4[] = {
    instrux + 382,
    NULL
};

static struct itemplate *itable_F5[] = {
    instrux + 140,
    NULL
};

static struct itemplate *itable_F6[] = {
    instrux + 190,
    instrux + 383,
    instrux + 386,
    instrux + 567,
    instrux + 571,
    instrux + 575,
    instrux + 979,
    instrux + 982,
    NULL
};

static struct itemplate *itable_F7[] = {
    instrux + 191,
    instrux + 192,
    instrux + 384,
    instrux + 385,
    instrux + 387,
    instrux + 388,
    instrux + 568,
    instrux + 569,
    instrux + 572,
    instrux + 573,
    instrux + 576,
    instrux + 577,
    instrux + 980,
    instrux + 981,
    instrux + 983,
    instrux + 984,
    NULL
};

static struct itemplate *itable_F8[] = {
    instrux + 136,
    NULL
};

static struct itemplate *itable_F9[] = {
    instrux + 927,
    NULL
};

static struct itemplate *itable_FA[] = {
    instrux + 138,
    NULL
};

static struct itemplate *itable_FB[] = {
    instrux + 929,
    NULL
};

static struct itemplate *itable_FC[] = {
    instrux + 137,
    NULL
};

static struct itemplate *itable_FD[] = {
    instrux + 928,
    NULL
};

static struct itemplate *itable_FE[] = {
    instrux + 187,
    instrux + 413,
    NULL
};

static struct itemplate *itable_FF[] = {
    instrux + 123,
    instrux + 124,
    instrux + 125,
    instrux + 126,
    instrux + 127,
    instrux + 128,
    instrux + 129,
    instrux + 130,
    instrux + 131,
    instrux + 132,
    instrux + 133,
    instrux + 188,
    instrux + 189,
    instrux + 414,
    instrux + 415,
    instrux + 439,
    instrux + 440,
    instrux + 441,
    instrux + 442,
    instrux + 443,
    instrux + 444,
    instrux + 445,
    instrux + 446,
    instrux + 447,
    instrux + 448,
    instrux + 449,
    instrux + 776,
    instrux + 777,
    NULL
};

struct itemplate **itable[] = {
    itable_00,
    itable_01,
    itable_02,
    itable_03,
    itable_04,
    itable_05,
    itable_06,
    itable_07,
    itable_08,
    itable_09,
    itable_0A,
    itable_0B,
    itable_0C,
    itable_0D,
    itable_0E,
    itable_0F,
    itable_10,
    itable_11,
    itable_12,
    itable_13,
    itable_14,
    itable_15,
    itable_16,
    itable_17,
    itable_18,
    itable_19,
    itable_1A,
    itable_1B,
    itable_1C,
    itable_1D,
    itable_1E,
    itable_1F,
    itable_20,
    itable_21,
    itable_22,
    itable_23,
    itable_24,
    itable_25,
    itable_26,
    itable_27,
    itable_28,
    itable_29,
    itable_2A,
    itable_2B,
    itable_2C,
    itable_2D,
    itable_2E,
    itable_2F,
    itable_30,
    itable_31,
    itable_32,
    itable_33,
    itable_34,
    itable_35,
    itable_36,
    itable_37,
    itable_38,
    itable_39,
    itable_3A,
    itable_3B,
    itable_3C,
    itable_3D,
    itable_3E,
    itable_3F,
    itable_40,
    itable_41,
    itable_42,
    itable_43,
    itable_44,
    itable_45,
    itable_46,
    itable_47,
    itable_48,
    itable_49,
    itable_4A,
    itable_4B,
    itable_4C,
    itable_4D,
    itable_4E,
    itable_4F,
    itable_50,
    itable_51,
    itable_52,
    itable_53,
    itable_54,
    itable_55,
    itable_56,
    itable_57,
    itable_58,
    itable_59,
    itable_5A,
    itable_5B,
    itable_5C,
    itable_5D,
    itable_5E,
    itable_5F,
    itable_60,
    itable_61,
    itable_62,
    itable_63,
    itable_64,
    itable_65,
    itable_66,
    itable_67,
    itable_68,
    itable_69,
    itable_6A,
    itable_6B,
    itable_6C,
    itable_6D,
    itable_6E,
    itable_6F,
    itable_70,
    itable_71,
    itable_72,
    itable_73,
    itable_74,
    itable_75,
    itable_76,
    itable_77,
    itable_78,
    itable_79,
    itable_7A,
    itable_7B,
    itable_7C,
    itable_7D,
    itable_7E,
    itable_7F,
    itable_80,
    itable_81,
    itable_82,
    itable_83,
    itable_84,
    itable_85,
    itable_86,
    itable_87,
    itable_88,
    itable_89,
    itable_8A,
    itable_8B,
    itable_8C,
    itable_8D,
    itable_8E,
    itable_8F,
    itable_90,
    itable_91,
    itable_92,
    itable_93,
    itable_94,
    itable_95,
    itable_96,
    itable_97,
    itable_98,
    itable_99,
    itable_9A,
    itable_9B,
    itable_9C,
    itable_9D,
    itable_9E,
    itable_9F,
    itable_A0,
    itable_A1,
    itable_A2,
    itable_A3,
    itable_A4,
    itable_A5,
    itable_A6,
    itable_A7,
    itable_A8,
    itable_A9,
    itable_AA,
    itable_AB,
    itable_AC,
    itable_AD,
    itable_AE,
    itable_AF,
    itable_B0,
    itable_B1,
    itable_B2,
    itable_B3,
    itable_B4,
    itable_B5,
    itable_B6,
    itable_B7,
    itable_B8,
    itable_B9,
    itable_BA,
    itable_BB,
    itable_BC,
    itable_BD,
    itable_BE,
    itable_BF,
    itable_C0,
    itable_C1,
    itable_C2,
    itable_C3,
    itable_C4,
    itable_C5,
    itable_C6,
    itable_C7,
    itable_C8,
    itable_C9,
    itable_CA,
    itable_CB,
    itable_CC,
    itable_CD,
    itable_CE,
    itable_CF,
    itable_D0,
    itable_D1,
    itable_D2,
    itable_D3,
    itable_D4,
    itable_D5,
    itable_D6,
    itable_D7,
    itable_D8,
    itable_D9,
    itable_DA,
    itable_DB,
    itable_DC,
    itable_DD,
    itable_DE,
    itable_DF,
    itable_E0,
    itable_E1,
    itable_E2,
    itable_E3,
    itable_E4,
    itable_E5,
    itable_E6,
    itable_E7,
    itable_E8,
    itable_E9,
    itable_EA,
    itable_EB,
    itable_EC,
    itable_ED,
    itable_EE,
    itable_EF,
    itable_F0,
    itable_F1,
    itable_F2,
    itable_F3,
    itable_F4,
    itable_F5,
    itable_F6,
    itable_F7,
    itable_F8,
    itable_F9,
    itable_FA,
    itable_FB,
    itable_FC,
    itable_FD,
    itable_FE,
    itable_FF,
};
