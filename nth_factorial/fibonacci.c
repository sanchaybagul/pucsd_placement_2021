#include<stdio.h>

unsigned long long int fibonacci(int a)
{
    if(a<=1)
        return a;
    
    return fibonacci(a-1)+fibonacci(a-2);

}
unsigned long long int main()
{
    unsigned long long int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    fibonacci(num);
    printf("The answer is : %llu",fibonacci(num));
return 0;
}