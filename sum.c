#include<stdio.h>
void main()
{
    int i,a[3][3],j,s=0;
    printf("enter 3*3 matrix=");
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
        for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
        {
            s=s+a[i][j];
        } 
      }
      printf("sum of all element of matrix is=%d",s);
}