#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a,const void * b){
    int x=*(const int*)a;
    int y= *(const int *)b;
    return (x>y)-(x<y);
}
int main()
{
    int n;
    scanf("%d",&n);  
    int a[200];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(a[0]),cmp);
    int mx=-10;
    int num=1;
    if(n==1){
    	printf("%d %d\n",a[0],1);
    	return 0;
	}
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
        	num++;
		}
		else{
			if(num>mx){
				mx=num;
			}
			num=1;
		}
    }
    if(num>mx){
		mx=num;
	}
	num=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
        	num++;
		}
		else{
			if(num==mx){
				printf("%d %d\n",a[i-1],mx);
			}
			num=1;
		}
    }
    if(num==mx){
		printf("%d %d\n",a[i-1],mx);
	}
    return 0;
}
