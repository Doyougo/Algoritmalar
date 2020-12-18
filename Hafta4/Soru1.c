#include <stdio.h>

int main()
{

int num;
scanf("%d", &num);
int A[num];
int output=1;

for(int i=0; i<num; i++)
{
        scanf("%d", &A[i]);
}

for(int i=0; i<num; i++)
{
        for(int j=0; j<num; j++)
        {
                if(A[j]!=A[i])
                {
                        output=output*A[j];
                }
        }
        printf("%d ",output);
        output=1;
}

}
