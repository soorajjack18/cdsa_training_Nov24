
// p1
#include<stdio.h>
void main(){
    float inputNumber = 0.0;
    int tempNumber = 0;
    puts("Enter a floating point number to typecast it to integer");
    scanf("%f", &inputNumber);
    if (inputNumber >= -1000.0 && inputNumber <= 1000.0){
        tempNumber = inputNumber;
        printf("The floating point number is %0.2f and the number after type casting it is %d", inputNumber, tempNumber);
    }
    else
        puts("Enter a value between -1000.0 and 1000.0");
}


//p2
#include<stdio.h>
void main() {
    int inputNumber;
    puts("Enter the number to check if it falls between 10 and 20 and it is an Even number");
    scanf("%d", &inputNumber);
    if (inputNumber >= 10 && inputNumber <= 20 && inputNumber % 2 == 0)
        printf("The given number %d is valid", inputNumber);
    else
        printf("The given number %d is Invalid", inputNumber);
}


//p3
#include<stdio.h>
void main(){
    char hexValue[10];
    int decimalValue = 0;
    puts("Enter a hexadecimal value");
    scanf("%s", hexValue);
    sscanf(hexValue, "%x", &decimalValue);
    printf("Decimal number is %5d\n", decimalValue);
printf("Octal number is %5o\n", decimalValue);
    printf("Uppercase Hexadecimal is %5X\n", decimalValue);
}
