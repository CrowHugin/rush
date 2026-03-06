#include <unistd.h>

void print_col(int x, int y)
{
  int i;

  i = 0;

  write(1,"-",1);
  while(i != y-2)
  {
    write(1," ",1);
    i++;
  }
  write(1,"-\n",2);
}

void print_ligne(int y)
{
  int i;

  i = 0;
  while (i != y)
  {
    write(1,"o",1);
    i++;
  }
  write(1,"\n",1);

}

int main(void)
{
  int x;
  int y;

  x = 4;
  y = 4;

  print_ligne(y);
  print_col(x, y);
  print_ligne(y);

  return 0;
}
