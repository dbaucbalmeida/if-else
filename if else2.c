#include<stdio.h>
//media ponderada
//3 provas
//2 com mesmo peso e 1 com peso 2
//mostrar a media finald o aluno
//aprovado ou reprovado
main(){
    float nota1,nota2,nota3,media;
    printf("nota da primeira prova");
    scanf("%f",&nota1);
     printf("nota da segunda prova");
    scanf("%f",&nota2);
     printf("nota da terceira prova");
    scanf("%f",&nota3);

//calcular media ponderada
media=(nota1+nota2+(nota3*2))/4;
if(media>7.0){
    printf("alunoa provado com media %.2f\n",media);
}else{
    printf("aluno reprovado com media %.2f\n",media);
}

}


