#include<stdio.h>
#include<math.h>
void main(){
int i,num,n=9,j,count;
for(i=1;i<=n/2;i++){
for(j=1;j<=n/2;j++){
num=pow(i,3)+pow(j,3);
if(num==n)
 count=1;
}
}
if(count==1)
printf("ramanujan number");
else
 printf("not a ramanujan number");
}
