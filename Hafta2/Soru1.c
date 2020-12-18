#include <stdio.h>
#include <stdlib.h>

int main()
{
        int kapi_sayisi=1;
        scanf("%d",&kapi_sayisi);
        int* kapi = (int*)malloc( kapi_sayisi * sizeof(int));

         for(int j=1; j<=kapi_sayisi; j++)
                {
                        kapi[j]=0;
                }
        

        for(int i=1; i<=kapi_sayisi; i++)
        {
                for(int j=1; j<=kapi_sayisi; j++)
                {
                        if(i%j==0)
                        {
                              if(kapi[i]==0)
                              kapi[i]=1;
                              else
                              kapi[i]=0;
                        }
                }
        }

        for(int i=1; i<=kapi_sayisi; i++)
        {
                if(kapi[i]==1)
                {
                        printf("%d  ", i);
                }
        }

        
}
