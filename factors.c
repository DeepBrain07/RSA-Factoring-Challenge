#include <stdio.h>

int main(int argc, char **argv)
{
        FILE *fptr;
        int num, p, q, ret;

        fptr = fopen(argv[1], "r");
        if (fptr != NULL)
        {
                while (fscanf(fptr, "%i", &num) != EOF)
                {
                        ret = 0;
                        for (p = 2; p <= num; p++)
                        {
                                for (q = 2; q <= num; q++)
                                {
                                        if (p * q == num)
                                        {
                                                printf("%i=%i*%i\n", num, q, p);
                                                ret = 1;
                                                break;
                                        }
                                }
                                if (ret == 1)
                                        break;
                        }
                }
        }

        return (0);
}
