%{
    #include <stdio.h> /*es una libreria*/
    int yylex();       /*yylex() es la funcion que llama al analizador lexico*/
    int yyerror();    /*yyerror es una funcion que devuelte un char si detecta un error*/
    int yylineno;     /*una variable entera que contiene el numero de lineas*/
    extern FILE *yyin;    /*es un puntero al archivo por defecto del analizador lexico*/
%}
/*definicion de los terminales "tokens"*/

%token DOCTYPE
%token HTMLA
%token HTMLC
%token HEADA
%token HEADC
%token META
%token TITLEA
%token TITLEC
%token BODYA
%token BODYC
%token SECTIONA
%token SECTIONC
%token DIVA
%token DIVC
%token PA
%token PC
%token H1A
%token H1C
%token H2A
%token H2C
%token H3A
%token H3C
%token H4A
%token H4C
%token H5A
%token H5C
%token H6A
%token H6C
%token HR
%token BR
%token STRONGA
%token STRONGC
%token MARKA
%token MARKC
%token EMA
%token EMC
%token TABLEA
%token TABLEC
%token CAPTIONA
%token CAPTIONC
%token THEADA
%token THEADC
%token TBODYA
%token TBODYC
%token TFOOTA
%token TFOOTC
%token TRA
%token TRC
%token THA
%token THC
%token TDA
%token TDC
%token AA
%token AC
%token IMG
%token BRAKC
%token TEXTO
%token COMILLAS
%token LANG
%token NAME
%token CONTENT
%token CHARSET
%token CLASS
%token ID
%token HREF
%token SRC
%token ALT
%token WIDTH
%token HEIGHT
%token TARGET
%token BORDER
%token RULES
%token OLA
%token OLC
%token ULC
%token ULA
%token LIC
%token LIA
%token TYPE
%token VALUE
%token IGUAL
%start inicio

%%
/*gramatica*/

inicio : DOCTYPE BRAKC pagina    
;

pagina : HTMLA LANG BRAKC cabeza cuerpo HTMLC                
        | HTMLA CLASS LANG BRAKC cabeza cuerpo HTMLC   
        | HTMLA CLASS ID LANG BRAKC cabeza cuerpo HTMLC   
        | HTMLA ID LANG  BRAKC cabeza cuerpo HTMLC              
;
cabeza : HEADA BRAKC contenido_de_cabeza HEADC
;
contenido_de_cabeza : META atributo_meta BRAKC contenido_de_cabeza           /*handle no terminal recursi por izquierda*/
                        | TITLEA atributo_class_id BRAKC texto TITLEC contenido_de_cabeza
                        | TITLEA atributo_class_id BRAKC texto TITLEC
                        | TITLEA BRAKC texto TITLEC contenido_de_cabeza
                        | META atributo_meta BRAKC
                        | TITLEA BRAKC texto TITLEC
                        | TITLEA atributo_class_id BRAKC
;
cuerpo : BODYA BRAKC etiquetas BODYC
        |BODYA BRAKC BODYC
;
etiquetas :   tag_section               /*no generativa*/
            | tag_div                   /*no generativa*/
            | tag_p                     /*no generativa*/
            | tag_hn                    /*no generativa*/
            | tag_saltos                /*no generativa*/
            | tag_table                 /*no generativa*/
            | tag_a                     /*no generativa*/
            | texto_modif               /*no generativa*/
            | tag_lista                 /*no generativa*/
            | IMG atributo_img BRAKC
            | IMG combinacion_sawh BRAKC
            | STRONGA BRAKC texto STRONGC
            | STRONGA atributo_class_id BRAKC texto STRONGC
            | STRONGA BRAKC dentro_de_strong STRONGC
            | STRONGA atributo_class_id BRAKC dentro_de_strong STRONGC
            | etiquetas etiquetas       /*handle no terminal recursivo por izquierda*/
;
tag_section : SECTIONA BRAKC etiquetas SECTIONC
                | SECTIONA atributo_class_id BRAKC etiquetas SECTIONC
                | SECTIONA atributo_class_id BRAKC SECTIONC
                | SECTIONA BRAKC SECTIONC
;
tag_div :  DIVA BRAKC etiquetas DIVC
            | DIVA atributo_class_id BRAKC etiquetas DIVC
            | DIVA atributo_class_id BRAKC DIVC
            | DIVA BRAKC DIVC
;
tag_p : PA BRAKC texto PC
        | PA atributo_class_id BRAKC texto PC
        | PA BRAKC texto_modif PC
        | PA atributo_class_id BRAKC texto_modif PC
;
tag_hn : H1A BRAKC texto H1C 
            | H1A atributo_class_id BRAKC texto H1C
            | H2A BRAKC texto H2C 
            | H2A atributo_class_id BRAKC texto H2C
            | H3A BRAKC texto H3C 
            | H3A atributo_class_id BRAKC texto H3C
            | H4A BRAKC texto H4C 
            | H4A atributo_class_id BRAKC texto H4C
            | H5A BRAKC texto H5C
            | H5A atributo_class_id BRAKC texto H5C
            | H6A BRAKC texto H6C 
            | H6A atributo_class_id BRAKC texto H6C
            | H1A BRAKC texto_modif H1C 
            | H1A atributo_class_id BRAKC texto_modif H1C
            | H2A BRAKC texto_modif H2C 
            | H2A atributo_class_id BRAKC texto_modif H2C
            | H3A BRAKC texto_modif H3C 
            | H3A atributo_class_id BRAKC texto_modif H3C
            | H4A BRAKC texto_modif H4C 
            | H4A atributo_class_id BRAKC texto_modif H4C
            | H5A BRAKC texto_modif H5C
            | H5A atributo_class_id BRAKC texto_modif H5C
            | H6A BRAKC texto_modif H6C 
            | H6A atributo_class_id BRAKC texto_modif H6C
;
tag_saltos : HR BRAKC
                | BR BRAKC
                | HR atributo_class_id BRAKC
                | BR atributo_class_id BRAKC
;
tag_table : TABLEA BRAKC cap TABLEC
            |TABLEA BRAKC cap TABLEC tag_table
            | TABLEA atributo_class_id BRAKC cap TABLEC
            | TABLEA atributo_class_id atributo_bor_rul cap TABLEC
            | TABLEA atributo_bor_rul BRAKC cap TABLEC
            | TABLEA BRAKC relleno TABLEC
            | TABLEA atributo_class_id BRAKC relleno TABLEC
            | TABLEA atributo_class_id atributo_bor_rul relleno TABLEC
            | TABLEA atributo_bor_rul BRAKC relleno TABLEC
            | TABLEA BRAKC contenido TABLEC
            | TABLEA atributo_class_id BRAKC contenido TABLEC
            | TABLEA atributo_class_id atributo_bor_rul contenido TABLEC
            | TABLEA atributo_bor_rul BRAKC contenido TABLEC
;

tag_lista : OLA atributo_class_id BRAKC etiquetas OLC
        | OLA atributo_class_id atributo_type BRAKC etiquetas OLC
        | OLA atributo_type BRAKC etiquetas OLC
        | OLA BRAKC etiquetas OLC
        | ULA atributo_class_id BRAKC etiquetas ULC
        | ULA BRAKC etiquetas ULC
        | LIA BRAKC etiquetas LIC
        | LIA atributo_class_id BRAKC etiquetas LIC
        | LIA atributo_class_id atributo_value BRAKC etiquetas LIC
        | LIA atributo_value BRAKC etiquetas LIA
;
tag_a : AA atributo_a BRAKC texto AC
        | AA BRAKC texto AC
        | AA atributo_a BRAKC IMG atributo_img BRAKC texto AC
        | AA atributo_a BRAKC IMG combinacion_sawh BRAKC texto AC
        | AA BRAKC IMG atributo_img BRAKC texto AC
        | AA BRAKC IMG combinacion_sawh BRAKC texto AC
        | AA atributo_a BRAKC IMG atributo_img BRAKC AC
        | AA atributo_a BRAKC IMG combinacion_sawh BRAKC AC
        | AA BRAKC IMG atributo_img BRAKC AC
        | AA BRAKC IMG combinacion_sawh BRAKC AC
;
cap : CAPTIONA BRAKC texto CAPTIONC relleno
        |CAPTIONA atributo_class_id BRAKC texto CAPTIONC relleno
        |CAPTIONA BRAKC texto CAPTIONC contenido
        |CAPTIONA atributo_class_id BRAKC texto CAPTIONC contenido
;
relleno : THEADA BRAKC contenido THEADC TBODYA BRAKC contenido TBODYC TFOOTA BRAKC contenido TFOOTC
            |THEADA BRAKC contenido THEADC TBODYA BRAKC contenido TBODYC
;        
contenido : TRA BRAKC celdash TRC contenido
            |TRA BRAKC celdash TRC 
            |TRA BRAKC celdasd TRC contenido
            |TRA BRAKC celdasd TRC 
;
celdash : THA BRAKC texto THC celdash
        |THA BRAKC texto THC
        |THA BRAKC texto THC celdasd   /*no puede venir una celda <td> antes de una celda <th>*/
        |THA BRAKC THC celdash
        |THA BRAKC THC
;
celdasd : TDA BRAKC texto TDC celdasd  /*puede estar despues de un <th> o directamente todo <td>*/
        |TDA BRAKC texto TDC
        |TDA BRAKC TDC celdasd
        |TDA BRAKC TDC
        |TDA BRAKC TDC celdash
        |TDA BRAKC texto TDC celdash
;
atributo_meta : atributo_class_id /*regla no generativa*/
                | CLASS NAME CONTENT 
                | CLASS ID NAME CONTENT  
                | ID NAME CONTENT  
                | NAME CONTENT 
                | CLASS NAME
                | CLASS CONTENT
                | ID NAME
                | ID CONTENT 
                | CLASS CHARSET
                | CLASS ID CHARSET
                | ID CHARSET
                | CHARSET 
                | NAME
                | CONTENT
;
atributo_img : CLASS combinacion_sawh
                | ID combinacion_sawh
                | CLASS ID combinacion_sawh
                | ID CLASS combinacion_sawh
                | SRC ALT HEIGHT
                | SRC HEIGHT ALT
                | SRC ALT WIDTH
                | SRC WIDTH ALT
                | SRC WIDTH HEIGHT
                | SRC HEIGHT WIDTH
                | ALT SRC HEIGHT
                | ALT SRC
                | ALT WIDTH                
                | ALT HEIGHT
                | ALT CLASS
                | ALT ID
                | SRC ALT
                | WIDTH ALT
                | HEIGHT ALT
                | CLASS ALT
                | CLASS ID
                | SRC WIDTH
                | SRC HEIGHT
                | SRC CLASS
                | SRC ID
                | WIDTH SRC
                | HEIGHT SRC
                | CLASS SRC
                | ID SRC
                | WIDTH HEIGHT
                | WIDTH CLASS
                | WIDTH ID
                | CLASS WIDTH
                | ID WIDTH
                | HEIGHT WIDTH
                | HEIGHT CLASS
                | HEIGHT ID
                | CLASS HEIGHT
                | ID HEIGHT
                | CLASS | ID | ALT | SRC | WIDTH | HEIGHT
;
atributo_a : HREF
                | HREF TARGET
                | CLASS HREF
                | CLASS ID HREF
                | CLASS HREF TARGET
                | ID HREF
                | ID HREF TARGET
;
atributo_class_id : CLASS 
                    | CLASS ID
                    | ID
                    | ID CLASS
;
atributo_bor_rul : BORDER 
                    | BORDER RULES
                    | RULES
;
atributo_type : TYPE
;
atributo_value : VALUE
;
texto : TEXTO texto
        | COMILLAS texto
        | IGUAL texto
        | tag_saltos texto
        | TEXTO
        | COMILLAS
        | IGUAL
        | tag_saltos
;
texto_modif : texto_modif texto_modif      /*handle no terminal recursivo por izquierda*/
                | texto
                | tag_a
                | STRONGA BRAKC texto STRONGC
                | STRONGA atributo_class_id BRAKC texto STRONGC
                | STRONGA BRAKC dentro_de_strong STRONGC
                | STRONGA atributo_class_id BRAKC dentro_de_strong STRONGC
                | MARKA BRAKC texto MARKC
                | MARKA atributo_class_id BRAKC texto MARKC
                | MARKA BRAKC dentro_de_mark MARKC
                | MARKA atributo_class_id BRAKC dentro_de_mark MARKC
                | EMA BRAKC texto EMC
                | EMA atributo_class_id BRAKC texto EMC
                | EMA BRAKC dentro_de_em EMC
                | EMA atributo_class_id BRAKC dentro_de_em EMC
                | IMG atributo_img BRAKC
                | IMG combinacion_sawh BRAKC
;
dentro_de_strong : MARKA BRAKC texto MARKC
                    | MARKA atributo_class_id BRAKC texto MARKC
                    | MARKA BRAKC dentro_de_mark MARKC
                    | MARKA atributo_class_id BRAKC dentro_de_mark MARKC
                    | EMA BRAKC texto EMC
                    | EMA atributo_class_id BRAKC texto EMC
                    | EMA BRAKC dentro_de_em EMC
                    | EMA atributo_class_id BRAKC dentro_de_em EMC
                    | dentro_de_strong dentro_de_strong
                    | texto
;
dentro_de_mark : STRONGA BRAKC texto STRONGC
                    | STRONGA atributo_class_id BRAKC texto STRONGC
                    | STRONGA BRAKC dentro_de_strong STRONGC
                    | STRONGA atributo_class_id BRAKC dentro_de_strong STRONGC
                    | EMA BRAKC texto EMC
                    | EMA atributo_class_id BRAKC texto EMC
                    | EMA BRAKC dentro_de_em EMC
                    | EMA atributo_class_id BRAKC dentro_de_em EMC
                    | dentro_de_mark dentro_de_mark
                    | texto
;
dentro_de_em : STRONGA BRAKC texto STRONGC
                    | STRONGA atributo_class_id BRAKC texto STRONGC
                    | STRONGA BRAKC dentro_de_strong STRONGC
                    | STRONGA atributo_class_id BRAKC dentro_de_strong STRONGC
                    | MARKA BRAKC texto MARKC
                    | MARKA atributo_class_id BRAKC texto MARKC
                    | MARKA BRAKC dentro_de_mark MARKC
                    | MARKA atributo_class_id BRAKC dentro_de_mark MARKC
                    | dentro_de_em dentro_de_em
                    | texto
;
combinacion_sawh : SRC ALT WIDTH HEIGHT
                        | SRC ALT HEIGHT WIDTH
                        | SRC HEIGHT ALT WIDTH
                        | SRC HEIGHT WIDTH ALT
                        | SRC WIDTH HEIGHT ALT
                        | SRC WIDTH ALT HEIGHT
                        | ALT SRC WIDTH HEIGHT
                        | ALT SRC HEIGHT WIDTH
                        | ALT WIDTH SRC HEIGHT
                        | ALT WIDTH HEIGHT SRC  
                        | ALT HEIGHT SRC WIDTH
                        | ALT HEIGHT WIDTH SRC
                        | WIDTH SRC ALT HEIGHT
                        | WIDTH SRC HEIGHT ALT
                        | WIDTH ALT SRC HEIGHT
                        | WIDTH ALT HEIGHT SRC
                        | WIDTH HEIGHT ALT SRC
                        | WIDTH HEIGHT SRC ALT
                        | HEIGHT SRC WIDTH ALT
                        | HEIGHT SRC ALT WIDTH
                        | HEIGHT ALT SRC WIDTH
                        | HEIGHT ALT WIDTH SRC
                        | HEIGHT WIDTH ALT SRC
                        | HEIGHT WIDTH SRC ALT
;
%%

int yyerror(char *s){ /*definicion de la funcion*/
    printf ("Alice: %s en la linea %d \n", s, yylineno);
};

int main(int argc, char *argv[]){ /*funcion principal del analizador sintactico*/
    int cont;
    printf("\nCommon Expressions Interpreter Logic Assistant  ALICEv0.0\n\n");
    if (argc > 1){
        printf("Alice: Se ha abierto el archivo %s\n", argv[1]);
        yyin = fopen(argv[1], "rt");
        cont = yyparse();
    }else{
        printf("Alice: Este es el modo interactivo.\n");
        printf("Alice: Ingrese desde el teclado el codigo y lo analizare.\n");
        yyin = stdin;
        yyparse();
    }
    
    if (cont == 0){
		printf("Alice: La copilacion ha sido satisfactoria.\n");
	}
    return 0;
}
/*la funcion principal recibe como argumento dos parametros, uno del tipo entero que correspondo
a la cantidad de argumentos y el otro es un arreglo de caracteres donde se almacenan los 
argumentos. Por defecto, siempre la posiscion cero del arreglo contiene el nombre el programa.
El primer if evalua si la cantidad de argumentos pasados como parametros es mayor a 1. Si es verdad
significa que se a escrito el nombre del programa mas un archivo, por tanto se asigna yyin al archivo de entrada
caso contrario se inicia el modo interactivo.*/