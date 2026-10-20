#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        int program_no;
        printf("Enter the program number (34-44): ");
        scanf("%d", &program_no);
        switch (program_no) {
            case 34:
            {
                printf("This is program 34\n");
                int n, n1=1, n2=0, m;
                printf("Enter the number of elements of Fibonacci series to be displayed: ");
                scanf("%d", &m);
                for (int i=0; i< m; i++) {
                    if (i < 1) {
                        printf("%d\n%d\n", n2, n1);
                    } else {
                        n = n1 + n2;
                        n2 = n1;
                        n1 = n;
                        printf("%d\n", n1);
                    }
                }
                break;
            }
            case 35:
            {
                printf("This is prgram 35\n");
                int n;
                printf("Enter a number to show the sum of its digits in single digit: ");
                scanf("%d", &n);
                while (n > 9) {
                    int x = n, sum = 0;
                    
                    while (x>0) {
                        int q = x%10;
                        sum += q;
                        x /= 10;
                    }
                    n = sum;
                    printf("%d\n", n);
                }
                printf("The single digit sum is: %d\n", n);
                break;
            }
            case 36:
            {
                printf("This is program 36\n");
                printf("Enter a number to print odd numbers from 1 to that number: ");
                int num;
                scanf("%d", &num);
                printf("Odd numbers from 1 to %d are:\n", num);
                for (int i = 1; i <= num; i++) {
                    if (i % 2 != 0) {
                        printf(" %d,", i);
                    }
                }
                break;
            }
            case 37:
            {
                printf("This is program 37\n");
                printf("Enter a number to print even numbers from 1 to that number: ");
                int num2;
                scanf("%d", &num2);
                printf("Even numbers from 1 to %d are:\n", num2);
                for (int i = 1; i <= num2; i++) {
                    if (i % 2 == 0) {
                        printf(" %d,", i);
                    }
                }
                printf("\n");
                break;
            }
            case 38:
            {
                printf("This is program 38\n");
                int n;
                printf("To print 1, 4, 9, 16, 25....n   Enter n : ");
                scanf("%d", &n);
                int i = 1, sum = 0;
                while ((sum+i) <= n) {
                    sum += i;
                    printf(" %d,", sum);
                    i += 2;
                }
                printf("\n");
                break;
            }
            case 39:
            {
                printf("This is program 39\n");
                int n;
                printf("To print 1/1! + 2/2! + 3/3! + 4/4! +.....+ n/n!. Enter n : ");
                scanf("%d", &n);
                for (int i=1; i <= n; i++) {
                    printf("%d/%d! + ", i, i);
                }
                printf("\n");
                break;
            }
            case 40:
            {
                printf("This is program 40\n");
                int n, sum = 0;
                printf("To print a sum of list of numbers entered till a negative number. Enter numbers : ");
                while(1) {
                    scanf("%d", &n);
                    if (n < 0) {
                        break;
                    }
                    sum += n;
                }
                printf("The sum of the entered numbers is: %d\n", sum);
                break;
            }
            case 41:
            {
                printf("This is program 41\n");
                printf("Enter a number to get its factors : ");
                int num;
                scanf("%d", &num);
                printf("Factors of %d are: ", num);
                for (int i = 1; i <= num; i++) {
                    if (num % i == 0) {
                        printf(" %d,", i);
                    }
                }
                printf("\n");
                break;
            }
            case 42:
            {
                printf("This is program 42\n");
                printf("Enter a number to check if it is prime or composite : ");
                int num;
                scanf("%d", &num);
                int isPrime = 1;
                if (num <= 1) {
                    isPrime = 0;
                } else {
                    for (int i = 2; i <= num/2; i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is a composite number.\n", num);
                }
                break;
            }
            case 43:
            {
                printf("This is program 43\n");
                printf("Enter the sales amount to calculate the commission: ");
                int sales;
                scanf("%d", &sales);
                float commission;
                if (sales <= 500) {
                    commission = sales * 0.05;
                } else if (sales > 500 && sales <= 2000) {
                    commission = 35 + sales * 0.10;
                } else if (sales > 2000 && sales <= 5000) {
                    commission = 185 +sales * 0.15;
                } else {
                    commission = sales * 0.125;
                }
                printf("The commission for sales amount %d is: %.2f\n", sales, commission);
                break;
            }
            case 44:
            {
                printf("This is program 44\n");
                printf("Enter the electric consumption in units to calculate the bill: ");
                int units;
                scanf("%d", &units);
                float bill;
                if (units <= 200) {
                    bill = units * 0.5;
                } else if (units > 200 && units <= 400) {
                    bill = 100 + (units - 200) * 0.65;
                } else if (units > 400 && units <= 600) {
                    bill = 230 + (units - 400) * 0.80;
                } else {
                    bill = 425 + (units - 600) * 1.25;
                }
                printf("The electricity bill for %d units is: %.2f\n", units, bill);
                break;
            }
            default:
                printf("Invalid program number. Please enter a number between 34 and 44.\n");
        }
    }
    return 0;
}