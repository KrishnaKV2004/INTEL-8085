//  Macros ---->

#define DASH 30

uint16_t Memory_Data_Seek;

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

    if (Choice == 'E' || Choice == 'e')
    {
        return 'E';
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
    uint8_t Ram_Address;

    system("cls");

    printf("\n          INTEL 8085          \n");
    dash(DASH);
    newLine(1);
    printf("\n     RAM ADRESS --> ");
    scanf("%d", &Ram_Address);
    newLine(1);
    dash(DASH);
    sleep(1);
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
    scanf("%x", &Memory_Data_Seek);
    newLine(1);
    dash(DASH);
    
    displayMemoryData(Memory_Data_Seek);
}

void displayMemoryData(uint16_t Memory_Data_Seek)
{
    printf("\n %02X", Memory[Memory_Data_Seek].Memory_Data);
    getchar();
}

void instructionMenu()
{
    
}