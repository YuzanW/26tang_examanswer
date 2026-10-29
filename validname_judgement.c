#include<stdio.h>
#include<string.h>
char s[500];
int inv=0;
int v=0;
void judge(char s[]){
	
	int n = strcspn(s,"\n");
	if(!(s[0]=='_'||('a'<=s[0]&&s[0]<='z')||('A'<=s[0]&&s[0]<='Z'))){
		inv++;
		return;
	}
	for(int i=1;i<n;i++){
		if(!(s[i]=='_'||('a'<=s[i]&&s[i]<='z')||('A'<=s[i]&&s[i]<='Z')||('0'<=s[i]&&s[i]<='9'))){
			inv++;
			return;
		}
	}
	v++;
	return;
}
int main()
{
    int N;
    scanf("%d",&N);
	getchar();
    while(N--){
    	fgets(s,sizeof(s),stdin);
    	judge(s);
	}
	printf("Valid:%d\nInvalid:%d\n",v,inv);
	
    return 0;
}
