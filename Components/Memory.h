//  Memory Mapping ---->

#define MEM_SIZE 65536

//  Memory Structure -->

typedef struct MEMORY
{
    uint8_t Memory_Data;
    uint16_t Memory_Address;
} MEMORY;

MEMORY Memory[MEM_SIZE];

void init_Memory()
{
    //  Mapping Memory -->

    for (int iteration = 0x0000; iteration <= 0xFFFF; iteration++)
    {
        Memory[iteration] = (MEMORY){0x00, iteration};
    }
}