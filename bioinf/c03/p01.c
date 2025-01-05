#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{

	int i,len;

	char seq[5000];

	float GC;

	scanf("%s", seq);
	len = strlen( seq );

	i=0;
	GC=0;

	for ( i=0 ; i<len ; i++)

	{

		if (seq[i] == 'G'|| seq[i] == 'C' || seq[i] == 'g' || seq[i] == 'c')
		{
			GC = GC+1;
		}
	}

	printf("the total percent of GC  is %f  \n", 100*(GC/len));


}
