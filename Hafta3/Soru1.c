#include <stdio.h>

 int lenOfLongIncSubArr(int A[], int n) 
 {      
         int max = 1, len = 1, end=0;
        for(int i = 0 ; i< n-2; i++)
        {
                if(A[i] < A[i+1]) 
                {
                        len++;
                }      
                else
                {
                        len =1;
                }        
                if (max <= len)
                {
                        max = len;
                        end=i+1;  
                }      
        }
         for(int i=end-max+1; i<=end; i++) 
        {
                       printf("%d ",A[i]);
        }        
} 

int main()
{       
        int num=0;
        int n=0;
        int temp=0;
        scanf("%d",&n);
        int A[n];
        for(int i=0; i<n; i++)
        {
               scanf("%d",&num);
               A[i]=num;
        }
        
        for(int i=0; i<n-1; i++)
        {
               temp=A[i+1]-A[i];
               A[i]=temp;
               temp=0;  
        }         
        lenOfLongIncSubArr(A, n);             
} 



