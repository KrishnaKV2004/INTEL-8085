//  Opcode Mapping ---->

#define NUM_INSRUCTIONS 256

//  Opcode Structure ---->

typedef struct OPCODE
{
    char *mnemonic;
    uint8_t opcode;
    uint8_t bytes;
} OPCODE;

OPCODE Opcode[NUM_INSRUCTIONS];

//  Mapping Instructions ---->

//  00 --> 0F

Opcode[0x00] = (OPCODE){"NOP", 0x00, 1};
Opcode[0x01] = (OPCODE){"LXI B", 0x01, 3};
Opcode[0x02] = (OPCODE){"STAX B", 0x02, 1};
Opcode[0x03] = (OPCODE){"INX B", 0x03, 1};
Opcode[0x04] = (OPCODE){"INR B", 0x04, 1};
Opcode[0x05] = (OPCODE){"DCR B", 0x05, 1};
Opcode[0x06] = (OPCODE){"MVI B", 0x06, 2};
Opcode[0x07] = (OPCODE){"RLC", 0x07, 1};
Opcode[0x08] = (OPCODE){};
Opcode[0x09] = (OPCODE){"DAD B", 0x09, 1};
Opcode[0x0A] = (OPCODE){"LDAX B", 0x0A, 1};
Opcode[0x0B] = (OPCODE){"DCX B", 0x0B, 1};
Opcode[0x0C] = (OPCODE){"INR C", 0x0C, 1};
Opcode[0x0D] = (OPCODE){"DCR C", 0x0D, 1};
Opcode[0x0E] = (OPCODE){"MVI C", 0x0E, 2};
Opcode[0x0F] = (OPCODE){"RRC", 0x0F, 1};

//  10 --> 1F

Opcode[0x10] = (OPCODE){};
Opcode[0x11] = (OPCODE){"LXI D", 0x11, 3};
Opcode[0x12] = (OPCODE){"STAX D", 0x12, 1};
Opcode[0x13] = (OPCODE){"INX D", 0x13, 1};
Opcode[0x14] = (OPCODE){"INR D", 0x14, 1};
Opcode[0x15] = (OPCODE){"DCR D", 0x15, 1};
Opcode[0x16] = (OPCODE){"MVI D", 0x16, 2};
Opcode[0x17] = (OPCODE){"RAL", 0x17, 1};
Opcode[0x18] = (OPCODE){};
Opcode[0x19] = (OPCODE){"DAD D", 0x19, 1};
Opcode[0x1A] = (OPCODE){"LDAX D", 0x1A, 1};
Opcode[0x1B] = (OPCODE){"DCX D", 0x1B, 1};
Opcode[0x1C] = (OPCODE){"INR E", 0x1C, 1};
Opcode[0x1D] = (OPCODE){"DCR E", 0x1D, 1};
Opcode[0x1E] = (OPCODE){"MVI E", 0x1E, 2};
Opcode[0x1F] = (OPCODE){"RAR", 0x1F, 1};

//  20 --> 2F

Opcode[0x20] = (OPCODE){"RIM", 0x20, 1};
Opcode[0x21] = (OPCODE){"LXI H", 0x21, 3};
Opcode[0x22] = (OPCODE){"SHLD", 0x22, 3};
Opcode[0x23] = (OPCODE){"INX H", 0x23, 1};
Opcode[0x24] = (OPCODE){"INR H", 0x24, 1};
Opcode[0x25] = (OPCODE){"DCR H", 0x25, 1};
Opcode[0x26] = (OPCODE){"MVI H", 0x26, 2};
Opcode[0x27] = (OPCODE){"DAA", 0x27, 1};
Opcode[0x28] = (OPCODE){};
Opcode[0x29] = (OPCODE){"DAD H", 0x29, 1};
Opcode[0x2A] = (OPCODE){"LHLD", 0x2A, 3};
Opcode[0x2B] = (OPCODE){"DCX H", 0x2B, 1};
Opcode[0x2C] = (OPCODE){"INR L", 0x2C, 1};
Opcode[0x2D] = (OPCODE){"DCR L", 0x2D, 1};
Opcode[0x2E] = (OPCODE){"MVI L, DATA", 0x2E, 2};
Opcode[0x2F] = (OPCODE){"CMA", 0x2F, 1};

//  30 --> 3F

Opcode[0x30] = (OPCODE){"SIM", 0x30, 1};
Opcode[0x31] = (OPCODE){"LXI SP", 0x31, 3};
Opcode[0x32] = (OPCODE){"STA", 0x32, 3};
Opcode[0x33] = (OPCODE){"INX SP", 0x33, 1};
Opcode[0x34] = (OPCODE){"INR M", 0x34, 1};
Opcode[0x35] = (OPCODE){"DCR M", 0x35, 1};
Opcode[0x36] = (OPCODE){"MVI M", 0x36, 2};
Opcode[0x37] = (OPCODE){"STC", 0x37, 1};
Opcode[0x38] = (OPCODE){};
Opcode[0x39] = (OPCODE){"DAD SP", 0x39, 1};
Opcode[0x3A] = (OPCODE){"LDA", 0x3A, 3};
Opcode[0x3B] = (OPCODE){"DCX SP", 0x3B, 1};
Opcode[0x3C] = (OPCODE){"INR A", 0x3C, 1};
Opcode[0x3D] = (OPCODE){"DCR A", 0x3D, 1};
Opcode[0x3E] = (OPCODE){"MVI A", 0x3E, 2};
Opcode[0x3F] = (OPCODE){"CMC", 0x3F, 1};

//  40 --> 4F

Opcode[0x40] = (OPCODE){"MOV B,B", 0x40, 1};
Opcode[0x41] = (OPCODE){"MOV B,C", 0x41, 1};
Opcode[0x42] = (OPCODE){"MOV B,D", 0x42, 1};
Opcode[0x43] = (OPCODE){"MOV B,E", 0x43, 1};
Opcode[0x44] = (OPCODE){"MOV B,H", 0x44, 1};
Opcode[0x45] = (OPCODE){"MOV B,L", 0x45, 1};
Opcode[0x46] = (OPCODE){"MOV B,M", 0x46, 1};
Opcode[0x47] = (OPCODE){"MOV B,A", 0x47, 1};
Opcode[0x48] = (OPCODE){"MOV C,B", 0x48, 1};
Opcode[0x49] = (OPCODE){"MOV C,C", 0x49, 1};
Opcode[0x4A] = (OPCODE){"MOV C,D", 0x4A, 1};
Opcode[0x4B] = (OPCODE){"MOV C,E", 0x4B, 1};
Opcode[0x4C] = (OPCODE){"MOV C,H", 0x4C, 1};
Opcode[0x4D] = (OPCODE){"MOV C,L", 0x4D, 1};
Opcode[0x4E] = (OPCODE){"MOV C,M", 0x4E, 1};
Opcode[0x4F] = (OPCODE){"MOV C,A", 0x4F, 1};

//  50 --> 5F

Opcode[0x50] = (OPCODE){"MOV D,B", 0x50, 1};
Opcode[0x51] = (OPCODE){"MOV D,C", 0x51, 1};
Opcode[0x52] = (OPCODE){"MOV D,D", 0x52, 1};
Opcode[0x53] = (OPCODE){"MOV D,E", 0x53, 1};
Opcode[0x54] = (OPCODE){"MOV D,H", 0x54, 1};
Opcode[0x55] = (OPCODE){"MOV D,L", 0x55, 1};
Opcode[0x56] = (OPCODE){"MOV D,M", 0x56, 1};
Opcode[0x57] = (OPCODE){"MOV D,A", 0x57, 1};
Opcode[0x58] = (OPCODE){"MOV E,B", 0x58, 1};
Opcode[0x59] = (OPCODE){"MOV E,C", 0x59, 1};
Opcode[0x5A] = (OPCODE){"MOV E,D", 0x5A, 1};
Opcode[0x5B] = (OPCODE){"MOV E,E", 0x5B, 1};
Opcode[0x5C] = (OPCODE){"MOV E,H", 0x5C, 1};
Opcode[0x5D] = (OPCODE){"MOV E,L", 0x5D, 1};
Opcode[0x5E] = (OPCODE){"MOV E,M", 0x5E, 1};
Opcode[0x5F] = (OPCODE){"MOV E,A", 0x5F, 1};

//  60 --> 6F

Opcode[0x60] = (OPCODE){"MOV H,B", 0x60, 1};
Opcode[0x61] = (OPCODE){"MOV H,C", 0x61, 1};
Opcode[0x62] = (OPCODE){"MOV H,D", 0x62, 1};
Opcode[0x63] = (OPCODE){"MOV H,E", 0x63, 1};
Opcode[0x64] = (OPCODE){"MOV H,H", 0x64, 1};
Opcode[0x65] = (OPCODE){"MOV H,L", 0x65, 1};
Opcode[0x66] = (OPCODE){"MOV H,M", 0x66, 1};
Opcode[0x67] = (OPCODE){"MOV H,A", 0x67, 1};
Opcode[0x68] = (OPCODE){"MOV L,B", 0x68, 1};
Opcode[0x69] = (OPCODE){"MOV L,C", 0x69, 1};
Opcode[0x6A] = (OPCODE){"MOV L,D", 0x6A, 1};
Opcode[0x6B] = (OPCODE){"MOV L,E", 0x6B, 1};
Opcode[0x6C] = (OPCODE){"MOV L,H", 0x6C, 1};
Opcode[0x6D] = (OPCODE){"MOV L,L", 0x6D, 1};
Opcode[0x6E] = (OPCODE){"MOV L,M", 0x6E, 1};
Opcode[0x6F] = (OPCODE){"MOV L,A", 0x6F, 1};

//  70 --> 7F

Opcode[0x70] = (OPCODE){"MOV M,B", 0x70, 1};
Opcode[0x71] = (OPCODE){"MOV M,C", 0x71, 1};
Opcode[0x72] = (OPCODE){"MOV M,D", 0x72, 1};
Opcode[0x73] = (OPCODE){"MOV M,E", 0x73, 1};
Opcode[0x74] = (OPCODE){"MOV M,H", 0x74, 1};
Opcode[0x75] = (OPCODE){"MOV M,L", 0x75, 1};
Opcode[0x76] = (OPCODE){"HLT", 0x76, 1};
Opcode[0x77] = (OPCODE){"MOV M,A", 0x77, 1};
Opcode[0x78] = (OPCODE){"MOV A,B", 0x78, 1};
Opcode[0x79] = (OPCODE){"MOV A,C", 0x79, 1};
Opcode[0x7A] = (OPCODE){"MOV A,D", 0x7A, 1};
Opcode[0x7B] = (OPCODE){"MOV A,E", 0x7B, 1};
Opcode[0x7C] = (OPCODE){"MOV A,H", 0x7C, 1};
Opcode[0x7D] = (OPCODE){"MOV A,L", 0x7D, 1};
Opcode[0x7E] = (OPCODE){"MOV A,M", 0x7E, 1};
Opcode[0x7F] = (OPCODE){"MOV A,A", 0x7F, 1};

//  80 --> 8F

Opcode[0x80] = (OPCODE){"ADD B", 0x80, 1};
Opcode[0x81] = (OPCODE){"ADD C", 0x81, 1};
Opcode[0x82] = (OPCODE){"ADD D", 0x82, 1};
Opcode[0x83] = (OPCODE){"ADD E", 0x83, 1};
Opcode[0x84] = (OPCODE){"ADD H", 0x84, 1};
Opcode[0x85] = (OPCODE){"ADD L", 0x85, 1};
Opcode[0x86] = (OPCODE){"ADD M", 0x86, 1};
Opcode[0x87] = (OPCODE){"ADD A", 0x87, 1};
Opcode[0x88] = (OPCODE){"ADC B", 0x88, 1};
Opcode[0x89] = (OPCODE){"ADC C", 0x89, 1};
Opcode[0x8A] = (OPCODE){"ADC D", 0x8A, 1};
Opcode[0x8B] = (OPCODE){"ADC E", 0x8B, 1};
Opcode[0x8C] = (OPCODE){"ADC H", 0x8C, 1};
Opcode[0x8D] = (OPCODE){"ADC L", 0x8D, 1};
Opcode[0x8E] = (OPCODE){"ADC M", 0x8E, 1};
Opcode[0x8F] = (OPCODE){"ADC A", 0x8F, 1};

//  90 --> 9F

Opcode[0x90] = (OPCODE){"SUB B", 0x90, 1};
Opcode[0x91] = (OPCODE){"SUB C", 0x91, 1};
Opcode[0x92] = (OPCODE){"SUB D", 0x92, 1};
Opcode[0x93] = (OPCODE){"SUB E", 0x93, 1};
Opcode[0x94] = (OPCODE){"SUB H", 0x94, 1};
Opcode[0x95] = (OPCODE){"SUB L", 0x95, 1};
Opcode[0x96] = (OPCODE){"SUB M", 0x96, 1};
Opcode[0x97] = (OPCODE){"SUB A", 0x97, 1};
Opcode[0x98] = (OPCODE){"SBB B", 0x98, 1};
Opcode[0x99] = (OPCODE){"SBB C", 0x99, 1};
Opcode[0x9A] = (OPCODE){"SBB D", 0x9A, 1};
Opcode[0x9B] = (OPCODE){"SBB E", 0x9B, 1};
Opcode[0x9C] = (OPCODE){"SBB H", 0x9C, 1};
Opcode[0x9D] = (OPCODE){"SBB L", 0x9D, 1};
Opcode[0x9E] = (OPCODE){"SBB M", 0x9E, 1};
Opcode[0x9F] = (OPCODE){"SBB A", 0x9F, 1};

//  A0 --> AF

Opcode[0xA0] = (OPCODE){"ANA B", 0xA0, 1};
Opcode[0xA1] = (OPCODE){"ANA C", 0xA1, 1};
Opcode[0xA2] = (OPCODE){"ANA D", 0xA2, 1};
Opcode[0xA3] = (OPCODE){"ANA E", 0xA3, 1};
Opcode[0xA4] = (OPCODE){"ANA H", 0xA4, 1};
Opcode[0xA5] = (OPCODE){"ANA L", 0xA5, 1};
Opcode[0xA6] = (OPCODE){"ANA M", 0xA6, 1};
Opcode[0xA7] = (OPCODE){"ANA A", 0xA7, 1};
Opcode[0xA8] = (OPCODE){"XRA B", 0xA8, 1};
Opcode[0xA9] = (OPCODE){"XRA C", 0xA9, 1};
Opcode[0xAA] = (OPCODE){"XRA D", 0xAA, 1};
Opcode[0xAB] = (OPCODE){"XRA E", 0xAB, 1};
Opcode[0xAC] = (OPCODE){"XRA H", 0xAC, 1};
Opcode[0xAD] = (OPCODE){"XRA L", 0xAD, 1};
Opcode[0xAE] = (OPCODE){"XRA M", 0xAE, 1};
Opcode[0xAF] = (OPCODE){"XRA A", 0xAF, 1};

//  B0 --> BF

Opcode[0xB0] = (OPCODE){"ORA B", 0xB0, 1};
Opcode[0xB1] = (OPCODE){"ORA C", 0xB1, 1};
Opcode[0xB2] = (OPCODE){"ORA D", 0xB2, 1};
Opcode[0xB3] = (OPCODE){"ORA E", 0xB3, 1};
Opcode[0xB4] = (OPCODE){"ORA H", 0xB4, 1};
Opcode[0xB5] = (OPCODE){"ORA L", 0xB5, 1};
Opcode[0xB6] = (OPCODE){"ORA M", 0xB6, 1};
Opcode[0xB7] = (OPCODE){"ORA A", 0xB7, 1};
Opcode[0xB8] = (OPCODE){"CMP B", 0xB8, 1};
Opcode[0xB9] = (OPCODE){"CMP C", 0xB9, 1};
Opcode[0xBA] = (OPCODE){"CMP D", 0xBA, 1};
Opcode[0xBB] = (OPCODE){"CMP E", 0xBB, 1};
Opcode[0xBC] = (OPCODE){"CMP H", 0xBC, 1};
Opcode[0xBD] = (OPCODE){"CMP L", 0xBD, 1};
Opcode[0xBE] = (OPCODE){"CMP M", 0xBE, 1};
Opcode[0xBF] = (OPCODE){"CMP A", 0xBF, 1};

//  C0 --> CF

Opcode[0xC0] = (OPCODE){"RNZ", 0xC0, 1};
Opcode[0xC1] = (OPCODE){"POP B", 0xC1, 1};
Opcode[0xC2] = (OPCODE){"JNZ", 0xC2, 3};
Opcode[0xC3] = (OPCODE){"JMP", 0xC3, 3};
Opcode[0xC4] = (OPCODE){"CNZ", 0xC4, 3};
Opcode[0xC5] = (OPCODE){"PUSH B", 0xC5, 1};
Opcode[0xC6] = (OPCODE){"ADI", 0xC6, 2};
Opcode[0xC7] = (OPCODE){"RST 0", 0xC7, 1};
Opcode[0xC8] = (OPCODE){"RZ", 0xC8, 1};
Opcode[0xC9] = (OPCODE){"RET", 0xC9, 1};
Opcode[0xCA] = (OPCODE){"JZ", 0xCA, 3};
Opcode[0xCB] = (OPCODE){};
Opcode[0xCC] = (OPCODE){"CZ", 0xCC, 3};
Opcode[0xCD] = (OPCODE){"CALL", 0xCD, 3};
Opcode[0xCE] = (OPCODE){"ACI", 0xCE, 2};
Opcode[0xCF] = (OPCODE){"RST 1", 0xCF, 1};

//  D0 --> DF

Opcode[0xD0] = (OPCODE){"RNC", 0xD0, 1};
Opcode[0xD1] = (OPCODE){"POP D", 0xD1, 1};
Opcode[0xD2] = (OPCODE){"JNC", 0xD2, 3};
Opcode[0xD3] = (OPCODE){"OUT", 0xD3, 2};
Opcode[0xD4] = (OPCODE){"CNC", 0xD4, 3};
Opcode[0xD5] = (OPCODE){"PUSH D", 0xD5, 1};
Opcode[0xD6] = (OPCODE){"SUI", 0xD6, 1};
Opcode[0xD7] = (OPCODE){"RST 2", 0xD7, 1};
Opcode[0xD8] = (OPCODE){"RC", 0xD8, 1};
Opcode[0xD9] = (OPCODE){};
Opcode[0xDA] = (OPCODE){"JC", 0xDA, 3};
Opcode[0xDB] = (OPCODE){"IN", 0xDB, 2};
Opcode[0xDC] = (OPCODE){"CC", 0xDC, 3};
Opcode[0xDD] = (OPCODE){};
Opcode[0xDE] = (OPCODE){"SBI", 0xDE, 1};
Opcode[0xDF] = (OPCODE){"RST 3", 0xDF, 1};

//  E0 --> EF

Opcode[0xE0] = (OPCODE){"RPO", 0xE0, 1};
Opcode[0xE1] = (OPCODE){"POP H", 0xE1, 1};
Opcode[0xE2] = (OPCODE){"JPO", 0xE2, 3};
Opcode[0xE3] = (OPCODE){"XTHL", 0xE3, 1};
Opcode[0xE4] = (OPCODE){"CPO", 0xE4, 3};
Opcode[0xE5] = (OPCODE){"PUSH H", 0xE5, 1};
Opcode[0xE6] = (OPCODE){"ANI", 0xE6, 2};
Opcode[0xE7] = (OPCODE){"RST 4", 0xE7, 1};
Opcode[0xE8] = (OPCODE){"RPE", 0xE8, 1};
Opcode[0xE9] = (OPCODE){"PCHL", 0xE9, 1};
Opcode[0xEA] = (OPCODE){"JPE", 0xEA, 3};
Opcode[0xEB] = (OPCODE){"XCHG", 0xEB, 1};
Opcode[0xEC] = (OPCODE){"CPE", 0xEC, 3};
Opcode[0xED] = (OPCODE){};
Opcode[0xEE] = (OPCODE){"XRI", 0xEE, 2};
Opcode[0xEF] = (OPCODE){"RST 5", 0xEF, 1};

//  F0 --> FF

Opcode[0xF0] = (OPCODE){"RP", 0xF0, 1};
Opcode[0xF1] = (OPCODE){"POP PSW", 0xF1, 1};
Opcode[0xF2] = (OPCODE){"JP", 0xF2, 3};
Opcode[0xF3] = (OPCODE){"DI", 0xF3, 1};
Opcode[0xF4] = (OPCODE){"CP", 0xF4, 3};
Opcode[0xF5] = (OPCODE){"PUSH PSW", 0xF5, 1};
Opcode[0xF6] = (OPCODE){"ORI", 0xF6, 2};
Opcode[0xF7] = (OPCODE){"RST 6", 0xF7, 1};
Opcode[0xF8] = (OPCODE){"RM", 0xF8, 1};
Opcode[0xF9] = (OPCODE){"SPHL", 0xF9, 1};
Opcode[0xFA] = (OPCODE){"JM", 0xFA, 3};
Opcode[0xFB] = (OPCODE){"EI", 0xFB, 1};
Opcode[0xFC] = (OPCODE){"CM", 0xFC, 3};
Opcode[0xFD] = (OPCODE){};
Opcode[0xFE] = (OPCODE){"CPI", 0xFE, 2};
Opcode[0xFF] = (OPCODE){"RST 7", 0xFF, 1};