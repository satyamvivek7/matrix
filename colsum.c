#include<stdio.h>
void main()
{
    int i,a[3][3],j,s=0,t=0;
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
        for(j=0;j<3;j++)
          {
         for(i=0;i<3;i++)
           {
         s=s+a[i][j];
           } 
         t=s;
        printf("sum of columnn is %d\n",t);
        s=0;
         }
}