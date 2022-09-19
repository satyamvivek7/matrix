#include<stdio.h>
int i,j,k,a[3][3],b[3][3],c[3][3];
void input1()
{
printf("enter first 3*3 matrix=");
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
 }
}
 void input2()
{
printf("enter second 3*3 matrix=");
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
    }
}
 void print()
 {
 printf("first matrix is =\n");
        for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        } 
        printf("\n");
      }
printf("second matrix is =\n");
        for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
        {
          printf("%d\t",b[i][j]);
        } 
        printf("\n");
      }
}
void multiply()
{
       for(i=0;i<3;i++)
      {
          
          for(j=0;j<3;j++)
        {
            c[i][j]=0;
               for(k=0;k<3;k++)
               {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                 
               }
               printf("%d\t",c[i][j]);
        } 
        printf("\n");
      }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n1.input1\n2.input2\n3.print\n4.multiply\n");
        printf("choose your choice=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            input1();
            break;
            case 2:
            input2();
            break;
            case 3:
            print();
            break;
            case 4:
            multiply();
            break;
        }
    }
}