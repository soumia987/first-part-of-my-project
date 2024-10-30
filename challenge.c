#include<stdio.h>
int main()
{ 
int n,i,estpremier;
printf("veuillez entrer un nombre:");
scanf("%d",&n);
estpremier=1;
for(i=2;i<=n/2;i++){
    if ( n%i==0 ){
        estpremier=0;
        break;
    }   
    }
    if(estpremier==1)
    printf("%d est un nombre premier.",n);
    else
    printf("%d est un nombre  non premier.",n);
    return 0;

}
