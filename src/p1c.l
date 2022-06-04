%option outfile="alice.c"
%option noyywrap
%option caseless

%{
    #include <stdio.h>
    int yylineno = 1;
%}
espacio                         [ \t]+
comillas                        (\"|\”|\�)

/*atributos menos href, src, target, lang*/

class                           {espacio}?(class){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
id                              {espacio}?(id){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
charset                         {espacio}?(charset){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
name                            {espacio}?(name){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
content                         {espacio}?(content){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
alt                             {espacio}?(alt){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
border                          {espacio}?(border){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
rules                           {espacio}?(rules){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
value                           {espacio}?(value){espacio}?(\=){espacio}?{comillas}{texto}{comillas}
type                            {espacio}?(type){espacio}?(\=){espacio}?{comillas}{texto}{comillas}

/*definiciones extras*/   

valorLang                       ([a-zA-Z])([a-zA-Z])
valorTarget                     ((_blank)|(_parent)|(_self)|(_top))

/*URL*/

protocolo                       (http|https|ftp|ftps)(\:)(\/)(\/)
dominio                         ([a-z0-9]+(\.)[a-z0-9]+)+
puerto                          (\:)([0-9][0-9])
ruta                            ([a-z0-9]*[\/\.\-\_\=\~\?\;\&]?)+
fragmento                       (\#)[a-z0-9]+
url                             ({protocolo}{dominio})?{puerto}?(\/)?{ruta}?{fragmento}?

/*de nuevo atributos*/

height                          {espacio}?(height){espacio}?(\=){espacio}?{comillas}[0-9]+{comillas}
width                           {espacio}?(width){espacio}?(\=){espacio}?{comillas}[0-9]+{comillas}
lang                            {espacio}?(lang){espacio}?(\=){espacio}?{comillas}{valorLang}{comillas}
target                          {espacio}?(target){espacio}?(\=){espacio}?{comillas}{valorTarget}{comillas}
href                            {espacio}?(href){espacio}?(\=){espacio}?{comillas}{url}{comillas}
src                             {espacio}?(src){espacio}?(\=){espacio}?{comillas}{url}{comillas}

/*textos o strings*/

texto                           ((à|è|ì|ò|ù)*(á|é|í|ó|ú)*[a-zA-Z0-9]*{espacio}*(\=)*(\.)*(\-)*(\,)*(\!)*(\·)*(\$)*(\%)*(\&)*(\/)*(\()*(\))*(\?)*(\¡)*(\¿)*(\|)*(\@)*(\#)*(\~)*(\€)*(\¬)*(\})*(\{)*(\[)*(\])*(\;)*(\:)*(\_)*)*

%%

\n                              {yylineno++;}
{espacio}                       {}
{id}                            {printf("Alice: En la linea %d encontre el atributo ID ---> '%s'\n", yylineno, yytext);}
{class}                         {printf("Alice: En la linea %d encontre el atributo CLASS ---> '%s'\n", yylineno, yytext);}
{href}                          {printf("Alice: En la linea %d encontre el atributo HREF ---> '%s'\n", yylineno, yytext);}
{src}                           {printf("Alice: En la linea %d encontre el atributo SRC ---> '%s'\n", yylineno, yytext);}
{lang}                          {printf("Alice: En la linea %d encontre el atributo LANG ---> '%s'\n", yylineno, yytext);}
{charset}                       {printf("Alice: En la linea %d encontre el atributo CHARSET ---> '%s'\n", yylineno, yytext);}
{name}                          {printf("Alice: En la linea %d encontre el atributo NAME ---> '%s'\n", yylineno, yytext);}
{content}                       {printf("Alice: En la linea %d encontre el atributo CONTENT ---> '%s'\n", yylineno, yytext);}
{alt}                           {printf("Alice: En la linea %d encontre el atributo ALT ---> '%s'\n", yylineno, yytext);}
{height}                        {printf("Alice: En la linea %d encontre el atributo WEIGHT ---> '%s'\n", yylineno, yytext);}
{width}                         {printf("Alice: En la linea %d encontre el atributo WIDTH ---> '%s'\n", yylineno, yytext);}
{target}                        {printf("Alice: En la linea %d encontre el atributo target ---> '%s'\n", yylineno, yytext);}
{border}                        {printf("Alice: En la linea %d encontre el atributo BORDER ---> '%s'\n", yylineno, yytext);}
{rules}                         {printf("Alice: En la linea %d encontre el atributo RULES ---> '%s'\n", yylineno, yytext);}
{type}                         {printf("Alice: En la linea %d encontre el atributo TYPE ---> '%s'\n", yylineno, yytext);}
"<!doctype html"                {printf("Alice: En la linea %d encontre el tag DOCTYPE ---> '%s'\n", yylineno, yytext);}
"<html"                         {printf("Alice: En la linea %d encontre el tag abierto HTML ---> '%s'\n", yylineno, yytext);}
"</html>"                       {printf("Alice: En la linea %d encontre el tag cerrado HTML ---> '%s'\n", yylineno, yytext);}
"<head"                         {printf("Alice: En la linea %d encontre el tag abierto HEAD ---> '%s'\n", yylineno, yytext);}
"</head>"                       {printf("Alice: En la linea %d encontre el tag cerrado HEAD ---> '%s'\n", yylineno, yytext);}
"<meta"                         {printf("Alice: En la linea %d encontre el tag META ---> '%s'\n", yylineno, yytext);}
"<title"                        {printf("Alice: En la linea %d encontre el tag abierto TITLE ---> '%s'\n", yylineno, yytext);}
"</title>"                      {printf("Alice: En la linea %d encontre el tag cerrado TITLE ---> '%s'\n", yylineno, yytext);}
"<body"                         {printf("Alice: En la linea %d encontre el tag abierto BODY ---> '%s'\n", yylineno, yytext);}
"</body>"                       {printf("Alice: En la linea %d encontre el tag cerrado BODY ---> '%s'\n", yylineno, yytext);}
"<section"                      {printf("Alice: En la linea %d encontre el tag abierto SECTION ---> '%s'\n", yylineno, yytext);}
"</section>"                    {printf("Alice: En la linea %d encontre el tag cerrado SECTION ---> '%s'\n", yylineno, yytext);}
"<div"                          {printf("Alice: En la linea %d encontre el tag abierto DIV ---> '%s'\n", yylineno, yytext);}
"</div>"                        {printf("Alice: En la linea %d encontre el tag cerrado DIV ---> '%s'\n", yylineno, yytext);}
"<p"                            {printf("Alice: En la linea %d encontre el tag abierto P ---> '%s'\n", yylineno, yytext);}
"</p>"                          {printf("Alice: En la linea %d encontre el tag cerrado P ---> '%s'\n", yylineno, yytext);}
"<hr"                           {printf("Alice: En la linea %d encontre el tag HR ---> '%s'\n", yylineno, yytext);}
"<br"                           {printf("Alice: En la linea %d encontre el tag BR ---> '%s'\n", yylineno, yytext);}
"<mark"                         {printf("Alice: En la linea %d encontre el tag abierto MARK ---> '%s'\n", yylineno, yytext);}
"</mark>"                       {printf("Alice: En la linea %d encontre el tag cerrado MARK ---> '%s'\n", yylineno, yytext);}
"<strong"                       {printf("Alice: En la linea %d encontre el tag abierto STRONG ---> '%s'\n", yylineno, yytext);}
"</strong>"                     {printf("Alice: En la linea %d encontre el tag cerrado STRONG ---> '%s'\n", yylineno, yytext);}
"<em"                           {printf("Alice: En la linea %d encontre el tag abierto EM ---> '%s'\n", yylineno, yytext);}
"</em>"                         {printf("Alice: En la linea %d encontre el tag cerrado EM ---> '%s'\n", yylineno, yytext);}
"<h1"                           {printf("Alice: En la linea %d encontre el tag abierto H1 ---> '%s'\n", yylineno, yytext);}
"</h1>"                         {printf("Alice: En la linea %d encontre el tag cerrado H1 ---> '%s'\n", yylineno, yytext);}
"<h2"                           {printf("Alice: En la linea %d encontre el tag abierto H2 ---> '%s'\n", yylineno, yytext);}
"</h2>"                         {printf("Alice: En la linea %d encontre el tag cerrado H2 ---> '%s'\n", yylineno, yytext);}
"<h3"                           {printf("Alice: En la linea %d encontre el tag abierto H3 ---> '%s'\n", yylineno, yytext);}
"</h3>"                         {printf("Alice: En la linea %d encontre el tag cerrado H3 ---> '%s'\n", yylineno, yytext);}
"<h4"                           {printf("Alice: En la linea %d encontre el tag abierto H4 ---> '%s'\n", yylineno, yytext);}
"</h4>"                         {printf("Alice: En la linea %d encontre el tag cerrado H4 ---> '%s'\n", yylineno, yytext);}
"<h5"                           {printf("Alice: En la linea %d encontre el tag abierto H5 ---> '%s'\n", yylineno, yytext);}
"</h5>"                         {printf("Alice: En la linea %d encontre el tag cerrado H5 ---> '%s'\n", yylineno, yytext);}
"<h6"                           {printf("Alice: En la linea %d encontre el tag abierto H6 ---> '%s'\n", yylineno, yytext);}
"</h6>"                         {printf("Alice: En la linea %d encontre el tag cerrado H6 ---> '%s'\n", yylineno, yytext);}
"<a"                            {printf("Alice: En la linea %d encontre el tag abierto A ---> '%s'\n", yylineno, yytext);}
"</a>"                          {printf("Alice: En la linea %d encontre el tag cerrado A ---> '%s'\n", yylineno, yytext);}
"<img"                          {printf("Alice: En la linea %d encontre el tag IMG ---> '%s'\n", yylineno, yytext);}
"<table"                        {printf("Alice: En la linea %d encontre el tag abierto TABLE ---> '%s'\n", yylineno, yytext);}
"</table>"                      {printf("Alice: En la linea %d encontre el tag cerrado TABLE ---> '%s'\n", yylineno, yytext);}
"<td"                        {printf("Alice: En la linea %d encontre el tag abierto TD ---> '%s'\n", yylineno, yytext);}
"</td>"                      {printf("Alice: En la linea %d encontre el tag cerrado TD ---> '%s'\n", yylineno, yytext);}
"<tfoot"                        {printf("Alice: En la linea %d encontre el tag abierto TFOOT ---> '%s'\n", yylineno, yytext);}
"</tfoot>"                      {printf("Alice: En la linea %d encontre el tag cerrado TFOOT ---> '%s'\n", yylineno, yytext);}
"<th"                        {printf("Alice: En la linea %d encontre el tag abierto TH ---> '%s'\n", yylineno, yytext);}
"</th>"                      {printf("Alice: En la linea %d encontre el tag cerrado TH ---> '%s'\n", yylineno, yytext);}
"<tr"                        {printf("Alice: En la linea %d encontre el tag abierto TR ---> '%s'\n", yylineno, yytext);}
"</tr>"                      {printf("Alice: En la linea %d encontre el tag cerrado TR ---> '%s'\n", yylineno, yytext);}
"<tbody"                        {printf("Alice: En la linea %d encontre el tag abierto TBODY ---> '%s'\n", yylineno, yytext);}
"</tbody>"                      {printf("Alice: En la linea %d encontre el tag cerrado TBODY ---> '%s'\n", yylineno, yytext);}
"<thead"                        {printf("Alice: En la linea %d encontre el tag abierto THEAD ---> '%s'\n", yylineno, yytext);}
"</thead>"                      {printf("Alice: En la linea %d encontre el tag cerrado THEAD ---> '%s'\n", yylineno, yytext);}
"<ul"                        {printf("Alice: En la linea %d encontre el tag abierto UL ---> '%s'\n", yylineno, yytext);}
"</ul>"                      {printf("Alice: En la linea %d encontre el tag cerrado UL ---> '%s'\n", yylineno, yytext);}
"<ol"                        {printf("Alice: En la linea %d encontre el tag abierto OL ---> '%s'\n", yylineno, yytext);}
"</ol>"                      {printf("Alice: En la linea %d encontre el tag cerrado OL ---> '%s'\n", yylineno, yytext);}
"<li"                        {printf("Alice: En la linea %d encontre el tag abierto LI ---> '%s'\n", yylineno, yytext);}
"</li>"                      {printf("Alice: En la linea %d encontre el tag cerrado LI ---> '%s'\n", yylineno, yytext);}
{comillas}                      {printf("Alice: En la linea %d encontre unas COMILLAS ---> '%s'\n", yylineno, yytext);}
">"                             {printf("Alice: En la linea %d encontre un BRAKC ---> '%s'\n", yylineno, yytext);}
"="                             {printf("Alice: En la linea %d encontre un IGUAL ---> '%s'\n", yylineno, yytext);}
{texto}                         {printf("Alice: En la linea %d encontre el TEXTO ---> '%s'\n", yylineno, yytext);}
.                               {}

%%
int main(int argc, char **argv){
    if(argc > 1){
        yyin = fopen(argv[1],"r"); /*Abre un archivo*/
        printf("\n");
        printf("Common Expressions Interpreter Logic Assistant  ALICEv0.0\n");
        printf("\n");
        
    }else{
        yyin = stdin; /*Interactivo*/
        printf("\n");
        printf("Common Expressions Interpreter Logic Assistant  ALICEv0.0\n");
        printf("\n");
        printf("Alice: Este es el modo interactivo\n");
        printf("Alice: Debe ingresar por teclado el codigo y yo lo analizare\n");
    }
    yylex();
    return 0;
}
