//Julio Cesar Silva de Sousa e Luiz Gustavo Nogueira Carvalho
//Trabalho I - algoritmos II

//senha:1989

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 200


//Funcao que escreve um numero (de 1 a 999) por extenso
void numero_extenso (char numero[4], char extenso[MAX])
{
	strcpy(extenso, " ");
	if (numero[0] != '0')
	{
		switch (numero[0])
		{
			case '1':
				if (numero[1] == '0' && numero[2] == '0') strcpy(extenso, "cem");
				else strcpy(extenso, "cento");
				break;
			case '2':
				strcpy(extenso, "duzentos");
				break;
			case '3':
				strcpy(extenso, "trezentos");
				break;
			case '4':
				strcpy(extenso, "quatrocentos");
				break;
			case '5':
				strcpy(extenso, "quinhentos");
				break;
			case '6':
				strcpy(extenso, "seicentos");
				break;
			case '7':
				strcpy(extenso, "setecentos");
				break;
			case '8':
				strcpy(extenso, "oitocentos");
				break;
			case '9':
				strcpy(extenso, "novencentos");
				break;
		}
	}
	if (numero[1] != '0')
	{
		if (numero[1] == '1')
		{
			switch (numero[2])
			{
				case '0':
					if (numero[0] != '0') strcat(extenso, " e dez");
					else strcpy(extenso, "dez");
					break;
				case '1':
					if (numero[0] != '0') strcat(extenso, " e onze");
					else strcpy(extenso, "onze");
					break;
				case '2':
					if (numero[0] != '0') strcat(extenso, " e doze");
					else strcpy(extenso, "doze");
					break;
				case '3':
					if (numero[0] != '0') strcat(extenso, " e treze");
					else strcpy(extenso, "treze");					
					break;
				case '4':
					if (numero[0] != '0') strcat(extenso, " e catorze");
					else strcpy(extenso, "catorze");					
					break;
				case '5':
					if (numero[0] != '0') strcat(extenso, " e quinze");
					else strcpy(extenso, "quinze");					
					break;
				case '6':
					if (numero[0] != '0') strcat(extenso, " e dezesseis");
					else strcpy(extenso, "dezesseis");
					break;
				case '7':
					if (numero[0] != '0') strcat(extenso, " e dezessete");
					else strcpy(extenso, "dezessete");
					break;
				case '8':
					if (numero[0] != '0') strcat(extenso, " e dezoito");
					else strcpy(extenso, "dezoito");
					break;
				case '9':
					if (numero[0] != '0') strcat(extenso, " e dezenove");
					else strcpy(extenso, "dezenove");
					break;
			}
		}
		else
		{
			switch(numero[1])
			{
				case '2':
					if (numero[0] != '0') strcat(extenso, " e vinte");
					else strcpy(extenso, "vinte");
					break;
				case '3':
					if (numero[0] != '0') strcat(extenso, " e trinta");
					else strcpy(extenso, "trinta");
					break;
				case '4':
					if (numero[0] != '0') strcat(extenso, " e quarenta");
					else strcpy(extenso, "quarenta");
					break;
				case '5':
					if (numero[0] != '0') strcat(extenso, " e cinquenta");
					else strcpy(extenso, "cinquenta");
					break;
				case '6':
					if (numero[0] != '0') strcat(extenso, " e sessenta");
					else strcpy(extenso, "sessenta");
					break;
				case '7':
					if (numero[0] != '0') strcat(extenso, " e setenta");
					else strcpy(extenso, "setenta");					
					break;
				case '8':
					if (numero[0] != '0') strcat(extenso, " e oitenta");
					else strcpy(extenso, "oitenta");					
					break;
				case '9':
					if (numero[0] != '0') strcat(extenso, " e noventa");
					else strcpy(extenso, "noventa");					
					break;
			}
		}
	}
	if (numero[2] != '0')
	{
		if (numero[1] != '1')
		{
			switch (numero[2])
			{
				case '1':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e um");
					else strcpy(extenso, "um");					
					break;
				case '2':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e dois");
					else strcpy(extenso, "dois");					
					break;
				case '3':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e tres");
					else strcpy(extenso, "tres");					
					break;
				case '4':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e quatro");
					else strcpy(extenso, "quatro");					
					break;
				case '5':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e cinco");
					else strcpy(extenso, "cinco");					
					break;
				case '6':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e seis");
					else strcpy(extenso, "seis");					
					break;
				case '7':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e sete");
					else strcpy(extenso, "sete");					
					break;
				case '8':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e oito");
					else strcpy(extenso, "oito");					
					break;
				case '9':
					if (numero[0] != '0' || numero[1] != '0') strcat(extenso, " e nove");
					else strcpy(extenso, "nove");
					break;
			}
		}
	}
}

int main (void)
{
	int senha=-1, validade, i, j, k, i_virgula, virgula, de=0, dezena, unidade, centavo, um = 0;
	char dinheiro[MAX], extenso[MAX], *centavos;
	system("color 0A");
		printf("Dica para senha: ano da turma da melhor coordenadora de curso da unesp\n");
	while(senha!=1989){
		printf("Digite a senha:");
		scanf("%d", &senha);
		printf("\nIncorreto, tente de novo\n");
	}
		
	system("cls");
	
	printf("Senha correta\n\nTrabalho de algoritmos II\nJulio Cesar Silva de Sousa / Luiz Gustavo Nogueira Carvalho\n\n");
	printf("Digite um valor em reais no seguinte formato:\nEx: 'R$ 123,34'\nSem ter zero a esquerda\nDe 0 a 999999999999,99\nR$ ");
	//Validade
	validade = 1;
	do{
		if (!validade) printf("\nFormato invalido\nDigite no seguinte formato:\nEx: 'R$ 123,34'\nSem zeros a esquerda\nDe 0 a 999999999999,99\nR$ ");
		fflush(stdin);
		gets(dinheiro);
		virgula = 0;
		validade = 1;
		for (i = 0; i < strlen(dinheiro) && validade; i++)
		{
			if (!(dinheiro[i] >= '0' && dinheiro[i] <= '9') && dinheiro[i] != ',') validade = 0;
			if (dinheiro[i] == ',')  
			{
				virgula = 1;
				i_virgula = i;
				if (i_virgula != strlen(dinheiro) - 3) 
				{
					validade = 0;
				}
				for (i = 0; i < i_virgula && validade; i++)
				{
					if (dinheiro[0] == '0' && dinheiro[i] != '0') validade = 0;
				}
				if (!(strlen(dinheiro) > 0 && strlen(dinheiro) <= 15)) validade = 0;
			}
		}
		
		for (i = 0; i < strlen(dinheiro) && validade; i++)
		{
			if (dinheiro[0] == '0' && dinheiro[i] != '0') validade = 0;
		}
		
		if (!virgula)
		if (!(strlen(dinheiro) > 0 && strlen(dinheiro) <= 12)) validade = 0;
		
	} while (!validade);
	
	if (strlen(dinheiro) % 3 != 0)
	{
		if (strlen(dinheiro) % 3 == 1)
		{
			char str[MAX];
			strcpy(str, "00");
			strcat(str, dinheiro);
			strcpy(dinheiro, str);
		}
		else
		{
			char str[MAX];
			strcpy(str, "0");
			strcat(str, dinheiro);
			strcpy(dinheiro, str);
		}
	}
	char unidades[4], milhar[4], milhao[4], bilhao[4], decimal[4];
	milhar[3] = '\0';
	printf("Voce possui:\n");
	if (!virgula)
	{
		switch (strlen(dinheiro) / 3)
		{
			case 1:
				if (stricmp(dinheiro, "000") != 0)
				{
					numero_extenso(dinheiro, extenso);
					printf("%s", extenso);
					if (stricmp(extenso, "um") == 0) um = 1;
				}
				else printf("zero");
				break;
			case 2:
				for (i = 0; i < 3; i++)
				{
					milhar[i] = dinheiro[i];
				}
				for (i = 3; i < 6; i++)
				{
					unidades[i - 3] = dinheiro[i];
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{
					if (unidades[0] == '0' && unidades[1] == '0' && unidades[2] == '0') printf("mil");
					else printf("mil e ");
				}
				else
				{
					if (unidades[0] == '0' && unidades[1] == '0' && unidades[2] == '0') printf("%s mil", extenso);
					else printf("%s mil e ", extenso);
				}
				numero_extenso(unidades, extenso);
				if (stricmp(extenso, " ") != 0)
				printf("%s", extenso);
				break;
			case 3:
				for (i = 0; i < 3; i++)
				{
					milhao[i] = dinheiro[i];
					milhar[i] = dinheiro[i + 3];
					unidades[i] = dinheiro[i + 6];
				}
				numero_extenso(milhao, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{ de = 1;
					if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhao", extenso);
					else printf("%s milhao e ", extenso);
				}
				else
				{de = 1;
					if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhoes", extenso);
					else printf("%s milhoes e ", extenso);
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{ de = 0;
					if (stricmp(extenso, "um") == 0)
					{
						if (stricmp(unidades, "000") == 0) printf("mil", extenso);
						else printf("mil e ", extenso);
					}
					else
					{
						if (stricmp(unidades, "000") == 0) printf("%s mil", extenso);
						else printf("%s mil e ", extenso);
					}
				}
					numero_extenso(unidades, extenso);
					if (stricmp(extenso, " ") != 0)
					{
						de = 0;
						printf("%s", extenso);
					}
				
				break;
			case 4:
				for (j = 0; j < 3; j++)
				{
					bilhao[j] = dinheiro[j];
					milhao[j] = dinheiro[j + 3];
					milhar[j] = dinheiro[j + 6];
					unidades[j] = dinheiro[j + 9];
				}
				numero_extenso(bilhao, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{ de = 1;
					if ((stricmp(milhao, "000") == 0) && (stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s bilhao", extenso);
					else printf("%s bilhao e ", extenso);
				}
				else
				{ de = 1;
					if ((stricmp(milhao, "000") == 0) && (stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s bilhoes", extenso);
					else printf("%s bilhoes e ", extenso);
				}
				
				numero_extenso(milhao, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{ de = 1;
				
					if (stricmp(extenso, "um") == 0)
					{
						if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhao", extenso);
						else printf("%s milhao e ", extenso);
					}
					else
					{
						if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhoes", extenso);
						else printf("%s milhoes e ", extenso);
					}
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{
					de = 0;
					if (stricmp(extenso, "um") == 0)
					{
						if (stricmp(unidades, "000") == 0) printf("mil", extenso);
						else printf("mil e ", extenso);
					}
					else
					{
						if (stricmp(unidades, "000") == 0) printf("%s mil", extenso);
						else printf("%s mil e ", extenso);
					}
				}
				
				numero_extenso(unidades, extenso);
				if (stricmp(extenso, " ") != 0)
				{
					de = 0;
					printf("%s", extenso);
				}
				
				break;
		}
		if (um)
		{
			printf(" real");
		}
		else
		{
			if(de==0)
			printf(" reais\n");
			else
				printf(" de reais\n");
		}	
	}
	
	else
	{ 
		char* centavos = strtok(dinheiro, ",");

	
	
	switch (strlen(centavos) / 3)
		{
			case 1:
				if (stricmp(centavos, "000") != 0)
				{
					numero_extenso(centavos, extenso);
					printf("%s", extenso);
					if (stricmp(extenso, "um") == 0) um = 1;
				}
				else printf("zero");
				break;
			case 2:
				for (i = 0; i < 3; i++)
				{
					milhar[i] = centavos[i];
				}
				for (i = 3; i < 6; i++)
				{
					unidades[i - 3] = centavos[i];
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{
					if (unidades[0] == '0' && unidades[1] == '0' && unidades[2] == '0') printf("mil");
					else printf("mil e ");
				}
				else
				{
					if (unidades[0] == '0' && unidades[1] == '0' && unidades[2] == '0') printf("%s mil", extenso);
					else printf("%s mil e ", extenso);
				}
				numero_extenso(unidades, extenso);
				if (stricmp(extenso, " ") != 0)
				printf("%s", extenso);
				break;
			case 3:
				for (i = 0; i < 3; i++)
				{
					milhao[i] = centavos[i];
					milhar[i] = centavos[i + 3];
					unidades[i] = centavos[i + 6];
				}
				numero_extenso(milhao, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{ de = 1;
					if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhao", extenso);
					else printf("%s milhao e ", extenso);
				}
				else
				{de = 1;
					if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhoes", extenso);
					else printf("%s milhoes e ", extenso);
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{
					de = 0;
					if (stricmp(extenso, "um") == 0)
					{
						if (stricmp(unidades, "000") == 0) printf("mil", extenso);
						else printf("mil e ", extenso);
					}
					else
					{
						if (stricmp(unidades, "000") == 0) printf("%s mil", extenso);
						else printf("%s mil e ", extenso);
					}
				}
					numero_extenso(unidades, extenso);
					if (stricmp(extenso, " ") != 0)
					{
						de = 0;
						printf("%s", extenso);
					}
				break;
			case 4:
				for (j = 0; j < 3; j++)
				{
					bilhao[j] = centavos[j];
					milhao[j] = centavos[j + 3];
					milhar[j] = centavos[j + 6];
					unidades[j] = centavos[j + 9];
				}
				numero_extenso(bilhao, extenso);
				
				if (stricmp(extenso, "um") == 0)
				{ de = 1;
					if ((stricmp(milhao, "000") == 0) && (stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s bilhao", extenso);
					else printf("%s bilhao e ", extenso);
				}
				else
				{ de = 1;
					if ((stricmp(milhao, "000") == 0) && (stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s bilhoes", extenso);
					else printf("%s bilhoes e ", extenso);
				}
				
				numero_extenso(milhao, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{
				
					if (stricmp(extenso, "um") == 0)
					{
						if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhao", extenso);
						else printf("%s milhao e ", extenso);
					}
					else
					{
						if ((stricmp(milhar, "000") == 0) && (stricmp(unidades, "000") == 0)) printf("%s milhoes", extenso);
						else printf("%s milhoes e ", extenso);
					}
				}
				
				numero_extenso(milhar, extenso);
				
				if (stricmp(extenso, " ") != 0)
				{ de = 0;
					if (stricmp(extenso, "um") == 0)
					{
						if (stricmp(unidades, "000") == 0) printf("mil", extenso);
						else printf("mil e ", extenso);
					}
					else
					{
						if (stricmp(unidades, "000") == 0) printf("%s mil", extenso);
						else printf("%s mil e ", extenso);
					}
				}
				
				numero_extenso(unidades, extenso);
				if (stricmp(extenso, " ") != 0)
				{
					de = 0;
					printf("%s", extenso);
				}
				break;
		}
		if (um)
		{
			printf(" real\n");
		}
		else
		{
			if(de==0)
			printf(" reais\n");
			else
				printf(" de reais\n");
		}	
	
		const char* unidades[] = {"", "um", "dois", "tre1s", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    	const char* dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
		const char* especiais[] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
		
	
    char* centavosParte = strtok(NULL, ","); // Obtém a parte depois da vírgula
    if (stricmp(centavosParte, "00") != 0)
    {
		centavo = atoi(centavosParte);
		dezena = centavo/10;
		unidade = centavo%10;
		
		if(dezena==1)
			printf("e %s", especiais[unidade]);
		else if (dezena != 1 && unidade != 0 && dezena != 0)
			printf("e %s e %s", dezenas[dezena], unidades[unidade]);
		else if (dezena != 1 && unidade == 0)
			printf("e %s", dezenas[dezena]);
		else if (dezena == 0)
			printf("e %s", unidades[unidade]);
		if(unidade !=0 || dezena !=0)
		{
			if(unidade != 1 || dezena != 0)
			printf(" centavos\n");
		
			else 
			printf(" centavo\n");
		}
	}
}
	
	return 0;
}