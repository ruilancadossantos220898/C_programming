/*
#include <stdio.h> -> é uma directiva de pré-processamento, para o pré-processador do C. Ela adiciona as 
funções e variáveis predefinidas do arquivo de cabeçalho (header) de nome stdio.h

stdio.h -> A biblioteca stdio.h é das bibliotecas mais importantes na linguagem C, ela possui funções que 
permite interagir com o utilizador através do ecrâ/tela e do teclado, e permite manipular arquivos/ficheiros.
Ela faz parte das bibliotecas padrão do C e contém declarações de funções, macros e tipos que são usados 
para realizar operações de entrada e saída (Input/Output, ou I/O). O nome stdio.h vem de 
Standard Input/Output Header (Cabeçalho de Entrada e Saída Padrão). Este ficheiro têm então a extensão .h 
com o propósito de indicar que é um ficheiro de cabeçalho.
Aqui estão algumas das funções mais usadas que estão declaradas no stdio.h:

- Funções para Entrada e Saída Padrão (geralmente Ler e escrever no terminal): printf, scanf, puts, gets, fgets
- Manipulação de Arquivos: fopen, fclose, fprintf, fscanf, fgets, fputs, fread, fwrite
- Manipulação de Fluxos (Streams): stdin (Fluxo de entrada padrão (geralmente o teclado)), stdout (Fluxo de saída padrão (geralmente o terminal)), stderr, fseek
- Funções para Trabalhar com caracteres e strings: getchar, putchar, fgetc, fputc
- Funções para Verificação de Erros: feof (Verifica se o fim de um arquivo foi alcançado), ferror (Verifica se ocorreu um erro durante a operação de I/O)
- Funções para Limpeza de Buffers: fflush
- Funções para Redirecionamento de Fluxos: freopen
- Constantes Úteis: EOF (Representa o fim de um arquivo (End Of File)), NULL (Representa um ponteiro nulo, usado para indicar erros ou finalizações)
*/




/*
printf() -> A função printf “print formatted”, uma das funções mais usadas em C para exibir dados formatados 
na saída padrão (geralmente o terminal), é uma função que imprime (dar print ou "printar") uma string no 
ecrâ/tela/console, incluindo variáveis ​​dentro da string. Ela faz parte da biblioteca padrão de entrada e 
saída (stdio.h).

A sintaxe da função printf é:

int printf(const char *formato, ...);


O primeiro argumento do printf() é sempre um string (uma série de caracteres entre aspas (""). Retorna um numero inteiro que 
corresponde ao numero de caracteres que foram imprimidos.
Nós também podemos colocar caracteres de escape no string para imprimir caracteres especiais. Por
exemplo: 

  :espaço
\n :quebra de linha, colocando \n no string causa que o restante do string seja impresso na linha seguinte
\a :toca um bipe, alarme sonoro padrao do sistema
\b :Backspace (apaga o último caractere).
\t :Tabulacao horizontal (TAB) ou (HT)
\r :Retorna ao inicio da linha
\0 :Caracter nulo
\v :Tabulacao vertical (VT)
\f :end of page (new page)
\\ :caractere \ (barra invertida)
\' :caractere ' (Aspas simples ou plica)
\" :caractere " (Aspas duplas)
\? :caractere ?
\123 :caractere relacionado ao codigo 123 em octal (ASCII)
\X12 :caractere relacionado ao codigo 12 em hexadecimal (ASCII)
%% :caractere %

- Outros Caracteres Especiais podemos imprimri diretamente:
#: Hash ou Hashtag ou cardinal
*: asterisco ou asterisk
_: sublinhado/underline/underscore
-: Hífen ou sinal de subtração
@: arroba
&: i comercial
$:
.: ponto
;: Ponto e vírgula.
:: dois-pontos.
^: acento circunflexo
~: til
$: cifrao ou dollar

- Especificadores de Formato (Format Specifiers):
Os Especificadores usados para imprimir diferentes tipos de dados no printf("... %tipo ...",var):

-- Especificadores de formato para inteiros: 
%d ou  %i: Imprime inteiros decimais (com sinal).
%X ou %x : Imprime inteiros em hexadecimal (minúsculo e maiúsculo).
%o : Imprime inteiros em octal.
-- Especificadores de formato para ponto flutante (floating point), tipicamente os tipos float e double): 
%f : Imprime ponto flutuante no formato decimal (padrão 6 casas decimais).
%e ou %E: Imprime ponto flutuante em notação científica (minúsculas ou maiúsculas).
%g ou %G : Escolhe entre formato decimal ou científico, o que for mais adequado.

printf("%e\n", 12345.678);  // Saída: "1.234568e+04"

-- Especificadores de formato para caracters: 
%c : Imprime um caractere único.
-- Especificadores de formato para strings (squencia de caracteres alfanumericos - texto): 
%s : Imprime uma sequência de caracteres (string).
-- Especificadores de Ponteiros
%p : Imprime o endereço de memória de um ponteiro.

int valor = 42;
printf("Endereço de valor: %p\n", (void*)&valor);


- Ajuste da Largura e Precisão:
O printf permite ajustes na largura mínima e na precisão dos campos a serem impressos, controlando o alinhamento e a quantidade de 
casas decimais, por exemplo.

-- Largura Mínima:
Especifica o número mínimo de caracteres que o campo deve ocupar. Se o valor a ser impresso for menor que a largura especificada, o 
campo será preenchido com espaços.

printf("%10d\n", 123);  // Saída: "       123"

-- Alinhamento à Esquerda: Usar o caractere - para alinhar o valor à esquerda.

printf("%-10d\n", 123);  // Saída: "123       "

-- Precisão: Para números de ponto flutuante, a precisão especifica o número de casas decimais a serem impressas.

printf("%.2f\n", 3.14159);  // Saída: "3.14"

Para strings, a precisão limita o número máximo de caracteres a serem impressos.

printf("%.5s\n", "Hello, world!");  // Saída: "Hello"

-- Zeros à Esquerda: Usar 0 antes da largura especificada preenche os campos com zeros em vez de espaços.

printf("%05d\n", 123);  // Saída: "00123"


- Especificadores Avançados
-- Espaço para números positivos: O caractere   (espaço) antes de um especificador de número reserva espaço para o sinal.

printf("% d\n", 123);   // Saída: " 123"
printf("% d\n", -123);  // Saída: "-123"

-- Forçar o sinal para números positivos: Usar + força a exibição do sinal positivo (+).

printf("%+d\n", 123);  // Saída: "+123"


-- Prefixo para octal e hexadecimal: Usar # faz com que números octais e hexadecimais sejam precedidos por 0 e 0x, respectivamente.

printf("%#o\n", 123);  // Saída: "0173"
printf("%#x\n", 123);  // Saída: "0x7b"


- Combinação de Especificadores
Os especificadores podem ser combinados para maior controle da formatação.

--- Alinhamento à esquerda com preenchimento de zeros não é permitido.
Se usar 0 com -, o 0 será ignorado. Ex.:

printf("%-+10.2f\n", 123.45);  // Saída: "+123.45   "



- Cuidados com o printf
-- Correspondência de Argumentos: Certifique-se de usar o especificador correto para o tipo de dado correspondente. Usar um 
especificador errado pode levar a comportamento indefinido.

int numero = 10;
printf("%f\n", numero);  // Comportamento indefinido!

-- Cuidado com o Buffer:
O printf pode usar buffers para melhorar o desempenho. Para garantir que os dados sejam impressos imediatamente, use fflush(stdout);.
Buffers são áreas de memória temporária usadas para armazenar dados antes que sejam processados ou transferidos para outro lugar.

Quando você executa printf("Olá"), o texto pode ser armazenado em um buffer em memória, mas não será exibido no terminal imediatamente.
Se você adicionar printf("\n"), o caractere de nova linha força a liberação (ou "flush") do buffer, imprimindo "Olá" no terminal.
A funcao fflush(FILE *stream); força a liberação do buffer associado a stream. Exemplo de uso com stdout:

printf("Olá");
fflush(stdout);  // Garante que "Olá" seja impresso imediatamente


*/



/*
O que é uma variável em C?
- Uma variável é uma localização de memória que tem um nome (identificador), um tipo (define o tipo de dado que 
pode armazenar) e um valor (dado armazenado).
- Em C, toda variável deve ser declarada antes de ser usada, especificando seu tipo e nome. Já o seu valor não
é necessariamente obrigatorio ser atribuido no momento que se declara a variável, e pode ser modificado durante 
a execução do programa.
Em C , nomes de variáveis devem ser declarados antes de serem usados. Se não for declarado, ocorrerá
um erro de compilação.
- Devem ser dados valores às variáveis antes que sejam utilizadas. Se você tentar utilizar a variável
antes de especificar o seu valor, você obterá “lixo” (o que quer que esteja armazenado no endereço da
variável na memória quando o programa começa sua execução), culminando com falha na execução
do programa.

- Regras para nomes das variáveis:

1) Deve começar com uma letra ou sublinhado/underline/underscore (_). (não pode começar com numeros: 1,2,3,4,...)
2) Não pode conter espaço ou caracteres especiais: # * + - ! @ & $ % . ; ? ! ' " / \ ( ) [ ] < > = { }
3) É case-sensitive (diferencia maiúsculas de minúsculas).
4) Não são permitidos nomes ou palavras reservadas da linguagem: auto break case char const continue default do 
double else enum extern float for goto if int long main register return short signed sizeof static struct 
switch typedef union unsigned void volatile while

- Para resumir, quando um programa é executado, uma variável é associada com:

1) um tipo: diz quantos bytes a variável ocupa, e como ela deve ser interpretada.
2) um nome: um identificador.
3) um endereço: o endereço do byte menos significativo do local da memória associado à variável.
4) um valor: o conteúdo real dos bytes associados com a variável; o valor da variável depende do tipo
da variável; a definição da variável não dá valor a variável; o valor é dado pelo operador de atribuição,
ou usando a função scanf(). Nós veremos mais tarde que a função scanf() atribui a uma variável um
valor digitado no teclado.

Principais tipos de dados:

- Inteiro(int): Ocupa, geralmente, um Tamanho de 4-bytes = 32-bits (1-byte = 8-bits).
32 bits significam que há 32 dígitos binários (0 ou 1) para representar um número. Num tipo com sinal (como int), um dos bits é 
usado para representar o sinal (positivo ou negativo). Esse bit é chamado de bit de sinal, e normalmente é o bit mais significativo,
ou seja o bit mais à esquerda.
Se o bit de sinal for 0, o número é positivo.
Se o bit de sinal for 1, o número é negativo.
Com 32 bits, temos: 1 bit para o sinal, 31 bits para representar o valor absoluto do número, com um total de 2^31 combinações.
O maior número positivo que pode ser representado com 31 bits é: 2^31 − 1 = 2.147.483.647 (contamos de 0 até 2^31 − 1), embora hajam
2^31 combinações, temos de subtrair 1 para obter o maior valor que podemos representar, ou seja [0 ; 2^31 − 1] existem 2^31 − 1 numeros
interos.
Portanto, o intervalo de um int de 32 bits com sinal é: [-2^31 ; 2^31 − 1] = [-2.147.483.648 ; 2.147.483.647].

Em C, os números inteiros com sinal são armazenados usando o sistema de complemento de dois (two's complement), que é o formato mais 
comum para representar números negativos em binário:

Em binário 1000 0000 0000 0000 0000 0000 0000 0000 é (-2147483648) em décimal
Em binário 1000 0000 0000 0000 0000 0000 0000 0001 é (-2147483647) em décimal
...
Em binário 1111 1111 1111 1111 1111 1111 1111 1110 é menos dois (-2) em décimal
Em binário 1111 1111 1111 1111 1111 1111 1111 1111 é menos um (-1) em décimal
Em binário 0000 0000 0000 0000 0000 0000 0000 0000 é zero (0) em décimal
Em binário 0000 0000 0000 0000 0000 0000 0000 0001 é um (1) em décimal
Em binário 0000 0000 0000 0000 0000 0000 0000 0010 é dois (2) em décimal
...
Em binário 0111 1111 1111 1111 1111 1111 1111 1110 é  (2.147.483.646) em décimal
Em binário 0111 1111 1111 1111 1111 1111 1111 1111 é  (2.147.483.647) em décimal


Quando usar %d ou %i?
Use %d quando você quer garantir que a entrada ou saída seja sempre tratada como um número decimal.
Use %i quando você quer permitir que a entrada seja interpretada em diferentes bases (decimal, octal ou hexadecimal).



existem algumas variantes deste tipo:

- Inteiro (long): é um tipo de dado inteiro com sinal, o que significa que pode armazenar valores positivos e negativos. Ele ocupa 
mais memória que o tipo int, permitindo armazenar números maiores. Tipicamente servem para armazenar números inteiros muito grandes 
que não cabem num int.
Ocupa 8-bytes = 64-bits, Intervalo de long: -9223372036854775808 a 9223372036854775807

- Inteiro (short): é um tipo de dado inteiro com sinal. Ele ocupa menos memória que o tipo int. 
Tamanho de short: 2-bytes = 16-bits, Intervalo de short: -32768 a 32767

- A partir do padrão C99 em diante, a biblioteca <stdint.h> introduziu tipos de inteiros com tamanho fixo, que garantem o mesmo 
tamanho em todas as plataformas. Esses tipos são úteis para programação de baixo nível e sistemas embarcados.

Tipo int8_t: tamanho 8-bits = 1 byte. Intervalo de Valores -128 a 127. Especificador no printf: %" PRId8 " (macro)
Tipo uint8_t: tamanho 8-bits = 1 byte. Intervalo de Valores 0 a 255. Especificador no printf: %" PRIu8 " (macro)
Tipo int16_t: tamanho 16-bits = 2 byte. Intervalo de Valores -32.768 a 32.767. Especificador no printf: %" PRId16 " (macro)	
Tipo uint16_t: tamanho 16-bits = 2 byte. Intervalo de Valores 0 a 65.535. Especificador no printf: %" PRIu16 " (macro)
Tipo int32_t: tamanho 32-bits = 4 byte. Intervalo de Valores -2.147.483.648 a 2.147.483.647. Especificador no printf: %" PRId32 " (macro)	
Tipo uint32_t: tamanho 32-bits = 4 byte. Intervalo de Valores 0 a 4.294.967.295. Especificador no printf: %" PRIu32 " (macro)
Tipo int64_t: tamanho 64-bits = 8 byte. Intervalo de Valores -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807. Especificador no printf: %" PRId64 " (macro)	
Tipo uint64_t: tamanho 64-bits = 8 byte. Intervalo de Valores 0 a 18.446.744.073.709.551.615. Especificador no printf: %" PRIu64 " (macro)

A letra 'u' é de unsigned




- Ponto flutuante (float): float é um tipo de dado usado para armazenar números reais (números com o ponto decimal). Este
números são armazenados em duas partes: a mantissa e o expoente. Eles são armazenados de uma maneira
que se assemelha a notação exponencial. Por exemplo, o número 6,023x10^23 é escrito como 6.023e23.
Neste caso, a mantissa é 6.023 e o expoente 23.
Estes números são armazenados de uma forma padrão, tal que a mantissa tem apenas um dígito para a esquerda do ponto decimal. 
Desta forma, 3634.1 é escrito como 3.6341e3, e 0.0000341 é escrito 3.41e5. Note também que a precisão é limitada pela mantissa. 
Somente os 6 dígitos mais significativos são armazenados
Tamanho de float: 4 bytes = 32-bits
Intervalo de float: 1.175494e-38 a 3.402823e+38
Precisão de float: 6 dígitos significativos
Ele segue o padrão IEEE 754, que é uma forma amplamente usada para representar números de ponto flutuante em computadores.

O float usa 32 bits (4 bytes), divididos em 3 partes:

S EEEE EEEE MMM MMMM MMMM MMMM MMMM MMMM (em binário)

S (1 bit): Bit de sinal, 0 para positivo, 1 para negativo
E (8 bits): Expoente com viés (bias) de 127, o expoente desloca o ponto decimal para a posição correta.
M (23 bits): Mantissa (ou fração)
Representa o valor significativo do número.

A representação de um número float é feita usando a seguinte fórmula:

(-1)^S * (1 + Mantissa) * 2^(Expoente − 127)

- Ponto flutuante (double):
Tamanho de double: 8 bytes
Intervalo de double: 2.225074e-308 a 1.797693e+308
Precisão de double: 15 dígitos significativos


- Caracter (char):
*/

#include <stdio.h> // standart for I/O
#include <stdlib.h> // necessário para o system ("pause")
#include <unistd.h> // Para funções de pausa, como sleep()

#include <limits.h> // Para aceder aos limites dos tipos de dados inteiros
#include <float.h>    // Para limites dos tipos de ponto flutuante
#include <stdint.h> // inteiros de tamanho especifico
#include <string.h> // Manipulação de strings


int main(void){
    /* Exibindo Texto Simples */
	printf("Hello World!\n");
    printf("A frase \"Hello World!\" é um clássico! "
           "Tipicamente, em qualquer linguagem, no nosso primeiro programa printamos essa frase na tela!\n\n");



    printf("\n\n");
    /*
    Retorno da Função printf():
    A função printf retorna o número de caracteres exibidos.
    Se ocorrer um erro, retorna um valor negativo.
    */
    int num_carac = printf("Hello World!\n");
    printf("Número de caracteres da frase \"Hello World!\\n\": %d\n", num_carac);

    printf("\n\n");

	// Declara uma variável inteira chamada "idade" e atribui o valor 27
  	int idade = 27;
    printf("Minha idade: %d anos\n", idade); //Exibindo Números Inteiros
	// Declara uma variável de caractere chamada "sexo" e atribui o valor 'M'
    char sexo = 'M';
    printf("Meu sexo/genero: %c\n", sexo);
	// Declara uma variável de ponto flutuante chamada "altura" e atribui o valor
  	float altura = 1.78;
    printf("Minha altura: %f metros\n", altura);

    int eu_dia = 22, eu_mes = 8, eu_ano = 1998; // declaração de 3 variaveis inteiras na mesma linha
    printf("Minha data de nascimento: %02d/%02d/%04d\n", eu_dia, eu_mes, eu_ano);// Exibindo Múltiplos Valores
    /*
    O 02 em %02d garante que o número seja exibido com 2 dígitos, preenchendo com zero à esquerda, se necessário. E o 04 em %04d
    garante que o número seja exibido com 4 dígitos
    */


    char eu_nome[] = "Rui";
    printf("Meu nome: %s\n", eu_nome);


    /* String */
    char nome[] = "João";
    // Como uma string é um array de caracteres, você pode acessar cada caractere usando um índice.
    printf("Primeira letra: %c\n", nome[0]); // Saída: J
    printf("Terceira letra: %c\n", nome[2]); // Saída: ã
    // pode modificar caracteres individuais de uma string declarada como um array.
    nome[0] = 'j';
    printf("Nome modificado: %s\n", nome); // Saída: joão
    // Atenção: Se a string for declarada como um ponteiro (char *nome = "João";), ela será armazenada em uma região de memória só para leitura, e tentar modificá-la causará um erro.
    // Para descobrir o tamanho de uma string (número de caracteres antes do \0), use a função strlen da biblioteca string.h.
    printf("Tamanho da string: %zu\n", strlen(nome)); // Saída: 4



    /*
     No printf(): %d e %i são equivalentes.
    Ambos são usados para imprimir números inteiros na base decimal (base 10).

    No scanf(): há diferenças ligeiras entre %d e %i
    %d:Espera que a entrada seja um número inteiro na base decimal (base 10).
    %i: É mais flexível. Aceita números em diferentes bases (decimal, octal ou hexadecimal), dependendo do formato da entrada:
    Se a entrada começar com 0x ou 0X, o número é interpretado como hexadecimal (base 16).
    Se a entrada começar com 0, o número é interpretado como octal (base 8).
    Caso contrário, o número é interpretado como decimal (base 10).
    */

    int num1, num2;

    // Usando %d (só aceita decimal)
    printf("Digite um número decimal: ");
    scanf("%d", &num1);
    printf("Você digitou (em decimal): %d\n", num1);

    // Usando %i (aceita decimal, octal ou hexadecimal)
    printf("(Sugestao: 42=052=0x2A) - Digite um número (decimal, octal comecado com 0 ou hexadecimal comecado com 0x ou 0X):");
    scanf("%i", &num2);
    printf("Você digitou (em decimal): %d\n", num2);
    printf("Você digitou (em Octal): %o\n", num2);
    printf("Você digitou (em Hexadecimal, com minusculas): %x\n", num2);
    printf("Você digitou (em Hexadecimal, com maiusculas): %X\n", num2);








    // Ponteiro (void*)
    int numero = 42;
    printf("Endereço de 'numero': %p\n", (void*)&numero);


    // Hexadecimal (%x, %X)
    numero = 255;
    printf("Hexadecimal: %x\n", numero); // Minúsculas
    printf("Hexadecimal: %X\n", numero); // Maiúsculas

    // Octal (%o)
    numero = 64;
    printf("Octal: %o\n", numero);


    // Notação Científica (%e, %E)
    double num = 123456.789;
    printf("Notação científica: %e\n", num);
    printf("Notação científica: %E\n", num);

    /*
    Uma variavel tipo float: Precisão de ~7 (tem uma precisão de cerca de 6 a 7 dígitos) dígitos decimais significativos.
    O que significa que qualquer dígito além desse limite pode não ser confiável.
    Imprimir um float com mais casas decimais do que a precisão que ele pode oferecer, a função printf pode arredondar ou 
    preencher com dígitos que não são significativos. Esses dígitos adicionais são basicamente "lixo" ou "inventados" porque não 
    correspondem a nenhuma informação real armazenada no float.

    Se precisar de mais precisão, deve-se usar o tipo double, que é um número de ponto flutuante de precisão dupla e pode armazenar 
    aproximadamente 15 a 16 dígitos decimais significativos.
    */
    float pi_float = 3.14159265359;
    printf("Iniciou-se uma variavel do tipo float pi_float=3.14159265359\n");
    printf("%f\n", pi_float); // Saída: 3.141593
    printf("%.1f\n", pi_float); // Saída: 3.1
    printf("%.2f\n", pi_float); // Saída: 3.14
    printf("%.3f\n", pi_float); // Saída: 3.142
    printf("%.4f\n", pi_float); // Saída: 3.1416
    printf("%.5f\n", pi_float); // Saída: 3.14159
    printf("%.6f\n", pi_float); // Saída: 3.141593
    printf("%.7f\n", pi_float); // Saída: 3.1415927
    printf("%.8f\n", pi_float); // Saída: 3.14159274
    printf("%.9f\n", pi_float); // Saída: 3.141592741
    printf("%.10f\n", pi_float); // Saída: 3.1415927410
    printf("%.11f\n", pi_float); // Saída: 3.14159274101
    printf("%.12f\n", pi_float); // Saída: 3.141592741013
    printf("%.13f\n", pi_float); // Saída: 3.1415927410126
    printf("%.14f\n", pi_float); // Saída: 3.14159274101257
    printf("%.15f\n", pi_float); // Saída: 3.141592741012573
    printf("%.16f\n", pi_float); // Saída: 3.1415927410125732

    double num_double = 123456.789012345678901234567890123;
    printf("Iniciou-se uma variavel do tipo double num_double = 123456.789012345678901234567890123\n");
    printf("Número em floating point normal %%f: %f\n", num_double);
    printf("Número em notação científica normal %%e: %e\n", num_double);
    printf("Número em notação científica %%.14e : %.14e\n", num_double);
    printf("Número em notação científica %%.15e : %.15e\n", num_double);
    printf("Número em notação científica %%.16e : %.16e\n", num_double);
    printf("Número em notação científica %%.17e : %.17e\n", num_double);
    printf("Número em notação científica %%.18e : %.18e\n", num_double);
    printf("Número em notação científica %%.19e : %.19e\n", num_double);
    printf("Número em notação científica %%.20e : %.20e\n", num_double); 
   /*
    A instrucao abaixo imprime 0.429993. Arrredondamentos, truncamentos e aproximacoes nao sao realmente um problema do C; sao um
    problema da ciencia da computacao.  O tipo double propicia uma maior precisao porque tem 53 bits de mantissa.
    */
    float a = 1000.43;
    float b = 1000.0;
    printf("%f\n",a - b);



    /*
    tabela ASCII (American Standard Code for Information Interchange)

    O char é representado com 1-byte = 8-bits, o que significa que ele pode armazenar 256 valores possíveis (0 a 255), pois 2^8=256,
    se for unsigned (sem sinal) ou -128 a 127 se for signed (com sinal).

    0 1 2 3 4 5 6 7 8 9

    : ; < = > ? @

    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

    [ \ ] ^ _ `

    a b c d e f g h i j k l m n o p q r s t u v w x y z

    { | } ~
    
    o intervalo ASCII imprimível padrão (códigos de 32 a 126)
    Os caracteres fora desse intervalo, muitas vezes, são representados por símbolos estranhos ou não imprimíveis.
    Qualquer coisa abaixo de 32 (controle) ou acima de 126 não é garantido ser visível ou ser representado corretamente no terminal.
    Caracteres de controle comuns (0 a 31):
    0: Null (NUL)
    7: Bell (BEL, faz um beep)
    8: Backspace (BS)
    9: Tabulação Horizontal (TAB)
    10: Nova linha (LF)
    13: Retorno de carro (CR)
    Outros: São comandos usados para formatar ou controlar texto, como "Form Feed".

    Caráteres de 127 a 255 (se o char for unsigned): Podem ser caracteres estendidos ou exibidos como ? se não forem reconhecidos 
    pelo terminal. Valores Acima de 126: Ao ultrapassar o intervalo ASCII imprimível, o console não consegue renderizar esses 
    caracteres, então mostra ?.
    */
    printf("\n\n");
    printf("=== Caracteres ASCII ===\n");
    char cara = 0;
    int count = 580;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c ", cara ); 
        ++cara;
    }
    printf("\n\n");
    printf("=== CARACTERES ASCII IMPRIMIVEIS (posicoes 32 a 126) ===\n");

    printf("Simbolos a começar no espaço \' \', posições 32-47 na tabela ASCII:\n");
    cara = ' ';
    count = 16;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }

    printf("Números ou algarismos, de 0 a 9, posições 48-57 na tabela ASCII:\n");
    cara = '0';
    count = 10;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }


    printf("Simbolos, posições 58-64 na tabela ASCII:\n");
    cara = '9'+1;
    count = 64-58+1;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }

    printf("Alfabeto (latino) Maiúsculo, de A-Z, posições 65-90 na tabela ASCII:\n");
    cara = 'A';
    count = 26;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }

    printf("Simbolos, posições 91-96 na tabela ASCII:\n");
    cara = 'Z'+1;
    count = 96-91+1;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }

    printf("Alfabeto (latino) minusculas, de a-z, posições 97-122 na tabela ASCII:\n");
    cara = 'a';
    count = 26;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }

    printf("Simbolos, posições 123-126 na tabela ASCII:\n");
    cara = 123;
    count = 126-123+1;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        printf("%c - %d\n", cara , cara); 
        ++cara;
    }




    /*  
    sizeof() -> não é uma função de biblioteca em C, mas sim um operador embutido (built-in operator) da linguagem. Ele é usado para 
    determinar o tamanho em bytes de um tipo de dado ou de uma expressão.
    O sizeof retorna um valor do tipo size_t, que é um tipo inteiro sem sinal definido na biblioteca <stddef.h>.
    Para imprimir valores do tipo size_t, use o especificador de formato %zu.
    */

    printf("\n\n");
    // Tipos inteiros
    printf("=== Tipos Inteiros ===\n");
    printf("Tamanho de short: %zu bytes\n", sizeof(short));
    printf("Intervalo de short: %hd a %hd\n", SHRT_MIN, SHRT_MAX);

    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Intervalo de int: %d a %d\n", INT_MIN, INT_MAX);

    printf("Tamanho de long: %zu bytes\n", sizeof(long));
    printf("Intervalo de long: %ld a %ld\n", LONG_MIN, LONG_MAX);

    // Tipo caractere
    printf("\n=== Tipo Caractere ===\n");
    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    printf("Intervalo de char: %d a %d\n", CHAR_MIN, CHAR_MAX);

    // Tipos de ponto flutuante
    printf("\n=== Tipos de Ponto Flutuante ===\n");
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Intervalo de float: %e a %e\n", FLT_MIN, FLT_MAX);
    printf("Precisão de float: %d dígitos significativos\n", FLT_DIG);

    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    printf("Intervalo de double: %e a %e\n", DBL_MIN, DBL_MAX);
    printf("Precisão de double: %d dígitos significativos\n", DBL_DIG);





    printf("\a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a \a");


    /*
    Como fazer uma pausa em C?
    */
    //system( "read -n 1 -s -p \"Press any key to continue...\"" );
    // getchar(); // Observação: usar getchar() não funcionará se a entrada padrão for redirecionada; daí precisar de uma solução mais geral.

    // your code here
    //sleep(3); // sleep for 3 seconds



	printf("123\b45\n");
    printf("123\r456\n");
    printf("\aAlerta!\n"); // Alerta (beep)

    printf("Linha 1\nLinha 2\tTabulação\n");
    //printf("Fim\0\n");



	return 0;
}

