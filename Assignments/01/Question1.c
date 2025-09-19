#include <stdio.h>
#include <string.h>


int main()
{
    int daily_limit, total_spending, transactions, transaction_count_hour;
    daily_limit = 5000, transaction_count_hour = 3;
    char Country[30];
    printf("Enter daily spending : ");
    scanf("%d", &total_spending);
     if (total_spending > daily_limit)
    {
        printf("Suspicious, Daily Limit Exceeded");
        return 1;
    }

    printf("\nEnter your transaction country:");
    scanf("%s", &Country);
     if (strcmp(Country, "pak") != 0 && strcmp(Country, "uae") != 0)
    {
        printf("\nSuspicious Foreign Country");
        return 1;

    }

    printf("\nHow many transactions have you did in one hour :");
    scanf("%d", &transactions);


    if (transactions > transaction_count_hour)
    {
        printf("\nSuspicious, Trasaction count exceeded");
        return 1;

    }
    
    
        printf("\ntransaction is normal");
    

    return 0;
}
