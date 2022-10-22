#include<stdio.h>
#include<stdlib.h>

int Addnumber(int number1, int number2)
{
    int sum = 0;
    sum = number1 + number2;
    return sum;
}

int substractnumbers(int number1, int number2)
{
    int result = 0;
    result = number2 - number1;
    return result; 
}
int main(int argc, char **argv)
{
    int input1 = atoi(argv[1]);
    int input2 = atoi(argv[2]);

    printf("\n\n Welcome to simple add/sub program\n\n");
    printf("Sum of %d + %d = %d\n", input1, input2, Addnumber(input1, input2));
    printf("Difference of %d - %d = %d", input1, input2, substractnumbers(input1, input2));
    
    getchar(); 

    return 0;
}
