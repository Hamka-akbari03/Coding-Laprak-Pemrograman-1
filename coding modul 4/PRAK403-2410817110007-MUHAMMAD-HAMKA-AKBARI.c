#include <stdio.h>

int main()
{
     int start, end;
     char symbol[] = "-";
     scanf("%d %d", &start, &end);

     int startStatic = start, endStatic = end;
     int range = (start >= end) ? start - end : end - start;

     for (int i = 0; i <= range; i++)
     {
          if (startStatic > endStatic)
          {
               printf("%d %d %s ", start, end, (i != range ? symbol : ""));
               start--;
               end++;
          }
          if (startStatic < endStatic)
          {
               printf("%d %d %s ", start, end, (i != range ? symbol : ""));
               start++;
               end--;
          }
     }

     return 0;
}