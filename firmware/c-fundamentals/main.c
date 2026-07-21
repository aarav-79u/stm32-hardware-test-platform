#include <stdio.h>
#include <stdbool.h>

void displayMenu(void);
bool turnOutputOn(void);
bool turnOutputOff(void);
void displayStatus(bool outputState);
bool runSelfTest(void);

int main(void)
{
    
    enum SystemSigma
    {
        JEFF,
        bruh,
        DiDDy
    };
    
    
    int choice = 0;
    bool outputState = false;

    while (choice != 5)
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            outputState = turnOutputOn();
        }
        else if (choice == 2)
        {
            outputState = turnOutputOff();
        }
        else if (choice == 3)
        {
            displayStatus(outputState);
        }
        else if (choice == 4)
        {
            bool selfTestPassed = runSelfTest();

            if (!selfTestPassed)
            {
                printf("Self-test failed.\n");
            }
        }
        else if (choice == 5)
        {
            printf("\nExiting controller simulator.\n");
        }
        else
        {
            printf("\nInvalid command. Enter a number from 1 to 5.\n");
        }
    }

    return 0;
}

void displayMenu(void)
{
    printf("\n=================================\n");
    printf(" Hardware Controller Simulator\n");
    printf("=================================\n");
    printf("1. Turn Output ON\n");
    printf("2. Turn Output OFF\n");
    printf("3. Display Status\n");
    printf("4. Run Self-Test\n");
    printf("5. Exit\n");
}

bool turnOutputOn(void)
{
    printf("\nOutput turned ON.\n");
    return true;
}

bool turnOutputOff(void)
{
    printf("\nOutput turned OFF.\n");
    return false;
}

void displayStatus(bool outputState)
{
    if (outputState)
    {
        printf("\nOutput status: ON\n");
    }
    else
    {
        printf("\nOutput status: OFF\n");
    }
}

bool runSelfTest(void)
{
    printf("\nRunning self-test...\n");

    for (int testNumber = 1; testNumber <= 3; testNumber++)
    {
        printf("Test %d passed.\n", testNumber);
    }

    printf("Self-test completed successfully.\n");

    return true;
}