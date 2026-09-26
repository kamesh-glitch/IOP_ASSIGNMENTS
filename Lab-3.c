#include <stdio.h>
#include <math.h>

int main()
{
    printf("****************** (LAB - 3) *********************\n");
    char z;
    for (int i=0; i < 100; i++){
        int program_no;
        printf("Enter the program number : ");
        scanf("%d", &program_no);
        if (program_no == 0) {
            break;
        }
        switch (program_no) 
        {
            case  24:
            {  
                int n, x;
                printf("This is program 24 \n");
                printf("Enter the value of n : ");
                scanf("%d", &n);
                printf("Enter the value of x : ");
                scanf("%d", &x);
                int y;
                switch (n) {
                    case 1:
                        y = 1 + x;
                        break;
                    case 2:
                        y = 1 + (x/n);
                        break;
                    case 3:
                        y = 1 + pow(x, n);
                        break;
                    default:
                        if (n > 3 || n<1)
                        {
                            y = 1 + (n*x);
                        } 
                        else printf("The given values are not relavent to the program\n");
                }
                printf("The value of y is  %d\n", y);
                scanf("%c", &z);
                break;
            }
            case 25:
            {
                int n=0,i=0;
                printf("This is program 25 \n");
                printf("Enter a number: ");
                scanf("%d", &n);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", n, i, n * i);
                }
                scanf("%c", &z);
                break;
            }
            case 26:
            {
                printf("This is program 26 \n");
                int n=0, i=0;
                int sumOdd = 0, sumEven = 0;
                printf("Enter a number to get sum of odd and even numbers lesser than that: ");
                scanf("%d", &n);
                for (i = 1; i <= n; i++) {
                    if (i % 2 == 0)
                        sumEven = sumEven + i;
                    else
                        sumOdd = sumOdd + i;
                }
                printf("Sum of odd numbers = %d\n", sumOdd);
                printf("Sum of even numbers = %d\n", sumEven);
                scanf("%c", &z);
                break;
            }
            case 27:
            {
                printf("This is program 27\n");
                int prime = 1;
                int n = 0;
                printf("Enter a number to check if it is Prime or not : ");
                scanf("%d", &n);

                for (i=2; i < n; i++)
                {
                    if (n%i == 0)
                    {
                        prime = 0;
                    }
                }
                if (prime)
                    printf("This is Prime number\n");
                else printf("It is not a prime number\n");
                scanf("%c", &z);
                break;
            }
            case 28:
            {
                printf("This is program 28\n");
                int a, temp1, temp2, q, sum=0, nd=0;
                printf("Enter the value to check if it is an Armstrong number: ");
                scanf("%d", &a);
                temp1 = a;
                temp2 = a;
                while (a != 0) {
                    a /= 10;
                    nd++;
                }
                while (temp2 != 0) {
                    q = temp2 % 10;
                    sum += pow(q, nd);
                    temp2 /= 10;
                }
                if (temp1 == sum) {
                    printf("It is an Armstrong number \n");
                }else printf("It is not an Armstrong number\n");
                break;
            }
            
            case 29:
            {
                printf("This is program 29 \n");
                int n, r=0, q;
                printf("Enter a number to check if it is a palindrome: ");
                scanf("%d", &n);
                int temp = n;
                while(n>0)
                {
                    q = n%10;
                    r = (r*10) + q;
                    n /= 10;
                }
                if (r == temp) printf("It is a palindrome\n");
                else printf("It is not a palindrome\n");
                break;
            }
            case 30:
            {
                printf("This is program 30\n");
                

            }

            default:
                printf("Program does not found... :( \n");
                scanf("%c", &z);
        }
    }
}