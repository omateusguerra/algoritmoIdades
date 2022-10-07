#include <stdio.h>
#include <locale.h>

int main()
{
    int qtdIdade;
    int maiorIdade;
    int menorIdade;
    int i=0;
    int idade;
    int somaIdades = 0;
    
    printf("Digite a quantidade de idades que você deseja computar: ");
    scanf("%d", &qtdIdade);
    
    int vetorIdade[qtdIdade];
    
    for(i=0; i<qtdIdade; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        vetorIdade[i] = idade;
        somaIdades = somaIdades + vetorIdade[i];
        
        if(idade > maiorIdade){
            maiorIdade = idade;
        }else{
            
        }
        
        menorIdade = vetorIdade[0];
        
        if(idade < menorIdade){
            menorIdade = idade;
        }
    }
    
    int media = somaIdades/qtdIdade;
    
    printf("A média de idades é: %d anos.\n", media);
    printf("A maior idade é: %d anos.\n", maiorIdade);
    printf("A menor idade é: %d anos.", menorIdade);

    return 0;
}
