#include <stdio.h>
#include <cs50.h>
int main(void){
    int operation;
    for(int i =0; i < 10; i++){
        float num1 = get_float("num1:");
        float num2 = get_float("num2:");
        operation = get_int("choose operation number:\n (1)+\n (2)-\n (3)*\n (4)/\n");
        if(operation == 1)
        {

            printf("%.2f\n", num1 + num2);
        }
        else if(operation == 2)
        {
            printf("%.2f\n",num1 - num2);
        }
        else if(operation == 3)
        {
            printf("%.2f\n",num1 * num2);
        }
        else
        {
            printf("%.2f\n",num1 / num2);
        }
    }
}