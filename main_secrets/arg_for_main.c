// File name: arg_for_main.c 



#include <stdio.h>

int main(int argc, char *argv[]) {
/*
Também podia ser:
int main(int argc, char **argv)

o resto do código ficaria todo igual
*/
    // Verifica se há argumentos além do nome do programa
    if (argc < 2) {
        printf("argc = %d\n",argc);
        printf("Nenhum argumento foi passado.\n");
        printf("argv[0] = %s\n",argv[0]);
        
    } else {
        printf("argc = %d\n",argc);
        printf("Argumentos passados:\n");
        // Itera sobre todos os argumentos
        for (int i = 0; i < argc; i++) {
            printf("argv[%d] = %s\n", i, argv[i]);
        }
    }

    return 0;
}

/*Outputs*/
/*
$  gcc arg_for_main.c -o arg_for_main
$  ./arg_for_main parametro1 parametro2
argc = 3
Argumentos passados:
argv[0] = ./arg_for_main
argv[1] = parametro1
argv[2] = parametro2
*/


/*
$  gcc arg_for_main.c -o arg_for_main
$  ./arg_for_main
argc = 1
Nenhum argumento foi passado.
argv[0] = ./arg_for_main
*/