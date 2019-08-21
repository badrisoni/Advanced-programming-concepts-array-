#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0;
     printf("Enter size of first array: ");
    scanf("%d",&n1);
    int * arr1= (int *)malloc(sizeof(int)*n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n2=0;
    printf("Enter size of second array: ");
    scanf("%d",&n2);
     int * arr2= (int *)malloc(sizeof(int)*n2);
       for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
   int * res= (int *)malloc(sizeof(int)*0);//resultant array
   *res = -1;
   int * result;
   int size=0;
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)//logic to avoid O(N X N)  complexity
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            size++;
            result=(int *)realloc(res,sizeof(int)*size);
            result[k]=arr1[i];
            i++;
            j++;
            k++;
        }
    }
     if(k==0)
     {
         printf("-1");
     }
     else
     {
    for(int i=0;i<k;i++)
    { 
        printf("%d",result[i]);
    }
     }
    return 0;
}

