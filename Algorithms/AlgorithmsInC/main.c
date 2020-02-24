#include <stdio.h>
#include <stdlib.h>

int main()

{
    int z;
    int getNthFib(int n){
        int fib[n];
	  fib[1]=0;
	  fib[2]=1;
		if (n>2){
			for(int i =3;i<=n;i++)
			{
					fib[i]= fib[i-1]+fib[i-2];

			}
		}
		return fib[n];
    }
    z=getNthFib(3);
    printf("getNthFib(1)%i",z);
    return 0;
}
