#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	printf("\n\nWelcome to Ques1 , by Amartya Dixit\n");

	int n=0,k=0;
	
	pid_t pid;

		do
		{
			printf("Please enter a number greater than 0 to run the Program.\n"); 
  			scanf("%d", &k);	
		}while (k <= 0);

		pid = fork();

		if (pid == 0)
		{
			printf("Child Process is working without any problem...\n");
			printf("%d\n",k);
			while (k!=1)
			{
				if (k%2 == 0)
				{
					k = k/2;
				}
				else if (k%2 == 1)
				{
					k = 3 * (k) + 1;
				}	
			
				printf("%d\n",k);
			}
		
			printf("Child process is done.\n");
		}
		else
		{
			printf("Parent Process is waiting for the child process\n");
			wait();
			printf("Parent process is completely executed\n");
		}
	return 0; 
}
