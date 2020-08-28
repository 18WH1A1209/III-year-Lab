
#include<stdio.h>
int main()
{
 int i=0,count=0;
 char A[100];

 printf("Enter Data Bits: ");
 scanf("%s",A);

 printf("Data Bits Before Bit Stuffing:%s",A);
 printf("\nData Bits After Bit stuffing :");

 for(i=0; i<strlen(A); i++)
 {
    if(A[i]=='1')
        count++;
    else
        count=0;
    printf("%c",A[i]);
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }
 return 0;
}
