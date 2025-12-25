#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
int main(int argc,char* argv[])
{
DIR* dirp;
struct dirent* direntp;
char *dir_name = ".";
if(argc>=2){
dir_name=argv[1];
}
if((dirp=opendir(dir_name))==NULL){
printf("open directory %s error\n",dir_name);
return 1;
}
while((direntp=readdir(dirp))!=NULL)
printf("%s\n",direntp->d_name);
closedir(dirp);
return 0;
}
