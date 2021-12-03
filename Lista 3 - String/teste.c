#include <stdio.h>
#include <ctype.h>

char * remove_espacos( char * out, const char * in )
{
    const char * p = in;
    int i = 0;

    while( *p )
    {
        if( !isspace(*p) )
            out[i++] = *p;

        p++;
    }

    out[i] = 0;

    return out;
}


int main( int argc, char * argv[] )
{
    const char * entrada = "Um pequeno jabuti xereta viu dez cegonhas felizes                             .";
    char saida[ 100 ] = {0};

    remove_espacos( saida, entrada );

    printf("Entrada: %s\n", entrada );
    printf("Saida: %s\n", saida );

    return 0;
}

/* eof */