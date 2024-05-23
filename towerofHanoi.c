#include<stdio.h>
void towerofHanoi(int n,char source, char auxiliary,char destination){
if(n==1){
printf("Move disk 1 from %c to %c\n",source,destination);
return;
}
towerofHanoi(n-1,source,destination,auxiliary);
printf("Move disk %d from %c to %c\n",n,source,destination);
towerofHanoi(n-1,auxiliary,source,destination);
}
int main(){
int n;
printf("enter the number of disk");
scanf("%d",&n);
towerofHanoi(n,'A','B','C');
return 0;
}
