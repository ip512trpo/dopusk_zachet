#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "disc.cpp"


int main()
{
	float i, j, k, x1, x2;
	int less=0, more_equal=0, error=0;
	float min = 1, max = 50;
//	FILE* discOut = fopen("disc.txt", "w");
	for(i = min; i<max; i++){
		for(j = min; j<max; j++){
			for(k = min; k<max; k++){
				
//		fprintf(discOut, "a = %.0f, b = %0.f, c = %0.f, D = %.3f", i, j, k, disc(i, j, k));
		
				if(disc(i, j, k) < 0) {
				less++; 
//			fprintf(discOut, "  Discriminant less than zero"); 
				}	
		
				else
				{
				x1 = (-j-sqrt(disc(i, j, k)))/(2*i);
				x2 = (-j+sqrt(disc(i, j, k)))/(2*i);
				int tempx1 = (int) i*(x1*x1)+j*x1+k;
				int tempx2 = (int) i*(x2*x2)+j*x2+k; 
				if(tempx1 == 0 && tempx2 == 0){
				more_equal++;
//			fprintf(discOut, " %0.f*(%0.f^2) + %0.f*(%0.f) + %0.f = %0.f*%0.f^2 + %0.f*%0.f + k = 0", i, x1, j, x1, k, i, x2, j, x2, k);
				}else error++;

				}
//		fprintf(discOut, "\n");
			
			}
			
		}
	}
	
//	fclose(discOut);
	printf("Done!");
	if ((error + more_equal + less) != (max-min)*(max-min)*(max-min)) {printf ("\n CHISLO URAVNENIY NE SOVPADAET"); return 2; }
	else
	if (error > 0) { return 1; printf("\n ERROR =  %d", error);  } 
	else
	return 0;
}
