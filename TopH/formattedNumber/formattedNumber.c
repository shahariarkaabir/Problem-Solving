#include<stdio.h>
#include<string.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    char str[100];
    sprintf(str, "%lld", n);
    int len=strlen(str);
for(int i=0; i<len;i++){
    printf("%c",str[i]);
    int rem=len-i-1;
    if(rem>0 && rem%3==0){
        printf(",");
    }

}
return 0;
}