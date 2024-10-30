#include<stdio.h>
int main()
{
int TE[5],TS[5];
int i ;
printf("veuillez entrer les nombres du table initial:\n");
for(i=0;i<5;i++){
    printf("TE[%d]=",i);
    scanf("%d",&TE[i]);
    }
    for(i=0;i<5;i++){ 
        TS[4-i]=TE[i];
        }
    printf("les elements du tableau inverse sont: \n");
    for(i=0;i<5;i++){ 
     printf("TS[%d] =%d\n",i,TS[i]); 
        }

return 0;
 }