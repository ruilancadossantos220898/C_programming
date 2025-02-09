//
// 1º programa em C -> O nosso objetivo será escrever algumas mensagens no ecrã, e abordar alguns pormenores iniciais!
//
//... -> a primeira coisa que estamos a ver aqui, á frente dos 3 pontos, é uma única linha de comentários. 
/* ... */ //-> este é um bloco de comentário, ou seja múltiplas linhas, tudo que estiver cá dentro será 
// tratado pelo C como comentário.
//

/* 
******************************************************************************************************
******************************************************************************************************
Ou seja tudo o que são comentários são trechos de texto que são ignorados pelo compilador. Eles são removidos 
durante a fase de pré-processamento. Isso significa que os comentários não são incluídos no código binário 
final (o executável do programa).

Eles existem apenas no código-fonte para ajudar os programadores. E não afetam a execução do programa e são 
usados principalmente para:
- Documentar o código: Explicar o que o código faz, como funciona ou por que foi escrito de determinada maneira.
Tornando o código mais compreensível para outras pessoas (ou para nós mesmos no futuro).
- Desativar trechos de código: Comentar partes do código para testar ou depurar sem precisar apagá-las.
******************************************************************************************************
******************************************************************************************************
*/

//
//
//

/* 
******************************************************************************************************
******************************************************************************************************
O que é o pré-processador? É um  programa que é invocado (automaticamente) antes do compilador, numa fase chamada 
de pré-processamento, uma etapa que ocorre antes da compilação propriamente dita. O pré-processador é responsável 
por manipular o código-fonte, fazendo-lhe alterações, antes que ele seja compilado.

Então todas as linhas que comecem com # são processadas pelo pré-processador antes do programa ser compilado, e são 
chamadas Diretivas de Pré-Processamento. Exemplos:

- Usada para incluir arquivos de cabeçalho (headers) no código. Ex.:
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include "meu_arquivo.h"  // Inclui um arquivo de cabeçalho local

- Usada para definir macros ou constantes simbólicas. Ex.:
#define PI 3.14159  // Define uma constante chamada PI
#define SOMA(a, b) (a + b)  // Define uma macro para soma

- Usadas para compilação condicional (incluir ou excluir partes do código com base em condições). Ex.:
#define DEBUG  // Define a macro DEBUG
#ifdef DEBUG
    printf("Modo de depuração ativado!\n");
#endif

- Usada para fornecer instruções específicas ao compilador (depende do compilador). Ex.:
#pragma once  // Garante que o arquivo de cabeçalho seja incluído apenas uma vez

- Usada para remover uma definição de macro. Ex.:
#define TESTE 1
#undef TESTE  // Remove a definição da macro TESTE

- Usada para alterar o número da linha e o nome do arquivo que o compilador usa em mensagens de erro. Ex.:
#line 42 "novo_arquivo.c"  // Define que a próxima linha é a linha 42 do arquivo "novo_arquivo.c"
******************************************************************************************************
******************************************************************************************************
*/ 




/* 
******************************************************************************************************
******************************************************************************************************
#include <stdio.h> -> é uma directiva de pré-processamento, para o pré-processador do C.

#include em C, indica ao pré processador que deve incluir o conteúdo de um arquivo/ficheiro especificado no 
código-fonte durante a fase de pré-processamento. Ele substitui essa linha pelo conteúdo do arquivo especificado. 
Isso permite que:
- Se use funções e variáveis declaradas em bibliotecas padrão ou personalizadas.
- Organize o código em múltiplos arquivos.
- Evite repetição de código.

Relativamente à sintaxe do #include, existem duas formas principais de usar. 
1) Usa-se < > para incluir arquivos de bibliotecas padrão do sistema. Ex.:
#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <math.h>   // Inclui a biblioteca de funções matemáticas

2) Usa-se " " para incluir arquivos locais de cabeçalho que estão no mesmo diretório do projeto ou 
em diretórios especificados. Ex.:
#include "meu_arquivo.h"  // Inclui um arquivo de cabeçalho local
#include "pasta/outro_arquivo.h"  // Inclui um arquivo de cabeçalho em uma subpasta


stdio.h -> O arquivo stdio.h é um dos arquivos de cabeçalho (headers) mais importantes na linguagem C,
pois permite interagir com o utilizador e manipular arquivos/ficheiros.
Ele faz parte da biblioteca padrão do C e contém declarações de funções, macros e tipos que são usados 
para realizar operações de entrada e saída (Input/Output, ou I/O). O nome stdio.h vem de 
Standard Input/Output Header (Cabeçalho de Entrada e Saída Padrão). Este ficheiro têm então a extensão .h 
com o propósito de indicar que é um ficheiro deste tipo.
Aqui estão algumas das funções mais usadas que estão declaradas no stdio.h:

1) Funções de Saída (Output):
printf("Olá, mundo!\n");  //printf("...") -> Exibe texto formatado na tela. Exibe "Olá, mundo!" na tela

puts("Bom dia!");  // puts("...") -> Exibe uma string na tela, seguida de uma nova linha. Exibe "Bom dia!" e pula uma linha

putchar('A');  //putchar('...') -> Exibe um único caractere na tela. Exibe o símbolo/caractere 'A'

2)Funções de Entrada (Input):
int idade;
scanf("%d", &idade);  // scanf -> Lê dados formatados da entrada padrão (geralmente o teclado). Lê um número inteiro e armazena na variável idade

gets: Lê uma linha de texto da entrada padrão (não é seguro e não é recomendado usar).

char c = getchar();  // getchar -> Lê um único caractere da entrada padrão. Lê um caractere do teclado


3) Funções de Manipulação de Arquivos
FILE *arquivo = fopen("dados.txt", "r");  // fopen -> Abre um arquivo. Abre o arquivo "dados.txt" para leitura

fclose(arquivo);  // Fecha o arquivo

fprintf(arquivo, "Número: %d\n", 42);  // fprintf -> Escreve dados formatados em um arquivo. Escreve "Número: 42" no arquivo

int numero;
fscanf(arquivo, "%d", &numero);  // fscanf -> Lê dados formatados de um arquivo. Lê um número inteiro do arquivo

4) Outras Funções Úteis:
char texto[50];
sprintf(texto, "Valor: %d", 100);  // sprintf -> Escreve dados formatados em uma string. Armazena "Valor: 100" na string texto

int valor;
sscanf("Valor: 200", "Valor: %d", &valor);  // sscanf -> Lê dados formatados de uma string. Lê o número 200 da string

******************************************************************************************************
******************************************************************************************************
*/ 
 
#include <stdio.h>


/*
******************************************************************************************************
******************************************************************************************************

Função -> em C um bloco/sequência/conjunto de intruções com um nome são chamados de funções, podem receber dados 
de fora da função e podem produzir dados para serem enviados para o exterior da função, para outras posteriores utilizações.



int main(...) -> A palavra "main", em inglês significa principal, e um programa em C tem sempre um bloco
de intruções com o nome 'main' (função main). 
- O compilador C procura pela função main para saber onde começar a execução do programa (Ponto de entrada). 
- A função main retorna um valor inteiro (int) para o sistema operacional, indicando se o programa foi 
executado com sucesso ou não (Retorno de status). Retornar 0 geralmente significa que o programa foi executado 
com sucesso. Outros valores podem indicar erros ou situações específicas. Esse valor é útil em scripts e sistemas 
automatizados, onde o resultado do programa pode ser verificado para tomar decisões.
- Sintaxe Padrão:
A função main deve ser declarada como int e retornar um valor inteiro. Aqui estão as formas mais comuns:

1) Sem argumentos, indicando que pode receber qualquer número de argumentos (ou nenhum). É uma forma mais 
"flexível", mas menos explícita:
int main() {
    // Código do programa
    return 0;  // Indica sucesso
}

2) Argumento 'void', é uma prática mais correta, e recomendada, em muitos casos de declarar uma função que não 
recebe argumentos, deixando-o explicito e evita ambiguidades. Em programas simples, ambos funcionam, mas int main(void) 
é mais claro e segue boas práticas de programação. O que pode evitar erros, m C++, por exemplo, int main() e int main(void) 
são equivalentes, mas em C, int main() pode levar a comportamentos indefinidos se se tentar passar argumentos.
int main(void) {
    return 0;  // Indica que o programa terminou com sucesso
}

3) Com argumentos (para receber parâmetros da linha de comando):
int main(int argc, char *argv[]) {
    // argc: Número de argumentos passados
    // argv: Array de strings contendo os argumentos
    return 0;
}

Porque a função main pode ter 2 parãmetros que já vêm predefinidos no código em C:
I) int argc -> guarda o número inteiro de elementos que o vetor char *argc[] possui. Armazena o número total de 
argumentos passados na execução do programa, incluindo o próprio nome do executável.
II) char *argc[] -> vai ter as strings dos paramentros de entrada da main que podemos definir antes da execução.
Por definição, ou por convenção, mesmo que main não tenha argumentos, o comportamento padrão é:
argc = 1
argv[0] = "nome_do_executavel"

se por exemplo, por comandos bash:
$  gcc codigo.c -o programa
$  ./programa parametro1 parametro2

Neste caso, os valores serão:

argc = 3
argv[0] = "nome_do_executavel"
argv[1] = "parametro1"
argv[2] = "parametro2"

4) O que acontece se não houver main? Se tentar compilar um programa em C sem a função main, o compilador 
gerará um erro, porque não encontrou o ponto de entrada do programa. 
Por exemplo, o compilador dirá algo como: "undefined reference to `main'"

5) E se eu não retornar int? Se declarar a função main com um tipo de retorno diferente de int, o compilador 
pode gerar um aviso ou erro, dependendo das configurações. Em alguns compiladores, como o GCC, isso pode funcionar,
 mas não é portável e não segue o padrão da linguagem C. Mas em compiladores mais rigorosos, isso resultará em um 
 erro ou aviso. Por exemplo:

void main() {  // Isso não é padrão e pode causar problemas
    printf("Olá, mundo!\n");
}



return 0; -> função main retorna um valor do tipo int (inteiro), esse valor é chamado de código de saída (ou status de saída).
Então por convenção 0 indica que o programa terminou com sucesso. Valores diferentes de 0 indicam que ocorreu um erro ou uma 
situação específica.

E se eu omitir o return 0;? A partir do padrão C99, se você omitir o return 0; no final da função main, o compilador assume 
automaticamente que o programa terminou com sucesso. Isso é válido apenas para a função main. Para outras funções que retornam int, 
deve-se sempre incluir um 'return'. Por exemplo:
int main() {
    printf("Olá, mundo!\n");
    // return 0;  // Omitido, mas o compilador assume retorno 0
}

Se o programa encontrar um erro, você pode retornar um valor diferente de 0 para indicar o problema. Por exemplo:
int main() {
    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;  // Retorna 1 para indicar um erro
    }
    // Restante do código
    return 0;  // Indica sucesso
}
******************************************************************************************************
******************************************************************************************************
*/



/*
***************** PONTO E VIRGULA *****************
***************************************************

Em C, o ponto e vírgula (;) é usado para terminar uma instrução. Ele é essencial para indicar ao compilador onde 
uma instrução termina e a próxima começa. Situações em que você DEVE usar (;):

1) No final de instruções simples. Toda instrução que realiza uma ação deve terminar com ;
int x = 10;  // Declaração e atribuição de variável
printf("Olá, mundo!\n");  // Chamada de função
x = x + 5;  // Expressão matemática

2) No final de declarações de variáveis. Quando se declara uma variável, deve-se usar ;. Exemplo:
int idade;
float salario;
char letra;

3) No final de expressões em loops e condicionais. Em loops como for e while, e em condicionais como if, else if e else, 
o ; é usado para terminar as expressões dentro deles. Exemplos:
for (int i = 0; i < 10; i++) {  // O `;` separa as partes do `for`
    printf("%d\n", i);
}

while (x > 0) {  // O `;` não é usado após a condição do `while`
    x--;
}

if (x == 10) {  // O `;` não é usado após a condição do `if`
    printf("x é 10\n");
}

4) No final de chamadas de função. Quando você chama uma função, deve usar ; para terminar a instrução. Exemplo:
printf("Olá, mundo!\n");  // Chamada de função
scanf("%d", &x);  // Chamada de função

5) No final de expressões de retorno. A instrução return deve terminar com ;. Exemplo:
return 0;  // Retorna 0 para indicar sucesso



-> Situações em que NÃO se usa ;
1)Após chaves {}. Chaves {} são usadas para delimitar blocos de código (como em funções, loops e condicionais). 
Não use ; após as chaves. Exemplos:
int main() {  // Não use `;` aqui
    printf("Olá, mundo!\n");
}  // Não use `;` aqui

if (x > 0) {  // Não use `;` aqui
    printf("x é positivo\n");
}  // Não use `;` aqui

2) Após diretivas de pré-processador. Diretivas como #include, #define, #ifdef, etc., não terminam com ;. Exemplos:
#include <stdio.h>  // Não use `;` aqui
#define PI 3.14159  // Não use `;` aqui

3) Após a condição de loops e condicionais. Não use ; após a condição de if, else if, while, for, etc. Exemplos:
if (x == 10) {  // Não use `;` aqui
    printf("x é 10\n");
}

while (x > 0) {  // Não use `;` aqui
    x--;
}

4) Após a definição de funções. Não use ; após a definição de uma função. Exemplo:
int soma(int a, int b) {  // Não use `;` aqui
    return a + b;
}  // Não use `;` aqui
******************************************************************************************************
******************************************************************************************************
*/

int main(void){
    // Usando putchar para exibir cada caractere da string "Hello, World!"
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(',');
    putchar(' ');
    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');
    putchar('\n');  // \n -> Adiciona uma nova linha, e posiciona o cursor no ecrã no ínicio da próxima linha.

    printf("Olá Mundo!\n\n");

    printf("\tBonjour le monde!");

    puts("Hola Mundo!");
    printf("\tHola Mundo!\n"); // -> Tabulador horizontal. Move o cursor para a próxima posição de tabulação. Ou seja cria um espaçamento (maior que o tipico espaço ' ').

    return 0; // return 0; -> Como dito anteriormente, por convenção, a main retornará 0, indicando que o programa terminou com sucesso, e sem erros.

}

// Comandos bash:
// $  gcc hello_world.c -o hello_world
// $  ./hello_world
// $ echo $?      -> Logo após executar o programa, exibirá o código de saída do programa.