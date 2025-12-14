#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {srand(time(NULL));
int s=rand()%100;
char t[10];
printf("tek ve ya cut texmin edin");
scanf("%s",&t);
if((s%2==0 && strcmp(t,"cut")==0)||(s%2!=0 && strcmp(t,"tek")==0)){
    printf("duz tapdiniz\n");
}
else{
    printf("sehv tapdiniz\n");
}
printf("%d",s);
}