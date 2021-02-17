#include<stdio.h>
//main
void f(char **p)
{
	char *t;
	t = (p += sizeof(int))[-1];
	printf("%s",t);
}
int main()
{
	char *a[]= {"ab", "cd", "ef", "gh", "ij","kl"};
	f(a);
	return 0;
}
