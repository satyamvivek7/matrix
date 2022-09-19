#include<stdio.h>
void main()
{
    int i,a[3][3],j;
    printf("enter 3*3 matrix=");
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
      printf("matrix is =\n");
        for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        } 
        printf("\n");
      }
}