#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
char buf[1024]={0};
char buf2[1024]={0};
getcwd(buf,1024);
printf("Current dir: %s\n",buf);
if(chdir("/home")<0){
printf("change directory error\n");
}
else
{
printf("change to /home sucess\n");
}
getcwd(buf2,1024);
printf("Now dir: %s\n",buf2);
return 0;
}
