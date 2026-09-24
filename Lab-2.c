#include <stdio.h>
#include <math.h>

int main(void) {
    printf("****************** (TUTORIAL - 2) *********************\n");
    // scanf("%c");
    char x;
    float n1, n2, n3, max;
    for (int i=0; i < 100; i++){
        int program_no;
        printf("Enter the program number : ");
        scanf("%d", &program_no);
        if (program_no == 0) {
            break;
        }
        switch (program_no) {
            case 12:
                printf("This is program 12\n");
                for (int i=0; i<100; i++) {
                    char a;
                    printf("Enter a character to get its ASCII Code (Enter 0 to exit) : ");
                    scanf("%c", &a);
                    if (a == 10) {
                        scanf("%c", &a);
                    } else if (a == 0)
                    {
                        break;
                    }
                    
                    printf("The ASCII Code for %c is %d \n", a, a);
                }
                break;
            case 13:
                printf("This is program 13\n");
                int b;
                printf("Enter a number to find if it is odd or even : ");
                scanf("%d", &b);
                if ((b % 2) == 0) {
                    printf("The given number is even");
                    scanf("%c", &x);
                } else {
                    printf("The given number is odd");
                    scanf("%c", &x);
                }
                break;
            case 14:
                printf("This is program 14\n");
                char ch;
                printf("Enter a character: ");
                scanf("%c", &ch);
                if (ch >= 'A' && ch <= 'Z') {
                    printf("%c is a Capital Letter.\n", ch);
                    scanf("%c", &x);
                }
                else if (ch >= 'a' && ch <= 'z') {
                  printf("%c is a Small Case Letter.\n", ch);
                 scanf("%c", &x);
                }
                else if (ch >= '0' && ch <= '9') {
                  printf("%c is a Digit.\n", ch);
                  scanf("%c", &x);
                }
                else {
                  printf("%c is a Special Symbol.\n", ch);
                  scanf("%c", &x);
                }
                break;
            case 15:
                printf("This is program 15\n");
                float m1, m2, m3, m4, m5, total, percentage;

                printf("Enter marks of 5 subjects: ");
                scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
                total = m1 + m2 + m3 + m4 + m5;
                percentage = total / 5;
                printf("Total = %.2f\n", total);
                printf("Percentage = %.2f%%\n", percentage);
                if (percentage >= 60) {
                    printf("You belong to First Division (A)\n");
                    scanf("%c", &x);
                }
                else if (percentage >= 50) {
                    printf("You belong to Second Division (B)\n");
                    scanf("%c", &x);
                }
                else if (percentage >= 40){
                    printf("You belong to Third Division (C)\n");
                    scanf("%c", &x);
                }
                else {
                    printf("Sorry, you are Fail\n");
                    scanf("%c", &x);
                }
                break;
            case 16:

                printf("Enter three numbers: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                if (n1 >= n2 && n1 >= n3)
                    max = n1;
                else if (n2 >= n1 && n2 >= n3)
                    max = n2;
                else
                    max = n3;

                printf("Maximum number = %.2f\n", max);
                scanf("%c", &x);
                break;
            case 17:
                n1=0,n2=0,n3=0,max=0;
                printf("The program number is 17\n");
                printf("Enter three numbers: ");
                scanf("%f %f %f", &n1, &n2, &n3);

                if (n1 >= n2 && n1 >= n3)
                    max = n1;
                else if (n2 >= n1 && n2 >= n3)
                    max = n2;
                else
                    max = n3;

                printf("Maximum number = %.2f\n", max);
                scanf("%c", &x);
                break;
            case 18:
                printf("This is program 18 : \n");
                n1=0,n2=0, n3=0, max=0;
                printf("Enter three numbers: ");
                scanf("%f %f %f", &n1, &n2, &n3);
                max = (n1 >= n2) ? ((n1 >= n3) ? n1 : n3) : ((n2 >= n3) ? n2 : n3);
                printf("Maximum number = %.2f\n", max);
                scanf("%c", &x);
                break;
            case 19:
                printf("This is program 19 \n");
                ch = ' ';
                printf("Enter a character: ");
                scanf("%c", &ch);
                (ch >= 'a' && ch <= 'z') ? printf("%c is a small case letter\n", ch)
                                        : printf("%c is NOT a small case letter\n", ch);
                scanf("%c", &x);
                break;
            case 20:
                printf("This is program 20 \n");
                char op;
                n1=0, n2=0;
                int result=0;

                printf("Enter operator (+, -, *, /): ");
                scanf("%c", &op);

                printf("Enter two numbers: ");
                scanf("%f %f", &n1, &n2);

                switch (op) {
                    case '+':
                        result = n1 + n2;
                        printf("%.2f + %.2f = %.2f\n", n1, n2, result);
                        scanf("%c", &x);
                        break;

                    case '-':
                        result = n1 - n2;
                        printf("%.2f - %.2f = %.2f\n", n1, n2, result);
                        scanf("%c", &x);
                        break;

                    case '*':
                        result = n1 * n2;
                        printf("%.2f * %.2f = %.2f\n", n1, n2, result);
                        scanf("%c", &x);
                        break;

                    case '/':
                        if (n2 != 0) {
                            result = n1 / n2;
                            printf("%.2f / %.2f = %.2f\n", n1, n2, result);
                        } else {
                            printf("Error: Division by zero is not allowed\n");
                        }
                        scanf("%c", &x);
                        break;

                    default:
                        printf("Invalid operator\n");
                }
                break;
            case 21:
                printf("This is program 21 \n");
                printf("Enter two numbers: ");
                scanf("%f %f", &n1, &n2);
                printf("Enter operator (+, -, *, /): ");
                scanf(" %c", &op);   // space before %c skips leftover newline
                switch (op) {
                    case '+':
                        result = n1 + n2;
                        printf("Result = %.2f\n", result);
                        break;
                    case '-':
                        result = n1 - n2;
                        printf("Result = %.2f\n", result);
                        break;
                    case '*':
                        result = n1 * n2;
                        printf("Result = %.2f\n", result);
                        break;
                    case '/':
                        if (n2 != 0) {
                            result = n1 / n2;
                            printf("Result = %.2f\n", result);
                        } else {
                            printf("Error: Division by zero is not allowed\n");
                        }
                        break;
                    default:
                        printf("Invalid operator\n");
                }
                scanf("%c", &x);
                break;
            case 22:
                printf("This is program 22 \n");
                int n, i;
                long long fact = 1;

                printf("Enter a number: ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("Factorial is not defined for negative numbers\n");
                } else {
                    for (i = 1; i <= n; i++) {
                        fact = fact * i;
                    }
                    printf("Factorial of %d = %lld\n", n, fact);
                }
                scanf("%c", &x);
                break;
            case 23:
                printf("This is program 23 \n");
                float base;
                int exp;
                result = 1;
                printf("Enter base and exponent: ");
                scanf("%f %d", &base, &exp);
                if (exp >= 0) {
                    for (i = 1; i <= exp; i++) {
                        result = result * base;
                    }
                } else {
                    for (i = 1; i <= -exp; i++) {
                        result = result * base;
                    }
                    result = 1 / result;
                }

                printf("%.2f ^ %d = %.4f\n", base, exp, result);
                scanf("%c", &x);
                break;
            

            default:
                printf("Program does not found... :( \n");
                scanf("%c", &x);

        }
        
        
    }

    return 0;
    
}
