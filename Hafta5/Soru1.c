#include <stdio.h>
int* radix(int S1[])
{
        int temp=0;


for(int i=0; i<10;i++)
{
       for(int j=0; j<9;j++)
       {
               if(S1[j]%10 > S1[j+1]%10)
               {
                        temp=S1[j];
                        S1[j]=S1[j+1];
                        S1[j+1]=temp;
               }   
       }
}
for(int i=0; i<10;i++)
{
        for(int j=0; j<9;j++)
        {
                if(S1[j]%100-S1[j]%10>S1[j+1]%100-S1[j+1]%10)
                {
                        temp=S1[j];
                        S1[j]=S1[j+1];
                        S1[j+1]=temp;
                }
        }
}
for(int i=0; i<10;i++)
{
        for(int j=0; j<9;j++)
        {
                if(S1[j]-S1[j]%100>S1[j+1]-S1[j+1]%100)
                {
                        temp=S1[j];
                        S1[j]=S1[j+1];
                        S1[j+1]=temp;
                }
        }
}
return S1;
}
int* Hollerith(int S2[])
{
        int temp=0;
        for(int i=0; i<10;i++)
        {
                for(int j=0; j<9;j++)
                {
                        if(S2[j]-S2[j]%100>S2[j+1]-S2[j+1]%100)
                        {
                                temp=S2[j];
                                S2[j]=S2[j+1];
                                S2[j+1]=temp;
                        }
                }
        }
        for(int i=0; i<9;i++)
        {
                for(int j=0; j<9;j++)
                {
                        if(S2[j]%100-S2[j]%10>S2[j+1]%100-S2[j+1]%10)
                        {
                                temp=S2[j];
                                S2[j]=S2[j+1];
                                S2[j+1]=temp;
                        }
                }
        }
        for(int i=0; i<10;i++)
        {
        for(int j=0; j<9;j++)
        {
                if(S2[j]%10 >S2[j+1]%10)
                {
                               temp=S2[j];
                                S2[j]=S2[j+1];
                                S2[j+1]=temp;
                }   
        }
        }
}
int main()
{
int G[10];
int S1[10];
int S2[10];
int cnt=0;
for(int i=0; i<10;i++)
{
        scanf("%d",&G[i]);
        S1[i]=G[i];
        S2[i]=G[i];
        
}


radix(S1);

for(int i=0; i<10;i++)
{
        printf("%d ",S1[i]);
}
         printf("\n");
Hollerith(S2);

for(int i=0; i<10;i++)
{
        printf("%d ",S2[i]);
}
printf("\n");
for(int i=0; i<10; i++)
{
        if(S1[i] != S2[i])
        cnt++;
}
printf("%%%d hata",cnt*10);
}
