//  Linked List For Assembly Code ---->

#define MAX_OPC 8

typedef struct Assemble
{
    uint16_t address;
    char Opcode[MAX_OPC];
    struct Assemble *next;
} Assemble;

Assemble * AssemblyCode(Assemble *);

Assemble * AssemblyCode(Assemble *Main_Address)
{
    sleep(5);
}