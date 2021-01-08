#include<stdio.h>
int main() {
	int window,sent = 0,a,i;
	printf("Enter the window size:");
	scanf("%d",&window);
	while(1) {
		for(i=0;i<window;i++) {
			printf("Frame %d has been transmitted\n",sent);
			sent++;
			if(sent == window)
				break;
		}
		printf("\nPlease enter the last Acknowledgement received.\n");
		scanf("%d",&a);
		if(a == window) {
			break;
		}
		else {
			sent = a;
		}
	}
	return 0;
}
