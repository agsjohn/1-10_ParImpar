#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, num, cal, par = 0, impar = 0;
    for(x = 1; x <= 10; x = x + 1){
        printf("Digite o %iº número: ", x);
        scanf("%i", &num);
        cal = num % 2;
        if(cal == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
    }
    getchar();
    printf("\nNúmeros pares: %i \nNúmeros ímpares: %i", par, impar);
    getchar();
}
