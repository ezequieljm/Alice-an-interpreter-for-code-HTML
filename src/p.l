%option outfile="alice.c"
%option noyywrap
%option caseless

%{
    #include <stdio.h>
    #include "y.tab.h"
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
href                            {espacio}?(href){espacio}?(\=){espacio}?{comillas}{url}{espacio}?{comillas}
src                             {espacio}?(src){espacio}?(\=){espacio}?{comillas}{url}{espacio}?{comillas}

/*textos o strings*/

texto                           ((à|è|ì|ò|ù)*(á|é|í|ó|ú)*[a-zA-Z0-9]*{espacio}*(\=)*(\.)*(\-)*(\,)*(\!)*(\·)*(\$)*(\%)*(\&)*(\/)*(\()*(\))*(\?)*(\¡)*(\¿)*(\|)*(\@)*(\#)*(\~)*(\€)*(\¬)*(\})*(\{)*(\[)*(\])*(\;)*(\:)*(\_)*)*

%%

\n                              {yylineno++;}
{espacio}                       {}
{id}                            return (ID);
{class}                         return (CLASS);
{href}                          return (HREF);
{src}                           return (SRC);
{lang}                          return (LANG);
{charset}                       return (CHARSET);
{name}                          return (NAME);
{content}                       return (CONTENT);
{alt}                           return (ALT);
{height}                        return (HEIGHT);
{width}                         return (WIDTH);
{target}                        return (TARGET);
{border}                        return (BORDER);
{rules}                         return (RULES);
{type}                          return (TYPE);
"<!doctype html"                return (DOCTYPE);
"<html"                         return (HTMLA);
"</html>"                       return (HTMLC);
"<head"                         return (HEADA);
"</head>"                       return (HEADC);
"<meta"                         return (META);
"<title"                        return (TITLEA);
"</title>"                      return (TITLEC);
"<body"                         return (BODYA);
"</body>"                       return (BODYC);
"<section"                      return (SECTIONA);
"</section>"                    return (SECTIONC);
"<div"                          return (DIVA);
"</div>"                        return (DIVC);
"<p"                            return (PA);
"</p>"                          return (PC);
"<h1"                           return (H1A);
"</h1>"                         return (H1C);
"<h2"                           return (H2A);
"</h2>"                         return (H2C);
"<h3"                           return (H3A);
"</h3>"                         return (H3C);
"<h4"                           return (H4A);
"</h4>"                         return (H4C);
"<h5"                           return (H5A);
"</h5>"                         return (H5C);
"<h6"                           return (H6A);
"</h6>"                         return (H6C);
"<hr"                           return (HR);
"<br"                           return (BR);
"<strong"                       return (STRONGA);
"</strong>"                     return (STRONGC);
"<mark"                         return (MARKA);
"</mark>"                       return (MARKC);
"<em"                           return (EMA);
"</em>"                         return (EMC);
"<table"                        return (TABLEA);
"</table>"                      return (TABLEC);
"<a"                            return (AA);
"</a>"                          return (AC);
"<img"                          return (IMG);
"<td"                           return (TDA);
"</td>"                         return (TDC);
"<tfoot"                        return (TFOOTA);
"</tfoot>"                      return (TFOOTC);
"<th"                           return (THA);
"</th>"                         return (THC);
"<tr"                           return (TRA);
"</tr>"                         return (TRC);
"<tbody"                        return (TBODYA);
"</tbody>"                      return (TBODYC);
"<thead"                        return (THEADA);
"</thead>"                      return (THEADC);
"<ul"                           return (ULA);
"</ul>"                         return (ULC);
"<ol"                           return (OLA);
"</ol>"                         return (OLC);
"<li"                           return (LIA);
"</li>"                         return (LIC);
">"                             return (BRAKC);
"="                             return (IGUAL);
{comillas}                      return (COMILLAS);
{texto}                         return (TEXTO);
.                               {}
%%
