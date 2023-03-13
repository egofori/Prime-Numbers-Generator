#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,num=1;

    printf("This program prints any number of prime numbers orderly and in reverse\n");
    printf("How many prime numbers do you want to print out?\n");
    scanf("%d",&n);                     /*gets the number prime numbers wanted*/

    int array1[n];                      /* will contain orderly arranged prime numbers*/
    int array2[n];                      /*will contain prime numbers arranged in reverse*/

    while(i<n)
    {
        int count=0;                    /*counts the number of factors*/
        int y=1;                        /*numbers to check for factors*/
        while(y<=num)                   /*loops to check the number of factors*/
        {
            if((num%y)==0)              /*if a factor add one to count*/
            {
                count=count+1;
            }
            y=y+1;                      /*adds one to check numbers*/
        }
        if(count==2)                    /*if number of factors is only equal to 2 then it's a prime number*/
        {
            array1[i]=num;              /*add to array if a prime number*/
            i=i+1;
        }
         num=num+1;                     /*moves to the next number*/
    }

    int z=n;                             /*initialize z to number of prime numbers*/
    printf("\nPrime numbers in order.\n");
    for(int x=0;x<n;x++)                 /*loops to print content of array1 and to put content of array1 into array2 in reverse*/
    {
        z=z-1;
        printf("%d\t",array1[x]);
        array2[z]=array1[x];              /*putting content of array1 into array2 in reverse*/
    }
    printf("\n\nPrime numbers in reverse order.\n");

    for(int x=0;x<n;x++)
    {
        printf("%d\t",array2[x]);         /*prints content of array2*/
    }

    return 0;
}
