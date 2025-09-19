#include <stdio.h>
int main()
{
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Continue to next question:");
    }
    else
    {
        printf("You are not eligible");
        return 1;
    }
    int eyesight_test;
    printf("\nDid you pass the Eye sight test:\n Enter\nYes->1\nNo->0");
    scanf("%d", &eyesight_test);
    if (eyesight_test)
    {
        printf("Continue to next Question");
    }
    else
    {
        printf("You are not eligible");
        return 1;
    }
    int written_test;
    printf("\nDid you pass the Written test: Enter\nYes->1\nNo->0");
    scanf("%d", &written_test);
    if (written_test)
    {
        printf("Continue to next Question");
    }
    else
    {
        printf("You are not eligible");
        return 1;
    }
    int driving_test, medical_fitness;
    printf("\nDid you pass the driving test: Enter\nYes->1\nNo->0");
    scanf("%d", &driving_test);
    if (driving_test)
    {
        if (age <= 60)
        {
            printf("You are eligible for License");
        }
        else
        {
            printf("Did you has a medical fitness certificate: Enter\nYes->1\nNo->0 ");
            scanf("%d", &medical_fitness);
            if (medical_fitness)
            {
                printf("You are eligible for License");
            }
            else
                printf("You are not eligible");
        }
    }
    else
        printf("You are not eligible");
    return 0;
}
