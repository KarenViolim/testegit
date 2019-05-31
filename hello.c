#include <stdio.h>

void checar_idade_par_impar(int i)
{
	if (i & 0x01)
		printf("eh impar\n");
	else
		printf("eh par\n");
}

int main()
{
    int idade, *p;

    idade = 18;
    p = &idade;

    *p = 22;

    printf("Ola mundo, a idade é %i\n", idade);
    checar_idade_par_impar(idade);

    idade = 31;
    
    printf("Ola mundo, a idade é %i\n", *p);
    checar_idade_par_impar(idade);

    printf("O endereço da variável idade é: %p\n",p);    

    return 0;
    
}
