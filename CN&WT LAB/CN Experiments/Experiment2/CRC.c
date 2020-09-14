#include<stdio.h>
#include<string.h>

int main(){
    int Plength,datalength,i,j,k;
    char data[100],data1[100],P[100],P1[100],temp[100],Q[100],R[100];
    printf("Enter data:");
    scanf("%s",data);
    strcpy(data1,data);
    printf("Enter the Polynomial:");
    scanf("%s",P);
    datalength = strlen(data);
    Plength = strlen(P);
    strcpy(P1,P);
    for(i=1;i<Plength;i++){
    strcat(data,"0");
    }
    printf("String after adding zeroes:%s\n",data);
    for (i=0;i<Plength;i++){
            temp[i]=data[i];
    }
    for(i=0;i<datalength;i++) {
    Q[i]=temp[0];
    if(Q[i]=='0'){
        for (j=0;j<Plength;j++)
          P[j]='0';
    }else{
        for (j=0;j<Plength;j++)
		 P[j]=P1[j];
    }
    for(j=Plength-1;j>0;j--) {
        if(temp[j]==P[j]){
            R[j-1]='0';
        }else{
            R[j-1]='1';
        }
    }
		R[Plength-1]=data[i+Plength];
		strcpy(temp,R);
}
	strcpy(R,temp);
    Q[datalength] = '\0';
    R[Plength-1] = '\0';

	printf("Quotient:%s\n",Q);
	printf("Remainder:%s\n",R);
	printf("Data received at receiver side:");
	strcat(data1,R);
	printf("%s",data1);
	printf("\n");


	return 0;
}
