#include<stdio.h>
#include<math.h>

int main() {
int a,b,result;
int input;
printf("Which of the following function do you want to perform: \n1. Sum\n2. Subtraction\n3. Division\n4. Multiplication\n5. Find Reamainder\nEnter the no of operation: \n");

scanf("%d", &input); 
printf("Enter 2 numbers: "); scanf("%f %f",&a, &b);
if (input == 1) result = a + b;
else if (input == 2)
result = a-b;
else if (input == 3)
result = a/b;
else if (input == 4) result = a*b;
else if (input == 5)  result = a%b;
else 
printf("Invalid input \nEnter the number only from 1-5\n");
printf("Result:%f \n", result);

return 0;
}