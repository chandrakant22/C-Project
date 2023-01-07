#include <stdio.h>
#include <stdlib.h>


void my()
{
int a=10;
static int b=10;
a++;
b++;
printf("%d %d\n",a,b);
}

int main()
{
my();
my();
my();
my();
my();

return 0;
}
