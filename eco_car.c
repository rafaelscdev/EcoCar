#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Calculo(float vGas, float vEta);

int main()
{
    float precoGasolina, precoEtanol;
    
        printf("Qual o preço da Gasolina?\n");
        scanf("%f", &precoGasolina);
        
        printf("Qual o preço do Etanol?\n");
        scanf("%f", &precoEtanol); 
        
    int resultado = Calculo(precoGasolina, precoEtanol);
    
    if(resultado == 0)
    {
        printf("Compensa abastecer com Gasolina. \n");    
    }
    else if (resultado == 1)
    {
        printf("Compensa abastecer com Etanol. \n");    
    }    
    else 
    {
        printf("São equivalentes. \n");    
    }
    
    system("pause");
        
    return 0;   
}

int Calculo(float vGas, float vEta)
{
  // Preço Gasolina * 0.7 = Preço Maximo do Alcool.
  
    if((vGas * 0.70)< vEta)
    {
        //compensa abastecer com Gasolina.
        return 0;    
    }
    else if((vGas * 0.70)> vEta)
    {
        //compensa abastecer com Etanol.
        return 1;    
    }
    else
    {
        //valores são equivalentes.
        return 2;    
    }  
}
