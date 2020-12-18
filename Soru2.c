#include <stdio.h>

int main()
{

int n;
scanf("%d", &n);
int A[n];
int output=1;
int j=0;

for(int i=0; i<n; i++)
{
        scanf("%d", &A[i]);
}

for(int i=0; i<n; i++)
{
        
                if(A[i]!=A[j])
                {
                        output=output*A[i];
                
                }
                if(A[i]==A[n-1])
                {
                        printf("%d ",output);
                        output=1;
                        j++;
                        i=-1;
                }
                if(j==n)
                {
                        break;
                }
}
}
