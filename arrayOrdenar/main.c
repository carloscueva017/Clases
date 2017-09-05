#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,aux,ord[5];

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<CANT;j++)
        {
            if(ord[i]>ord[j])
            {
                aux=ord[i];
                ord[i]=ord[j];
                ord[j]=aux;
            }
        }
    }
    return 0;
}
