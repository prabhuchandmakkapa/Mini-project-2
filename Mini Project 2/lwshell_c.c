#include<signal.h>
#include <stdio.h>
#include <unistd.h>


void handler(int num)
{
write(STDOUT_FILENO,"Working thread stop \n",13);
}

int main()
{
signal(SIGINT,handler);
while(1)
{
printf("Working thread %d\n", getpid());
sleep(1);
}

}
