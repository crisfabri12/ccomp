#include <stdio.h>
#include <stdlib.h>
void mult(int *x,int *y,int nf);
int main()
{
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {1,2,3,4};
    mult(a,b,2);
}
void mult(int *r,int *h,int nf)
{
    int x,y,z,suma;
    int *s,*t;
    for (x=0;x<nf;++x)
        for (y=0;y<nf;++y)
            s = r;
            t = h;
            for (z = 0;z<nf;++z)
                suma += *s * *t;

}
