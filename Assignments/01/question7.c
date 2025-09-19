Question No 7:
#include <stdio.h>
int main()
{
int value;
printf("Please enter a value in the range 1...7:");
scanf("%d", &value);
if (value == 1)
{
printf("Monday");
}
else if (value == 2)
{
printf("Tuesday\n");
}
else if (value == 3)
{
printf("Wednesday\n");
}
else if (value == 4)
{
printf("Thursday\n");
}
else if (value == 5)
{
printf("Friday\n");
}
else if (value == 6){
   printf("Saturday\n");
   }
else if (value == 7){
printf("Sunday\n");
}

else
{
printf("You entered a value out of range\n");
}
return 0;
}



