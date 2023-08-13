/*2	1	3	1	4		4
2	1	6	-4	1		6
1	5	-3	4	2		5
-3	2	1	-5	1		2
2	-2	-4	2	5		5
Örnek: 5x5'lik bir kare matrisin her bir satýrýnýn en büyük elemanýnýn bulunmasý
*/
#include<stdio.h>
int a[6][6],i,j,eb;
main()
{
	for(i=1;i<=5;i++) {
		for(j=1;j<=5;j++) {
			printf("%d %d. sayiyi gir..",i,j);scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=5;i++) {
		eb=a[i][1];
		for(j=2;j<=5;j++) 
			if(eb<a[i][j]) eb=a[i][j];
	printf("%d. satirin en buyuk elemani %d dir\n",i,eb);
	}
}

