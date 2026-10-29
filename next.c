#include<stdio.h>
int cmp(const void * a,const void * b){
    int x=*(const int*)a;
    int y= *(const int *)b;
    return (x<y)-(x>y);
}
int main()
{
    int n;
    scanf("%d",&n);  
    int t;
    int b[200];
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        b[i]=t;
    }
    qsort(b,b+n,cmp);
    for(int i=0;i<n;i++){
        if(b[i]==b[i+1]+1)printf("%d %d\n",b[i],b[i+1]);

    }
    return 0;
}