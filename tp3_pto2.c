#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int fila[5][12];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            fila[i][j] = rand()%(400000+100000)+1;
        }
    }
    for (int k = 0; k < 5; k++)
    {
        printf("fila %d : \n", k);
        for (int l = 0; l < 12; l++)
        {
                
            printf("%d \n", fila[k][l]);
        }
    }
    
    
    return 0;
}