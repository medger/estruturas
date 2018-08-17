#include <stdio.h>
#include <stdlib.h>
int procura (int n, float k, float *y);

int main (void)
{
    int i, n, achou;
    float *v, proc;
        //leitura do numero de valores
    printf("Entre com o numero de valores do vetor");
    scanf("%d",&n);
        //alocação dinâmica
    v=(float *)malloc(n*sizeof(float));
    if(v==NULL)
    {
        printf("Memória insuficiente");
    }
    
        //leitura dos valores
    printf("Entre com os valores");
    for(i=0;i<n;i++)
        scanf("%f",&v[i]);
        
    printf("Entre com o valor que deseja saber a posição do vetor");
    scanf("%f", &proc);
    
    achou=procura(n,proc,v);
    if(achou==0)
    {
        printf("Não existe");
    }
    else
    {
        printf("O número está na posição %d", achou);
    }
free(v);
return 0;
}

int procura (int n, float k, float *v)
{
    int j, pos=0;
    
    for(j=0;j<n;j++)
    {
        if(v[j]==k)
        {
            pos=j+1;
            break;
        }
    }
    return pos;
}