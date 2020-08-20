#include<stdio.h>
#include<string.h>
int main() {
        int n;
        char A[10][10];
        printf("Enter number of frames:");
        scanf("%d",&n);
        for(int i =0;i<n;i++){
           printf("Frame %d:",i+1);
           scanf("%s",&A[i]);
        }
      printf("Data as frames:\n");
       for(int i = 0; i < n; i++){
           printf("Frame %d:Char count=%d%s",i+1,(strlen(A[i])+1),A[i]);
           printf("\n");
        }

        printf("Data received\n");
        for (int i=0;i<n;i++){
                printf("Frame %d:%s\n",i+1,A[i]);
        }
        return 0;
}
