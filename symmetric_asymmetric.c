#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int arr1[5][5],arr2[5][5];
    int i,j,r,c,count=0,product;
    printf("Enter the number of rows and columns \n");
    scanf("%d%d",&r,&c);
    if(r!=c)
    {
        printf("Not a square matrix, hence the symmetry not Possible\n ");
        exit(1);
    }
    printf("enter elements of a matrix:\n");
    for (i=0; i<r;i++)
    {
        for(j=0; j<c;j++)
        {
            scanf("%d",& arr1 [i] [j]);
        }
    }
    for (i=0; i<r;i++)
    {
        for(j=0; j<c;j++)
        {
            arr2[i][j]=arr1[i][j];
        }
    }
    for (i=0; i<r;i++)
    {
        for(j=0; j<c;j++)
        {
            if(arr1[j][i]==arr2[i][j])
            {
                count++;
            }
        }
    }
    product=r*c;
    if(product==count)
    {
        printf("Symmetric Matrix\n");
    }
    else
    {
        printf("Not a Symmetric Matrix\n ");
    }
    return 0;
}
