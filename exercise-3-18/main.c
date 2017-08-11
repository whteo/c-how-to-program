//
//  main.c
//  exercise-3-18
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float sales;
    
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    
    while (sales != -1) {
        printf("Salary is: $%.2f\n", 200 + sales * 0.09);
        
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    
    return 0;
}
