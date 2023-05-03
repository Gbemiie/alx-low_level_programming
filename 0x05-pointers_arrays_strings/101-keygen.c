#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * Return: 0 (correct)
 */

int main(void)
{
char password[76];
int index = 0, sum = 0, diff_half1, diff_half2;
srand(time(0));
while (sum < 1000)
{
password[index] = 24 + rand() % 86;
sum += password[index++];
}
password[index] = '\0';
if (sum != 1000)
{
diff_half1 = (sum - 1000) / 2;
diff_half2 = (sum - 1000) / 2;
if ((sum - 1000) % 2 != 0)
diff_half1++;
for (index = 0; password[index]; index++)
{
if (password[index] >= (24 + diff_half1))
{
password[index] -= diff_half1;
break;
}
}
for (index = 0; password[index]; index++)
{
if (password[index] >= (24 + diff_half2))
{
password[index] -= diff_half2;
break;
}
}
}
printf("%s", password);
return (0);
}
