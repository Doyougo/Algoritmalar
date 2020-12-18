#include <stdio.h>

int obeb(int n1, int n2)
{
        
         int b=1, i=0;
     if(n1%2==0 && n2%2==0)
    {   
        
        printf("a ");
        
        return 2*obeb(n1/2,n2/2);
    }

    else if(n2%2==1 &&  n1%2==0)
    {
        int b=0;
        printf("b ");
      
            return obeb(n1/2, n2);
        

    }
    else if(n2==0 && n1!=0)
    {
       
        printf("c ");
        return n1;
    }
    else if(n1>=n2)
    {
        printf("d ");
        
        return obeb(n2, (n1-n2));
    }
    else if(n1<n2)
    {
        printf("e ");
        return obeb(n2, n1);

    }

    
}
int main()
{
     
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d", obeb(n1,n2));
    return 0;

}
