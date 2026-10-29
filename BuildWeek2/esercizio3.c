#include <stdio.h>
 
int main (void)
{
	int vector[10], i, j, k;
	int swap_var;
	int scelta;
	const int MAX_INT = 2147483647; // Costante intera del valore massimo per un intero a 32 bit
   
	printf("Scegli quale tipologia di BubbleSort utilizzare:\n");
	printf("Scegli 1 per il programma senza errori\n");
	printf("Scegli 2 per il programma con errori di segmentazione\n");
	printf("->");
   
	scanf("%d", &scelta);
   
	switch (scelta)
	{
    	case 1:
        	printf("Hai scelto il programma senza errori\n");
        	printf("Inserisci 10 interi:\n");
           
        	for (i = 0; i < 10; i++)
        	{
            	int c = i + 1;
            	printf("[%d]:", c);
            	while (scanf("%d", &vector[i]) != 1 || vector[i] > MAX_INT || vector[i] < 0)
            	{
                	printf("Errore: non hai inserito un intero.\n Riprova:\n");
                	while (getchar() != '\n'); // Pulisce il buffer di input
                	printf("[%d]:", c);
                   
            	}
        	}
           
        	printf("\nIl vettore inserito e':\n");
        	for (i = 0; i < 10; i++)
        	{
            	int t = i + 1;
            	printf("[%d]: %d", t, vector[i]);
            	printf("\n");
        	}
           
        	for (j = 0; j < 10 - 1; j++)
        	{
            	printf("\nCiclo esterno \n");
            	for (k = 0; k < 10 - j - 1; k++)
            	{
                	printf("Sto confrontando->: %d con %d \n",vector[k], vector[k+1]);
                	if (vector[k] > vector[k + 1])
                	{
                    	swap_var = vector[k];
                    	vector[k] = vector[k + 1];
                    	vector[k + 1] = swap_var;
                    	printf("Ho swappato->: %d %d \n",vector[k], vector[k+1]);
                	}
            	}
        	}
           
        	printf("Il vettore ordinato e':\n");
        	for (j = 0; j < 10; j++)
        	{
            	int g = j + 1;
            	printf("[%d]:", g);
            	printf("%d\n", vector[j]);
        	}
        	return 0;
           
    	case 2:
        	printf("Hai scelto il programma con errori di segmentazione\n");
        	printf("Inserisci 10 interi:\n");
           
        	for (i = 0; i < 10; i++)
        	{
            	int c = i + 1;
            	printf("[%d]:", c);
            	while (scanf("%d", &vector[i]) != 1 || vector[i] > MAX_INT || vector[i] < 0)
            	{
                	printf("Errore: non hai inserito un intero.\n Riprova:\n");
                	while (getchar() != '\n'); // Pulisce il buffer di input
                	printf("[%d]:", c);
            	}
        	}
           
        	printf("\nIl vettore inserito e':\n");
        	for (i = 0; i < 10; i++)
        	{
            	int t = i + 1;
            	printf("[%d]: %d", t, vector[i]);
            	printf("\n");
        	}
           
        	for (j = 0; j < 12; j++)
        	{
            	printf("\nCiclo esterno \n");
            	for (k = 0; k < 12 - j; k++)
            	{
                	printf("Sto confrontando->: %d con %d \n",vector[k], vector[k+1]);
                	if (vector[k] > vector[k + 1])
                	{
                    	swap_var = vector[k];
                    	vector[k] = vector[k + 1];
                    	vector[k + 1] = swap_var;
                    	printf("Ho swappato->: %d %d \n",vector[k], vector[k+1]);
               
                	}
            	}
        	}
           
        	printf("\n\nIl vettore ordinato e':\n");
        	for (j = 0; j < 10; j++)
        	{
            	int g = j + 1;
            	printf("[%d]:", g);
            	printf("%d\n", vector[j]);
        	}
        	return 0;
	}
}
