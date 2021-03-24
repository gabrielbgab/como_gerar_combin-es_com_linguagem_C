#include<stdio.h>


/*o algoritmo é o mais eficiente para achar combinação e é simples a ideia por traz do algoritmo que é um pouco menos simples*/
int main(){

FILE *arquivo;
/* */
char a=97,b=2,c=3,d=4,e=5,f=6;
int n,p,i;
int contador=0;

arquivo=fopen("code_by_gabrielbgab.txt","w");
printf("programa para gerarum programa em linguagem C para calcular combinação de n elemento em grupos de tamanho p\n");
printf("Digite n\n");
scanf("%d",&n);
printf("Digite  p   p<=25 ");
scanf("%d",&p);
fprintf(arquivo,"#include<stdio.h>\n");
fprintf(arquivo,"int main () {\n");
fprintf(arquivo,"FILE *arquivo;\n");
fprintf(arquivo,"int ");
for(i=1;i<=p;i++){fprintf(arquivo,"%c=%d",96+i,i);if(i!=p){fprintf(arquivo,",");}else{fprintf(arquivo,";\n");}}
fprintf(arquivo,"int ");
for(i=1;i<=p;i++){fprintf(arquivo,"%c%c=%d",96+i,96+i,0);if(i!=p){fprintf(arquivo,",");}else{fprintf(arquivo,";\n");}}
fprintf(arquivo,"int contador=0;\n");

fprintf(arquivo," arquivo=fopen(\"aulas4you.txt\",\"w\" ); \n");

for(i=1;i<=p;i++){
fprintf(arquivo,"%c%c=0;\n",96+i,96+i);
if(i==1){fprintf(arquivo,"for(a=1;a<=%d;a++){ \n",n-p+1);}

if(i!=1&&i!=p){fprintf(arquivo,"for(%c=%c%c+1+%c;%c<=%d;%c++){ \n",96+i,96+i,96+i,96+i-1,96+i,n-p+1+i,96+i);}

if(i==p){fprintf(arquivo,"for(%c=%c+1;%c<=%d;%c++){\n",96+i,96+i-1,96+i,n,96+i );
fprintf(arquivo,"fprintf(arquivo,\" ");
for(i=1;i<=p;i++){fprintf(arquivo,"\%%d ");}
fprintf(arquivo,"\\n \" ");
for(i=1;i<=p;i++){fprintf(arquivo,",%c",96+i);}
fprintf(arquivo,");} \n");
}
}
for(i=p;i>1;i--){fprintf(arquivo," if(%c==%d){%c%c++;} \n }",96+i,55+i,96+i-1,96+i-1);}


fprintf(arquivo,"\n }");


printf("\nThe code has been planted!!! \nveja o arquivo de texto com o programa\n");
printf("\ncounter-terrorist win!");


fclose(arquivo);
return(0);
}
