#include <stdio.h>

int main(void) {
    int amount;
    int cn;
    int cs = 1000000;
    int cl = 0;
    int total = 0;

    printf("How many numbers: ");
    scanf("%d", &amount);

    int numbers[amount];

    for (int i = 1; i <= amount; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &cn);

        numbers[i-1] = cn;
    }

    for (int i = 0; i < amount; i++) {
        total += numbers[i];

        if (numbers[i] > cl) {
            cl = numbers[i];

        } else if (numbers[i] < cs) {
            cs = numbers[i];
        }
    }

    float avg = (float) total / amount;

    printf("Sum = %d\n", total);
    printf("Average = %.2f\n", avg);
    printf("Largest = %d\n", cl);
    printf("Smallest = %d\n", cs);
}