//THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH.
//DATE: 14 JULY,2021.
#include <stdio.h>
int main()//RIGHT SIFT PROGRAM.
{
	int i=1,var=512,result;
	
	while(i<6)
	{
		result=var >> i;
		printf("Output of Bitwise Right Sift by i position (%d >> %d): %d \n",var, i, result);	
		i++;
	}
}
