#include <stdio.h>
int main()
{
        int num=0;
        int n=0;
        scanf("%d",&n);
        int A[n];
        for(int i=1; i<=n; i++)
        {
               scanf("%d",&num);
               A[i]=num;
        }
        int temp=1;
        int temp2=1;
        for(int i=1; i<=n; i++)
        {       
                if(A[i] != 0)
                {
                        if(i != A[i])
                        {        
                                temp=A[i];
                                printf("%d ", i);
                                A[i]=0;
                                if(temp2 != temp)
                                {    
                                        i=temp-1;       
                                } 
                                 else
                                {
                                        printf("\n");
                                        i=temp-1;
                                        
                                }          
                        }
                        else
                        {
                                printf("%d \n", i); 
                                A[i]=0;
                        }                       
                }
        else
        temp2= i+1;            
        }
 return 0;
}
