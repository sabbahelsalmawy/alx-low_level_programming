#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
     
int main(int argc, char* argv[]) 
{
	int cnt=0;
	char str[256], *p=str;
	srand(time(0));
	do
	{ 
		*p = rand()%26+'a';
		cnt += *p++;
	}
	while((0xad4-cnt)>'z');
	*p++ = 0xad4-cnt;
	*p = 0;
	printf(str);
	return 0; 
} 
