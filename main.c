#include <stdio.h>
#include <stdlib.h>
void print_image(int image[][5])
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
			printf("%d ",image[i][j]);
		printf("\n");
	}
	printf("\n");
}
void brighten_image(int image[][5])
{
	int *ptr=&image[0][0];
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			*ptr+=10;
			ptr++;
		}
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int image[5][5]={
	{10, 20, 30, 40, 50},
	{10, 20, 30, 40, 50},
	{10, 20, 30, 40, 50},
	{10, 20, 30, 40, 50},
	{10, 20, 30, 40, 50},
};
	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;

	
}
