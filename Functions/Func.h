//  Macros ---->

#define DASH 30

//  Function Declaration ---->

void dash(int);
char GetChoice();
void newLine(int);
void mainMenu();
void resetMenu();
void memoryMenu();
void addressMenu();

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

char GetChoice()
{
    char Choice;
    Choice = getch();

    if (Choice == 'A' || Choice == 'a')
    {
        return 'A';
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
    int Ram_Address;

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
    
}