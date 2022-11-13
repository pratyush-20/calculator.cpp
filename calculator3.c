#include<stdio.h>// calcultor function
#include<stdlib.h>
#include<math.h>
int addition(); 
int subtraction();
int multiply();
int divide();
int sq();
int sqr1();
void exit();

int main()
{
    int n;
    do
     {
            printf("\nSelect an operation to perform the calculation:");
            printf (" \n\n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");
            scanf("%d",&n);

switch(n)
{
    case 1:
     printf("\tAddition\n");
    addition();
    break;
    case 2:printf("\tSubtraction\n");
    subtraction();
    break;
    case 3:printf("\tMultiplication\n");
    multiply();
    break;
    case 4:printf("\tDivison\n");
    divide();
    break;
    case 5:printf("\tSquare\n");
    sq();
    break;
    case 6:printf("\tSquare root\n");
    sqr1();
    break;
    case 7:printf("\tEXIT\n");
    exit(0);
    break;
    default:
    printf("Something is wrong\n");
    break;
}
printf("\n\n********************************************************");
}while(n!=7);
return 0;
}
int addition()  
{  
    int n1,n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 + n2;    
    printf (" The subtraction of %d + %d is: %d", n1, n2, res);  
}  
int subtraction()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
int multiply()
{
    int n1,n2,res;
    printf("The first number is:");
    scanf("%d",&n1);
    printf("The second number is:");
    scanf("%d",&n2);
    res=n1*n2;
    printf("The Multiplcation of %d*%d is::%d",n1,n2,res);
}
int divide()
{
    int n1,n2,res;
    printf("The first number is:");
    scanf("%d",n1);
    printf("The second number is:");
    scanf("%d",n2);
    res=n1/n2;
    printf("The multiplication of %d/%d is::%d",n1,n2,res);
}
int sq()
{
    int n1,res;
    printf("Enter number:");
    scanf("%d",&n1);
    res=n1*n1;
    printf("Square of %d is %d",n1,res);
}
int sqr1()
{
    float res;
    int n1;
    printf("Enter you root over number:");
    scanf("%d",&n1);
    res=sqrt(n1);
    printf (" \n The Square Root of %d is: %f", n1, res);  
}  
