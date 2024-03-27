//  Macros ---->

#define DASH 30

uint16_t Memory_Data_Seek;

Assemble *Main_Address = NULL;

//  Function Declaration ---->

void dash(int);
void newLine(int);

char getChoice();
void mainMenu();
void resetMenu();
void memoryMenu();
void addressMenu();
void instructionMenu();
void displayMemoryData(uint16_t);

//  Function Definition ---->

//  Dashes -->

void dash(int dashes)
{
    int iteration;

    for (iteration = 1; iteration <= dashes; iteration ++)
    {
        printf("-");
    }
}

//  New Lines -->

void newLine(int lines)
{
    int iteration;

    for (iteration = 1; iteration <= lines; iteration ++)
    {
        printf("\n");
    }
}

//  Main Menu -->

char getChoice()
{
    char Choice;
    Choice = getch();

    if (Choice == 'A' || Choice == 'a')
    {
        return 'A';
    }

    if (Choice == 'M' || Choice == 'm')
    {
        return 'M';
    }

    if (Choice == 'R' || Choice == 'r')
    {
        return 'R';
    }

    if (Choice == 27)
    {
        return 'X';
    }
}

void mainMenu()
{
    system("cls");

    printf("\n          INTEL 8085          \n");
    dash(DASH);
    printf("\n KEY         OPERATION       \n");
    dash(DASH);
    printf("\n  A  |     Assembly Mode       ");
    printf("\n  M  |      Memory Mode        ");
    newLine(1);
    dash(DASH);
    newLine(1);
}

//  Address Menu -->

void addressMenu()
{
    uint16_t Ram_Address;

    system("cls");

    printf("\n          INTEL 8085          \n");
    dash(DASH);
    newLine(1);
    printf("\n     RAM ADRESS --> ");
    scanf("%x", &Ram_Address);
    newLine(1);
    dash(DASH);

    if (Ram_Address<0x2000)
    {
        printf("\n\n      Address Reserved !\n\n");
        dash(DASH);
        sleep(2);
        addressMenu();
    }

    else
    {
        Main_Address = AssemblyCode(Main_Address);
    }
}

void resetMenu()
{

}

void memoryMenu()
{
    system("cls");

    printf("\n          INTEL 8085          \n");
    dash(DASH);
    newLine(1);
    printf("\n   MEMORY ADRESS --> ");
    scanf("%X", &Memory_Data_Seek);
    newLine(1);
    dash(DASH);
    
    displayMemoryData(Memory_Data_Seek);
}

void displayMemoryData(uint16_t Memory_Data_Seek)
{
    printf("\n\n  ADDRESS %X --> %02X -> ", Memory_Data_Seek, Memory[Memory_Data_Seek].Memory_Data);
    char enter_check = getch();

    if (enter_check == '\n')
    {
        printf("\n\n  ADDRESS %X --> %02X -> ", (Memory_Data_Seek+0x0001), (Memory[Memory_Data_Seek+0x0001]).Memory_Data);
    }
}

void instructionMenu()
{
    
}