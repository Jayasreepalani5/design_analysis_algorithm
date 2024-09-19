#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int sum = 0, temp = num, digitCount = countDigits(num);

    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digitCount);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;

    // Input: Number to be checked
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Output: Check if the number is an Armstrong number
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
