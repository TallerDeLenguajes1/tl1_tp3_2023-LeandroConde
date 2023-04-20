#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int fila[5][12];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 12; j++)
        {
            fila[i][j] = rand()%399999+100000;
        }
        
    }
    
    
    return 0;
}