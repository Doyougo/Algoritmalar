#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* a = (int*)malloc(sizeof(int));
    int sayac=0;
    int j;

    while(j!=-1)
    {
        
        scanf("%d",&j);
        a[sayac]=j;
        sayac++;
         a = realloc(a, sayac * 2 * sizeof(int));

    }

    if(sayac<2 && a[0]!= -1)
    {
      printf("%d",a[0]);
    }
    if(sayac>=2)
    {
      if(a[1]==-1)
      {   
          printf("%d ",a[0]);
      }
      else 
    {   printf("%d %d ",a[0],a[1]);
      

         for(int i=0; a[i+2]!=-1; i++)
       {
        
    
            if((a[i]<a[i+1] && a[i+1]<a[i+2]) || (a[i]>a[i+1] && a[i+1]>a[i+2]))
            {
              printf("%d ",a[i+2]);
            }

            else if((a[i]<a[i+1] && a[i+1]>a[i+2]) || (a[i]>a[i+1] && a[i+1]<a[i+2]))
            {
                printf("\n");
                printf("%d ",a[i+2]);
    
              if(a[i+3]!=-1)
              {
                printf("%d ",a[i+3]);
                i++;
              }
            }
    }   }  
    }     
    return 0;
}
