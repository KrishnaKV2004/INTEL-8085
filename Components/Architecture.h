#ifndef ARCHITECTURE_H
#define ARCHITECTURE_H

//  Accumulator ---->

extern uint8_t Accumulator;

//  Flag Register ---->

typedef struct FLAG
{
    bool Sign;
    bool Zero;
    bool AuxCarry;
    bool Parity;
    bool Carry;
} FLAG;

extern FLAG Flag;      //  Global Variable

void init_Flag(FLAG * Flag)
{
    Flag->Sign = false;
    Flag->Zero = false;
    Flag->AuxCarry = false;
    Flag->Parity = false;
    Flag->Carry = false;
}

//  General Purpose Registers ---->

extern uint8_t REG_B;
extern uint8_t REG_C;
extern uint8_t REG_D;
extern uint8_t REG_E;
extern uint8_t REG_H;
extern uint8_t REG_L;

//  Special Purpose Registers ---->

extern uint16_t StackPointer;
extern uint16_t ProgramCounter;

//  Instruction Decoder ---->

extern uint8_t InstructionDecoder;

#endif /* ARCHITECTURE_H */