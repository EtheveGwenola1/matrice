#include <stdio.h>
#include <stdlib.h>

void additionDeMatrice(){

    int i,j;
    int matriceA[2][3] = { { 1 , 2 , 3 }, { 1 , 2 , 3 } };
    int matriceB[2][3]= { { 2, 3, 4}, {2, 3, 4} };
    int matriceC[2][3];

//Affichage de la matrice A
    printf("Matrice A \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d", matriceA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//Affichage de la matrice B
    printf("matrice B \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d", matriceB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//Addition des 2 matrices + affichage
    printf("Addition de A et B \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            matriceC[i][j] = matriceA[i][j] + matriceB [i][j];
            printf("%d", matriceC[i][j]);

        }
        printf("\n");
    }
    printf("\n");
}

void multiplication2matrices (){

    int i,j,k;
	int N,M,P;
	int mat[30][30],mat1[30][30],mat2[30][30];

    /* A[x][y]  B[z][a]
       AB->Y

    */
	printf ("Donner le nombre de lignes de la premiere matrice : ");
    fflush(stdin); scanf ("%d",&N);
	printf ("\nDonner la dimension commune aux 2 matrices : ");
	scanf ("%d",&M);
	printf ("\nDonner le nombre de colonnes de la deuxieme matrice : ");
	scanf ("%d",&P);

//Remplissage de la matrice 1

	printf ("\nDonner les elements de la premiere matrice :\n");
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat1[i][j]);
			}
	}

//Remplissage de la matrice 2

	printf ("\nDonner les elements de la seconde matrice :\n");
	for (i=0;i<M;i++)
	{
		for (j=0;j<P;j++)
			{
			printf ("ligne %d, colonne %d : ",i+1,j+1);
			scanf ("%d",&mat2[i][j]);
			}
	}

//Initialisation de la matrice finale a 0

	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
			{
				mat[i][j]=0;
			}
	}
//Calcul de la matrice finale( X les 2 matrice, mat fait la somme de la ligne)
	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
		{
			for (k=0;k<M;k++)
			{
				mat[i][j]=mat1[i][k]*mat2[k][j]+mat[i][j];
			}
		}
	}

//Affichage de la matrice finale

	printf ("\nProduit matriciel :\n");
	for (i=0;i<N;i++)
	{
		for (j=0;j<P;j++)
			{
				printf ("%d  ",mat[i][j]);
			}
			printf("\n");
	}
	getch();
}

void multiplicationMatriceParX (){

int i, j,x;
    int matriceA[2][3] = { { 1 , 2 , 3 }, { 1 , 2 , 3 } };
    int matriceB[2][3];
//Affichage matrice A
    printf("Matrice A \n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("%d ", matriceA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//Initialisation de l'entier multiplicateur
    printf("Par quel chiffre voulez vous multiplier la matrice?");
    scanf("%d", &x);
    fflush(stdin);
    printf("\n");

//Calcul de la multiplication + affichage
    printf("Resultat de la multiplication par %d\n", x);
    printf("\n");
    for (i=0; i<2; i++){
        for (j=0; j<3; j++){
            matriceB[i][j] = matriceA[i][j] * x;
            printf("%d ", matriceB[i][j]);
        }
        printf("\n");
    }
    printf ("\n");

}

int main()
{
    int saisi=0;
    printf (" MENU\n");
    printf ("\n");
    printf (" 1 Addition de 2 matrices\n");
    printf (" 2 Multiplication d'une matrice par un entier \n");
    printf (" 3 Multiplication de 2 matrices \n");
    printf (" 4 Charger une matrice \n");
    printf ("\n");
    printf ("Veuillez choisir votre mode\n");
    scanf ("%d", &saisi);
    fflush(stdin);
    printf ("\n");

                    switch (saisi){
                    case 0:
                        break;
                    case 1: additionDeMatrice();
                        break;
                    case 2: multiplicationMatriceParX();
                        break;
                    case 3: multiplication2matrices();
                        break;
                    }

}
