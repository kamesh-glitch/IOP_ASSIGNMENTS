#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        int program_no;
        printf("Enter the program number (45-55): ");
        scanf("%d", &program_no);
        switch (program_no) {
            case 45:
            {
                printf("This is program 45\n");
                for (int i = 1; i <= 5; i++) {
                    for (int j = 65; j < 65 + i; j++) {
                        printf("%c", j);
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 46:
            {
                printf("This is program 46\n");
                for (int i=1; i<=5; i++) {
                    for (int j=1; j<=i; j++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 47:
            {
                printf("This is program 47\n");
                for (int i=1; i<=5; i++) {
                    for (int j=1; j<=i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 48:
            {
                printf("This is program 48\n");
                for (int i=1; i<=5; i++) {
                    for (int j=1; j<=i; j++) {
                        printf("%c", 64+i);
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 49:
            {
                printf("This is program 49\n");
                for (int i=1; i<=5; i++) {
                    for (int j=1; j<=5; j++) {
                        if (j==i) printf("1");
                        else printf("0");
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 50:
            {
                printf("This is program 50\n");
                for (int i=1; i<=5; i++) {
                    for (int j=1; j<=5-i; j++) {
                        printf(" ");
                    }
                    for (int j=1; j<=i; j++) {
                        printf("%d", j);
                    }
                    if (i>1) {
                        for (int j=i-1; j>0; j--) {
                            printf("%d", j);
                        }
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 51:
            {
                printf("This is program 51\n");
                for (int i=1; i<=4; i++) {
                        for (int j=1; j<=4-i; j++) {
                            printf(" ");
                        }
                        for (int j=1; j<=2*i-1; j++) {
                            printf("*");
                        }
                        printf("\n");                    
                }
                for (int i=1; i<=3; i++) {
                    for (int j=1; j<=i; j++) {
                        printf(" ");
                    }
                    for (int j=1; j<=2*(4-i)-1; j++) {
                        printf("*");
                    }
                    printf("\n"); 
                }
                break;
            }
            case 52:
            {
                printf("This is program 52\n");
                int a[10], sum=0;
                printf("Enter 10 numbers to get its sum: ");
                for (int i=0; i<10; i++) {
                    scanf("%d", &a[i]);
                    sum += a[i];
                }
                printf("Sum of the numbers is: %d\n", sum);

                break;
            }
            case 53:
            {
                printf("This is program 53\n");
                int a[10], osum=0, esum=0;
                printf("Enter 10 numbers to get its sum of odd and sum of even : ");
                for (int i=0; i<10; i++) {
                    scanf("%d", &a[i]);
                    if (a[i] % 2 == 0) {
                        esum += a[i];
                    } else {
                        osum += a[i];
                    }
                }
                printf("Sum of even numbers: %d\n", esum);
                printf("Sum of odd numbers: %d\n", osum);
                break;
            }
            case 54:
            {
                printf("This is program 54\n");
                int a[10], b[10], temp;
                printf("Enter 10 numbers for array A: ");
                for (int i=0; i<10; i++) {
                    scanf("%d", &a[i]);
                }
                printf("Enter 10 numbers for array B: ");
                for (int i=0; i<10; i++) {
                    scanf("%d", &b[i]);
                }
                for (int i=0; i<10; i++) {
                    temp = a[i];
                    a[i] = b[i];
                    b[i] = temp;
                }
                printf("Arrays after swapping:\n");
                printf("Array A: ");
                for (int i=0; i<10; i++) {
                    printf("%d ", a[i]);
                }
                printf("\nArray B: ");
                for (int i=0; i<10; i++) {
                    printf("%d ", b[i]);
                }
                printf("\n");
                break;
            }
            case 55:
            {
                printf("This is program 55\n");
                int a[6] = {5,3,8,6,2,7}, temp;
                printf("Array before sorting: ");
                for (int i=0; i<6; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                for (int i=0; i<5; i++) {
                    for (int j=0; j<5-i; j++) {
                        if (a[j] > a[j+1]) {
                            temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;
                        }
                    }
                }
                printf("Array after sorting: ");
                for (int i=0; i<6; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            }
            default:
                printf("Invalid program number. Please enter a number between 45 and 55.\n");
        }
    }
}