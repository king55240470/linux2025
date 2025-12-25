#include <stdio.h>
int main(int argc,char* argv[])
{
char buf[1024]={0};
FILE* fp=fopen(argv[1],"r");
if(argc<2)
{
printf("please input source file!\n");
return -1;
}
if(fp==NULL)
{
printf("open source %s failed\n",argv[1]);
return -1;
}
while(fgets(buf,1024, fp))
{
printf("%s",buf);
}
fclose(fp);
return 0;
}
