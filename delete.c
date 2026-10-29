#include<stdio.h>
#include<string.h>
int d;
char tar[300];
char s[500];
void jump(int *p){
	for(int j=0;j<d;j++)if(tar[j]!=s[j+*p]&&(tar[j]+'A'-'a')!=s[j+*p]&&(tar[j]+'a'-'A')!=s[j+*p])return;
	*p+=d;
	jump(p);
	return;
}
int main()
{
    fgets(tar,sizeof(tar),stdin);
    fgets(s,sizeof(s),stdin);
    int n;
    n=strcspn(s,"\n");
    d=strcspn(tar,"\n");
    int i=0;
    while(i<=n){
    	jump(&i);
    	printf("%c",s[i]);
    	i++;
	}
    return 0;
}
