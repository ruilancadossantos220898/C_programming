
/*
Considere o problema da divisão de dois números inteiros:

Um bolo é dividido em n partes e é necessário distribuir as partes por m pessoas, pretende-se 
determinar 
*/

# include <stdio.h>

int main(void){
    /*
    Declaração de variáveis

    - Uma variável representa uma zona de memória (do computador) cujo conteúdo pode ser alterado 
    durante a execução do programa. Associamos-lhe um nome para que ela seja utilizada mais 
    facilmente em expressões, por exemplo na realização de cálculos.
    ATENÇÂO: A constante, por exemplo, do tipo carácter ('a', 'd', '8') que são utilizadas num 
    putchar('...'), ou uma string (“Isto não e' uma string”) que pode ser utilizada na função 
    printf("...") permanecem imutáveis durante a execução do programa.

    - Em C, a declaração de uma variável consiste na especificação do seu tipo da variável 
    (palavra reservada pela linguagem), seguido do nome da variável (identificador) e da 
    atribuição do valor inicial que é realizado com o operador atribuição (=).
    - As variáveis são utilizadas para guardar dados, podemos escrever um valor numa variável, 
    mas é necessário que os valores sejam compatíveis com o tipo da variável, e podemos ler o 
    valor que está na variável. A leitura do valor de uma variável não altera o valor da variável.
    - O endereço de uma variável tem a mesma finalidade que o endereço de uma casa, ou de um
    edifício, serve para identificar a variável. A diferença reside no formato dos endereços, 
    os endereços das casas são representados por sequências de caracteres enquanto que nos 
    computadores os endereços das células de memória são representados com números inteiros. 
    A dimensão mais pequena que é possível endereçar num computador é o byte. A alocação, a 
    reserva de memória para as variáveis é feita com base em múltiplos do byte.
    */

   /*
   São declaradas três variáveis diferentes que são inicializadas a zero do tipo int (ou seja do
   tipo inteiro) da seguinte forma:
   */
    int partesDoBolo = 0;
    int pessoas = 0;
    int quociente = 0 , resto = 0; //é possivel incializar duas variáveis de uma vez na mesma linha

    /*
    Leitura de números inteiros do teclado com a função scanf().

    A função scanf() que permite ler dados do teclado. Quando o programa chega ao scanf(), o 
    programa vai parar, e vai esperar que o utilizador escreva no teclado o valor pedido. Esta 
    função receber dois argumentos, eles aparecem entre os parêntesis curvos estão separados com 
    uma vírgula. O primeiro argumento "%d" é uma sequência de caracteres constante (string), é 
    utilizado que indicar à função que deve ler os caracteres e deve converte-los para um número 
    inteiro.

    A função scanf() é mais uma função que se encontra na biblioteca padrão de entrada e saída, stdio.h

    O segundo argumento que está na função scanf, que é &partesDoBolo, é utilizado para indicar à
    função o local onde deve guardar o dado, neste caso será um o número inteiro, pois temos "%d", 
    e a indicação é que seja colocado na variável de nome partesDoBolo.
    Portanto, este segundo argumento é formado pelo operador & seguido do nome da variável. 
    A aplicação de um operador a uma variável gera um valor, o significado do valor depende do tipo 
    de operação. Neste caso o resultado é a obtenção do endereço da variável, isto é, o endereço 
    da zona de memória da variável.
    */
    printf("Numero total de partes, ou fatias, do bolo = ");
    //fflush(stdout); // Para forçar a escrita no ecrã
    scanf("%d" , &partesDoBolo);

    printf("Numero de pessoas = "); // Pede o dado
    // fflush(stdout); // Para forçar a escrita no ecrã
    scanf("%d", &pessoas); /* Le o dado para a variavel pessoas */


    /*
    Efectua os calculos: Dadas as instruções aritméticas, as expressão aritmética são avaliadas 
    e o resultado é colocado na variável de nome quociente e resto.
    */
    quociente = partesDoBolo / pessoas; // divisao inteira
    resto = partesDoBolo % pessoas; // resto da divisao inteira
    /*
    É importante esclarecer o processo de avaliação da expressão. Na expressão (sequência de 
    operandos e de operadores) existem dois operadores, o operador de atribuição (=) e o operador 
    divisão (/). Deve ser salientado que o operador = não é o operador de teste de igualdade, o 
    operador de teste de igualdade é representador por dois sinais de igual (==). Os passos de 
    avaliação da expressão são os seguintes:

    1) A expressão aritmética que se encontra à direita do operador de atribuição é avaliada em
    primeiro lugar.
    2) A avaliação da expressão partesDoBolo / pessoas implica a leitura dos valores que estão 
    guardados nas duas variáveis inteiras (a leitura de uma valor não apaga o valor na variável).
    3) Como as variáveis partesDoBolo e glutoes são do tipo inteiro isto implica que a divisão é 
    do tipo inteiro (6/2 dá 3 com resto zero, mas 2/6 dá 0 com resto 6).
    4) O cálculo é realizado o que gera um valor.
    5) O valor do resultado é em seguida atribuído, copiado para a variável que está no lado 
    esquerdo do operador de atribuição.

    - No lado esquerdo do operador de atribuição só pode estar uma expressão que represente um zona 
    de memória de tipo compatível com o resultado da expressão do lado direito. A zona de memória 
    pode ser representada pelo nome de uma variável ou pela aplicação de um operador (o operador *) 
    ao endereço de uma zona de memória.

    A expressão: resto = partesDoBolo % pessoas; é utilizada para realizar o cálculo do resto da 
    divisão inteira e para isso utiliza-se o operador resto de divisão inteira %.
    Resto da divisão inteira: a mod b = a%b (aritmética modular).

    -> Na realização da operação de divisão, a divisão pela constante nula zero ou por uma variável 
    que tenha o valor zero gera um erro de execução fatal que faz com que o programa termine
    abruptamente. Os operadores aritméticos pode ser aplicados a variáveis do tipo inteiro (int) e 
    a variáveis do tipo real (float) para representar números reais. ATENÇÂO a operação resto (%) 
    da divisão inteira não é válida para operadores do tipo real.

    -> Este tema será abordado com mais detalhe numa fase posterior, mas existem regras bem 
    definidas que são utilizadas na avaliação das expressões (sequência de operandos e de 
    operadores), regras de precedência dos operadores. 
    Podendo as expressões aritméticas terem vários operadores, a avaliação das expressões é feita 
    da esquerda para a direita aplicando as regras de precedência.

    1ª Prioridade relativa: Operador (), operações com Parêntesis curvos são avaliadas em primeiro 
    lugar. Num conjunto de parêntesis aninhados ((...)*(...)), os parêntesis mais no interior são
    avaliados em primeiro lugar. Os parêntesis são utilizados para alterar a ordem de avaliação 
    das expressões. 
    Fazem parte de uma classe de operadores Unários, portanto () é um operador unário 
    (age sobre um único operando).
    Ex.: 3 - -2 = 3 - (-2) =3+2=5

    2ª Prioridade relativa: Operador - +, operação de simétrico e anti-simétrico.
    - O operador de simétrico (ou negativo) é um operador unário (age sobre um único operando) que 
    inverte o sinal de um valor. Ex.:
    int x = 7;
    int simetrico = -x; // Simétrico de x: -7
    - O conceito de anti-simétrico não é diretamente um operador em C, mas pode ser implementado 
    como uma operação que inverte o sinal de um valor (semelhante ao simétrico). Em termos 
    práticos, o anti-simétrico pode ser entendido como a negação do simétrico. Ex.:
    int y = -4;
    int antisimetrico = -y; // Anti-simétrico de y: 4

    3ª Prioridade relativa: Operador * / %, operações de multiplicação, divisão, e resto. São 
    avaliados da esquerda para a direita. Ex.: (fora do contexto da linguagem C)
    2187/81/27/9/3 = (( (2187/81) / 27 ) / 9) / 3 = (( (3^7/3^4) /  3^3) / 3^2) / 3 = 1/3^3 =0,03703703704
    
    4ª Prioridade relativa: Operador + -, operações de adição e subtração, são de classe binária,
    são operadores binários (que atuam sobre dois operandos) e têm a mesma prioridade.
    */

   /*
    Apresentação dos valores de variáveis no ecrã com a função printf("...",...)

    A função printf é invocada com dois argumentos. Como regra geral os argumentos encontram-se
    entre os parêntesis curvos e estão separados por vírgulas. O primeiro argumento é uma string
    (sequência de caracteres delimitado por “ “), ele é utilizado para especificar os caracteres 
    que devem ser escritos no ecrã. Na string podem existir caracteres especiais, os 
    especificadores de conversão como o %d que indicam o local, posição relativa aos outros 
    caracteres, onde o conteúdo de uma variável vai ser colocado quando a sequência de caracteres 
    for escrita no ecrã. O especificar de conversão %d indica que se pretende apresentar o conteúdo 
    de uma variável do tipo inteiro. Afunção tem acesso ao conteúdo da variável através do 
    2o argumento que deve ser o nome da variável cujo conteúdo se pretende apresentar.

    Pode-se avaliar o resultado de expressões utilizando a função printf() que aceita expressões
    aritmética com argumento. A expressão é avaliada em primeiro lugar e o valor da expressão é
    passado para a função. A descrição do funcionamento da função printf() para imprimir valor de
    variáveis (e de expressões) é apresentada na secção seguinte, no entanto pode avaliar as 
    expressões anteriores utilizando a função printf() da forma que a seguir se apresenta:

    printf("1 / 2 : %d\n", 1 / 2); // resultado é zero
    printf("8 %% 9 : %d\n", 8 % 9); // resultado é 8
    printf("2 + 11 * 3 %% 5 - 2 : %d\n", 2 + 11 * 3 % 5 - 2); // resultado = 3
    printf("-2 + -11 * 3 - -2 : %d\n", -2 + -11 * 3 - -2); // resultado = -33
    
   */

    // Apresenta os resultados
    printf("Cada pessoa recebe %d partes\n", quociente);
    printf("Restam %d partes\n", resto);
    /*
    De salientar que a função printf() pode ser utilizada para apresentar o conteúdo de mais do 
    que uma variável, de tipos diferentes e também de constantes:
    */
    //printf("Partes por pessoa = %d. Restam %d partes\n", quociente, resto);
    
    return 0;
}
