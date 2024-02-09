//  Macros ---->

#define DASH 30

//  Function Declaration ---->

void dash(int);
void newLine(int);
void mainMenu();
void subMenu();

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
    
}