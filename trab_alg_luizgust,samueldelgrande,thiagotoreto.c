#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>
struct filmes{
	int ano;
	char nome[300], pais[200], celebridade[200], genero[50];
	float nota;
};

void gotoxy(short x, short y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	char caractere;
	struct filmes arq;
    int tecla = -1, seta = 0, aux, sim=0, k, v[20],x=1, soma=0,a =0,i,b;  
	FILE*arquivo;
	FILE*arquivo3;
	FILE*arquivo4;
	if((arquivo4=fopen("grava.txt","w"))==NULL){
		printf("ERRO");
		exit(1);
	}
	if((arquivo3=fopen("f1.txt","r"))==NULL){
		printf("ERRO");
		exit(1);
	}
	while((caractere = getc(arquivo3))!=EOF)
		putc(caractere+21,arquivo4);
	
	fclose(arquivo3);
	fclose(arquivo4);
  	while(a==0&&tecla!=112){
  	system("cls");
    printf("Trabalho Algoritmos ||\nLuiz Gustavo, Samuel Del Grande e  Thiago Toretto\n\nARQUIVO DE FILMES\n\n");
    printf("Use w, s, ENTER para mover a seta\n\n\n");
    printf("\t\n");
    printf("\tAdicionar filme\n");
    printf("\tExcluir filme\n");
    printf("\tConsultar filmes\n");
    printf("\tEditar filmes\n");

    gotoxy(5, seta + 9); printf("-->");
  	tecla=getch();
  	
  	if(tecla==119 && seta!=0){
  			seta--;
  			gotoxy(5, seta + 9); printf("-->");	
	  }
	else if(tecla==115 && seta!=3){
		seta++;
		gotoxy(5, seta + 9); printf("-->");	
	}
	if (tecla == 0 || tecla == 224) {
        tecla = getch(); 
        if (tecla == 59){
		system("cls");
		 if ((arquivo4 = fopen("grava.txt", "r")) == NULL) {
                printf("ERRO ao abrir grava.txt\n");
                exit(1);
            }
            while ((caractere = getc(arquivo4)) != EOF) {
                printf("%c", caractere-21);
            }
            fclose(arquivo4);
            printf("\nPressione qualquer tecla para continuar...\n");
            getch();
	}}
	else if(tecla==13)
		a=1;
	}
		system("cls");
		if(seta==0){
			if((arquivo=fopen("filmes.bin","ab"))==NULL){
				printf("erro");
				exit(1);
			}
			printf("quantos filmes vc quer adicionar?\n");
			scanf("%d",&aux);
			getchar();
			
			for(i=0;i<aux;i++){
			printf("Qual o nome do filme?\n");
			gets(arq.nome);
			fflush(stdin);
			
			printf("Em que ano o filme lancou?\n");
			scanf("%d",&arq.ano);
			fflush(stdin);
			
			printf("Qual pais produtor desse filme?\n");
			gets(arq.pais);
			fflush(stdin);
			
			printf("Qual sua nota para o filme?\n");
			scanf("%f",&arq.nota);
			getchar();
			
			printf("Qual celebridade ou personagem participa do filme?\n");
			gets(arq.celebridade);
			fflush(stdin);
			
			printf("Qual o genero?\n");
			gets(arq.genero);
			fflush(stdin);
			
			fwrite(&arq,sizeof(struct filmes),1,arquivo);
			system("cls");
		}
			fclose(arquivo);
		}
		if(seta==1){
			FILE*arquivo2;
			if((arquivo2=fopen("filmesaux.bin","wb"))==NULL){
				printf("erro");
				exit(1);
			}
			if((arquivo=fopen("filmes.bin","rb"))==NULL){
				printf("erro");
				exit(1);
			}
			char nom[200];
			printf("Qual o nome do filme que vc quer excluir?\n");
			gets(nom);
			fflush(stdin);
			while((fread(&arq,sizeof(struct filmes),1,arquivo))==1){
				if((strcmp(nom,arq.nome))!=0)
					fwrite(&arq,sizeof(struct filmes),1,arquivo2);
				
			}
			fclose(arquivo);
			fclose(arquivo2);
			remove("filmes.bin");
			rename("filmesaux.bin","filmes.bin");
		}
		if(seta==2){
			if((arquivo=fopen("filmes.bin","rb"))==NULL){
				printf("erro");
				exit(1);
			}
			while((fread(&arq,sizeof(struct filmes),1,arquivo))==1){
				
				printf("nome: %s",arq.nome);
				printf("\nAno de lancamento: %d",arq.ano);
				printf("\nPais que produziu: %s",arq.pais);
				printf("\nNota: %.2f",arq.nota);
				printf("\nCelebridade: %s",arq.celebridade);
				printf("\nGenero: %s\n\n",arq.genero);
		}

	}
	
	if(seta==3){
		int num;
		FILE*arquivo2;
		char nom[200],nom1[200];
		if((arquivo=fopen("filmes.bin","rb"))==NULL){
				printf("erro");
				exit(1);
			}
		if((arquivo2=fopen("filmesaux.bin","wb"))==NULL){
				printf("erro");
				exit(1);
			}
		printf("qual nome do filme que vc quer alterar?\n");
		gets(nom);
		fflush(stdin);
		system("cls");
		printf("qual campo?\n1-Nome\n2-Ano\n3-Pais\n4-Nota\n5-Celebridade\n6-Genero\n");
		scanf("%d",&num);
		getchar();

	while (fread(&arq, sizeof(struct filmes), 1, arquivo) == 1) {
        if (strcmp(nom, arq.nome) == 0) {
            switch (num) {
                case 1:
                    printf("Qual o novo nome?\n");
                    gets(arq.nome);
                    break;
                case 2:
                	printf("quer mudar para qual ano?\n");
                	scanf("%d",&arq.ano);
                	break;
                case 3:
                	printf("quer mudar para qual pais?\n");
                	gets(arq.pais);
                	break;
                case 4:
                	printf("quer mudar para qual nota?\n");
                	scanf("%f",&arq.nota);
                	break;
                case 5:
                	printf("quer mudar para qual celebridade?\n");
                	scanf("%f",&arq.celebridade);
                	break;
                case 6:
                	printf("quer mudar para qual genero?\n");
                	scanf("%f",&arq.genero);
                	break;
	}}
	fwrite(&arq,sizeof(struct filmes),1,arquivo2);}
	fclose(arquivo);
	fclose(arquivo2);
	remove("filmes.bin");
	rename("filmesaux.bin","filmes.bin");
	}}
  	
	
