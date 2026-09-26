#include <stdio.h>
int main(void) {
	printf("****************( THIS IS TUTORIAL - 1 )******************\n");
	// x is duplicate variable
	int x;
	for (int i=0; i < 100 ; i++ ){
	  int program_no;
	  printf("Enter the program no : ");
	  scanf("%d", &program_no);
	  if (program_no == 0) break;
	  switch (program_no) {
		
	  	case 1:
		    printf("This is program 1\n");
		    int P,R,T;
	  		printf("Enter the value of P : ");
		    scanf("%d", &P);
	  		printf("Enter the value of R : ");
		    scanf("%d", &R);
	  		printf("Enter the value of T : ");
		    scanf("%d", &T);
			printf("The value of simple interest is : %d", (P*R*T)/100);
	  		scanf("%d", &x);
	  		break;
	  	case 2:
	  		printf("This is program 2\n\n");
			printf("Enter your all 5 subject marks : ");
	  		int marks[5], total = 0, percentage;
	  		for (int i = 0; i < 5; i++) {
	  			scanf("%d", &marks[i]);
	  		}

	  		for (int i = 0; i < 5; i++) {
	  			total += marks[i];
	  		}
	  		percentage = (total * 100) / 500;
	  		printf("Total marks : %d\n", total);
	  		printf("Percentage : %d%%\n", percentage);
	  		scanf("%d", &x);
	  		break;
		case 3:
			printf("This is program 3\n");
			printf("at the end to calculate gross salary enter 0\n");
			printf("Enter all your allowances : ");
			int gross_salary=0;
			while (1) {
				int allowance;
				scanf("%d", &allowance);
				if (allowance == 0) {
					break;
				}
				gross_salary += allowance;
			}
			printf("Gross Salary : %d\n", gross_salary);
			scanf("%d", &x);
	  		break;
		case 4:
	  		printf("This is program 4\n");
			int farenheit, celsius;
			printf("Enter the temperature in Farenheit : ");
			scanf("%d", &farenheit);
			celsius = (farenheit - 32) * 5/9;
			printf("The temperature in Celsius is : %d\n", celsius);
			scanf("%d", &x);
	  		break;
		case 5:
			printf("This is program 5\n");
			int a, b, c;
			printf("Enter the value of a and b: ");
			scanf("%d %d", &a, &b);
			c = b;
			b = a;
			a = c;
			printf("After swapping: a = %d, b = %d\n", a, b);
			scanf("%d", &x);
	  		break;
		case 6:
	  		printf("This is program 6\n");
			a = 0, b = 0;
			printf("Enter the value of a and b: ");
			scanf("%d %d", &a, &b);
			printf("Before swapping: a = %d, b = %d\n", a, b);
			a = a + b;
			b = a - b;
			a = a - b;
			printf("After swapping: a = %d, b = %d\n", a, b);
			scanf("%d", &a);
	  		break;
		case 7:
	  		printf("This is program 7\n");
			printf("Enter the height and base of the triangle: ");
			int height, base;
			scanf("%d %d", &height, &base);
			printf("Area of the triangle: %d\n", (height * base) / 2);
			scanf("%d", &x);
	  		break;
		case 8:
	  		printf("This is program 8\n");
			printf("Enter the time in seconds: ");
			int seconds;
			scanf("%d", &seconds);
			printf("Time in days, hours and minutes %d:%d:%d\n", seconds / (60*60*24), (seconds % (60*60*24)) / (60*60), (seconds % (60*60)) / 60);
			scanf("%d", &x);
	  		break;
		case 9:
	  		printf("This is program 9\n");
			printf("enter time in hours, minutes, seconds: ");
			int hours, minutes;
			seconds = 0;
			scanf("%d %d %d", &hours, &minutes, &seconds);
			printf("Time in seconds: %d\n", (hours * 3600) + (minutes * 60) + seconds);
			scanf("%d", &x);
			break;
		case 10:
	  		printf("This is program 10\n");
			printf("Enter the marks of Physics, Chemistry, Mathematics and entrance exam(out of 100): ");
			int physics, chemistry, mathematics, exam;
			scanf("%d %d %d %d", &physics, &chemistry, &mathematics, &exam);
			printf("Your cutoff mark is : %d", (physics/2) + (chemistry/2) + (mathematics/2) + exam);
			scanf("%d", &x);
			break;
		case 11:
	  		printf("This is program 11\n");
			seconds = 0;
			hours = 0;
			minutes = 0;
			printf("Enter the total seconds: ");
			scanf("%d", &seconds);
			hours  = seconds/(60*60);
			minutes = (seconds % 3600)/60;
			seconds = seconds %60;
			printf("The time is %d:%d", hours, minutes);
			scanf("%d", &x);
	  	default:
	  		printf("Program not found");
	  		scanf("%d", &a);
	  }

	}
	// if (program_no == 10) {
	// 	printf("This is program 10");
	// 	scanf("%d", &a);
	// }else if (program_no == 6) {
	// 	printf("this is 6");
	// 	scanf("%d", &a);
	// }
	// else {
	// 	 printf("program does not found");
	// 	 scanf("%d", &a);
	// }
    return 0;
}
