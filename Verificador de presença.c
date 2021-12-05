#include <stdio.h>
#include <string.h>
#define QTD_ALUNOS 38



struct alunos_SIGAA_lista{
	char nome_alunos[100];
	char presente[40];
};


struct partic_meet{
	char nome_aluno_meet[100];
	
};


void comparacao(struct partic_meet alunos_frequencia[], int CONT, struct alunos_SIGAA_lista alunos_cadastrados[QTD_ALUNOS]){
	int i;
	char *v_aux;
	
	char string1[] = "ANDR__ VICTOR DOS SANTOS";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string1);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[0].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[0].presente, "AUSENTE");
		}
	}
	
	char string2[] = "ANTONIO GERALDO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string2);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[1].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[1].presente, "AUSENTE");
		}
	}
	
	char string3[] = "BIANCA BASTOS";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string3);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[2].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[2].presente, "AUSENTE");
		}
	}
	
	char string4[] = "BRUNO ESTRELLA";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string4);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[3].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[3].presente, "AUSENTE");
		}
	}
	
	char string5[] = "CARLOS EDUARDO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string5);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[4].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[4].presente, "AUSENTE");
		}
	}
	
	char string6[] = "CARLOS FRANCISCO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string6);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[5].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[5].presente, "AUSENTE");
		}
	}
	
	char string7[] = "CAYO CESAR";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string7);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[6].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[6].presente, "AUSENTE");
		}
	}
	
	char string8[] = "CIRO MELO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string8);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[7].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[7].presente, "AUSENTE");
		}
	}
	
	char string9[] = "CLAUDINEY RYAN";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string9);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[8].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[8].presente, "AUSENTE");
		}
	}
	
	char string10[] = "DANIEL LIMA";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string10);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[9].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[9].presente, "AUSENTE");
		}
	}
	
	char string11[] = "DIOGO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string11);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[10].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[10].presente, "AUSENTE");
		}
	}
	
	char string12[] = "ENZO EDUARDO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string12);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[11].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[11].presente, "AUSENTE");
		}
	}
	
	char string13[] = "F__BIO ANDERSON";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string13);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[12].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[12].presente, "AUSENTE");
		}
	}
	
	char string14[] = "FERNANDO AUGUSTO ROSA";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string14);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[13].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[13].presente, "AUSENTE");
		}
	}
	
	char string15[] = "GABRIEL ALVES";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string15);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[14].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[14].presente, "AUSENTE");
		}
	}

	char string16[] = "GABRIEL DANTAS";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string16);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[15].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[15].presente, "AUSENTE");
		}
	}

	char string17[] = "GABRIEL FERRO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string17);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[16].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[16].presente, "AUSENTE");
		}
	}

	char string18[] = "GERMANO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string18);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[17].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[17].presente, "AUSENTE");
		}
	}
	
	char string19[] = "GLEIDESON";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string19);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[18].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[18].presente, "AUSENTE");
		}
	}

	char string20[] = "GUILHERME DE OLIVEIRA";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string20);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[19].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[19].presente, "AUSENTE");
		}
	}

	char string21[] = "GUILHERME EDUARDO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string21);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[20].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[20].presente, "AUSENTE");
		}
	}

	char string22[] = "__CARO GABRYEL";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string22);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[21].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[21].presente, "AUSENTE");
		}
	}

	char string23[] = "INGRID MIRANDA";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string23);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[22].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[22].presente, "AUSENTE");
		}
	}
	
	char string24[] = "JO__O PEDRO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string24);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[23].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[23].presente, "AUSENTE");
		}
	}

	char string25[] = "JOS__ PIRES GAYOSO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string25);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[24].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[24].presente, "AUSENTE");
		}
	}
	
	char string26[] = "KATHELLEEN";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string26);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[25].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[25].presente, "AUSENTE");
		}
	}
	
	char string27[] = "LUCASCP2004";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string27);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[26].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[26].presente, "AUSENTE");
		}
	}
	
	char string28[] = "LUCAS GUIMAR__ES";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string28);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[27].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[27].presente, "AUSENTE");
		}
	}
	
	char string29[] = "LUCAS JOS__";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string29);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[28].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[28].presente, "AUSENTE");
		}
	}
	
	char string30[] = "LUCAS DAVID";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string30);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[29].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[29].presente, "AUSENTE");
		}
	}
	
	char string31[] = "LUCIANO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string31);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[30].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[30].presente, "AUSENTE");
		}
	}
	
	char string32[] = "MARCOS VICTOR";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string32);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[31].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[31].presente, "AUSENTE");
		}
	}

	char string33[] = "MARKESLEY";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string33);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[32].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[32].presente, "AUSENTE");
		}
	}

	char string34[] = "MATHEUS DO VALE";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string34);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[33].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[33].presente, "AUSENTE");
		}
	}

	char string35[] = "NEEMIAS";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string35);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[34].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[34].presente, "AUSENTE");
		}
	}

	char string36[] = "OSCAR";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string36);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[35].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[35].presente, "AUSENTE");
		}
	}
	
	char string37[] = "RAYANNE";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string37);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[36].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[36].presente, "AUSENTE");
		}
	}
	
	char string38[] = "RODRIGO";
	for (i = 0; i < CONT; i++){
		v_aux = strstr(alunos_frequencia[i].nome_aluno_meet, string38);
		if (v_aux != NULL){
			strcpy(alunos_cadastrados[37].presente, "PRESENTE");
			break;
		}
		else{
			strcpy(alunos_cadastrados[37].presente, "AUSENTE");
		}
	}
}

void remove_caracteres_especiais (char string[100]){
	int i;
	for (i = 0; i < strlen(string);i++){
		if (string[i]< 32 || string[i]> 126){
			if (string[i] != ' ' && string[i] != '\n'){
				string[i] = '_';
			}
		}
		if (string[i] >= 97 && string[i] <= 122){
			string[i] -= 32;
		}
	}	
}


int main(){
	struct alunos_SIGAA_lista alunos_cadastrados[QTD_ALUNOS];
	FILE *arq1, *arq2;
	char nome[100], nome2[100];
	char *result1, *result2;
	char nomes_arquivos[100][100];
	int i = 0,j, k = 0, n = 0;
	int CONT = 0;
	arq1 = fopen("freq.txt", "r");
	if (arq1 == NULL){
		printf("Erro na abertura do arquivo!\n");
		return 0;
	}
	arq2 = fopen("AlunosSigaa.txt", "r");
	if (arq2 == NULL){
		printf("Erro na abertura do arquivo!\n");
		return 0;
	}
	while((result1=fgets(nome,100, arq1)) != EOF){
		if (result1 != NULL){
			strcpy(nomes_arquivos[i], result1);
			i++;
		}
		else{
			break;
		}
	}
	while((result2 =fgets(nome2,100, arq2)) != EOF){
		if (result2 != NULL){
			strcpy(alunos_cadastrados[n].nome_alunos, result2);
			n++;
		}
		else
		{
			break;
		}
	}
		
	fclose(arq1);
	fclose(arq2);
	
	for (j = 0; j <= i; j++){
		if (j % 2 == 0 && j != 0){
			if (strcmp(nomes_arquivos[0],nomes_arquivos[j]) != 0){
				CONT++;
				
			}
		}
	}
	CONT--; 
	struct partic_meet alunos_frequencia[CONT];
	for (j = 0; j <= i; j++){
		if (j % 2 == 0 && j != 0){
			if (strcmp(nomes_arquivos[0],nomes_arquivos[j]) != 0){
					strcpy(alunos_frequencia[k].nome_aluno_meet, nomes_arquivos[j]);
					k++;
			}
		}
	}
	
	for (k = 0; k < CONT; k++){
		remove_caracteres_especiais(alunos_frequencia[k].nome_aluno_meet);
	}
	comparacao(alunos_frequencia, CONT, alunos_cadastrados);
	for (i = 0; i < QTD_ALUNOS; i++){
		printf("%s - %s\n", alunos_cadastrados[i].nome_alunos, alunos_cadastrados[i].presente);
	}
	return 0;
}