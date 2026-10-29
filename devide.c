#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    char ans[300];
    fgets(s,sizeof(s),stdin);
    int n;
    n=strcspn(s,"@");
    int t=0;
    int p=0;
    while(n--){
    	t=(t+1)%3;
    	ans[p]=s[n];
    	p++;
    	if(t==0){
    		ans[p]=',';
    		p++;
		}
	}
	if(ans[p-1]==',')p--;
	while(p--)printf("%c",ans[p]);
    return 0;
}
