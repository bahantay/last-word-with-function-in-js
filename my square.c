#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
char* line(unsigned len, char c1, char c2)
{
  char* buf = (char*)calloc(len + 1, sizeof(char));
  memset(buf, c1, len / sizeof(char));
  buf[0] = buf[len - 1] = c2;
  return buf;
}

int main(int ac, char **av)
{
    if (ac!=3) { 
     return 0;
   };
  
    int x = atoi(av[1]);
    int y = atoi(av[2]);
     if (x<=0||y<=0) {
      return 0;
   }
    char* hf = line(x, '-', 'o');
  	char* ss = line(x, ' ', '|');

  	for (int idx = 0; idx != y; idx++)

    	printf("%s\n", (!idx || 1 + idx == y) ? hf : ss);
  
  	free(hf); 
  	free(ss);
  	return 0;

} 
