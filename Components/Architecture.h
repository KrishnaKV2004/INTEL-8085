//  Macros -->

#define REG_SIZE 8
#define SREG_SIZE 16
#define MEM_SIZE 65536

//  Accumulator ---->

int Accumulator[REG_SIZE] = {0};

//  Flag Register ---->

int Flag[REG_SIZE] = {0};

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

//  64 KB Memory ---->

uint8_t Memory[MEM_SIZE];