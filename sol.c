#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    int count=0;
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++){
	        scanf("%d",&a[j]);
	    }
	    for(int k=0;k<n;k++){
	        if(a[k]==a[k+1]){
	            count++;
	        }
	    }
	    printf("%d\n",n-count);
	}
	return 0;
}


