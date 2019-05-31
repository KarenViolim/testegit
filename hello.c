#include <stdio.h>

int main()
{
    int idade, *p;

    idade = 18;
    p = &idade;

    *p = 22;

    printf("Ola mundo, a idade é %i\n", idade);

    idade = 31;
    
    printf("Ola mundo, a idade é %i\n", *p);

    printf("O endereço da variável idade é: %p\n",p);    

    return 0;
    
}
