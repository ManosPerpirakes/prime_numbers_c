#include <stdio.h>

int main(){
    int limit1;
    int limit2;
    char var;
    printf("From which to which number do you wish to see the prime numbers?\n");
    printf("From:");
    scanf("%d", &limit1); 
    printf("To:");
    scanf("%d", &limit2); ;
    int counter_1 = 2;
    int counter_2 = 0;
    while ((limit1 < 11) && (limit1 <= limit2))
    {
        while ((limit1 / 2) >= counter_1)
        {
            if ((limit1 % counter_1) == 0)
            {
                counter_2++;
                break;
            }
            counter_1++;
        }    
        if (counter_2 == 0)
        {
            printf("%d\n", limit1);
        }    
        limit1++;
        counter_1 = 2;
        counter_2 = 0;
    }
    while ((limit1 >= 11) && (limit1 <= limit2))
    {
        while ((limit1 / 4) >= counter_1)
        {
            if ((limit1 % counter_1) == 0)
            {
                counter_2 += 1;
                break;
            }
            counter_1++;
        }    
        if (counter_2 == 0)
        {
            printf("%d\n", limit1);
        }    
        limit1++;
        counter_1 = 2;
        counter_2 = 0;
    }
    printf("enter 'exit' to exit the program\n");
    scanf("%d", &limit1);
    return 0;
}