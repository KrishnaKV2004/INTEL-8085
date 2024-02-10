//  MACROS ---->

#define MEM_SIZE 65536

//  Memory 64 KB -->

uint16_t CURR_ADDRESS;
uint8_t Memory[MEM_SIZE];

//  Memory Initialisation -->

void init_Memory(uint8_t MEM_DATA)
{
    Memory[CURR_ADDRESS] = MEM_DATA;
}

void printMemoryData(uint16_t CURR_ADDRESS)
{
    
}

void printMemoryAddress(uint16_t CURR_ADDRESS)
{

}