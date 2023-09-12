#include<stdio.h>
//condicoes para aposentadoria
//ser >65 anos
//pelo menos 30 noas trabalhados
//60 anos e 25 trabalhado

main(){
int idade,tempo_servicos;
//condicoes para aposentadoria
    printf("digite idade");
    scanf("%d",&idade);
    printf("digite tempo de servicos");
    scanf("%d",&tempo_servicos);
//estrutura de decisão
if(idade>=65,tempo_servicos>= 30)((idade>=60&&tempo_servicos>=25)){
    printf("trabalhador apto.\n");
}else{
    printf("trabalhador inapto.\n");
}
}

 