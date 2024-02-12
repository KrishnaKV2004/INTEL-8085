//  Accumulator ---->

uint8_t Accumulator;

//  Flag Register ---->

typedef struct FLAG
{
    bool Sign;
    bool Zero;
    bool AuxCarry;
    bool Parity;
    bool Carry;
} FLAG;

void init_FLAG()
{
    FLAG.Sign = false;
    FLAG.Zero = false;
    FLAG.AuxCarry = false;
    FLAG.Parity = false;
    FLAG.Carry = false;
}

//  General Purpose Registers ---->

int B[REG_SIZE] = {0};
int C[REG_SIZE] = {0};
int D[REG_SIZE] = {0};
int E[REG_SIZE] = {0};
int H[REG_SIZE] = {0};
int L[REG_SIZE] = {0};

//  Special Purpose Registers ---->

int StackPointer[SREG_SIZE] = {0};
int ProgramCounter[SREG_SIZE] = {0};

//  Instruction Decoder ---->

int InstructionDecoder[REG_SIZE] = {0};