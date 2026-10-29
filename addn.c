#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);  
    int a;
    int ans;
    while(n--){
        scanf("%d",&a);
        ans=0;
        while(a){
            ans+=a%10;
            a=a/10;
        }
        printf("%d ",ans);
    }
    return 0;
}