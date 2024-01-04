%{
#include<stdio.h>
#include<stdlib.h>
int wordcount=0;
int linecount=0;
int charcount=0;
%}

%%

[a-zA-Z]+ { wordcount++; charcount+=yyleng; }
\n { linecount++; }
. ;

%%

int main(){
	extern FILE *yyin;
	yyin=fopen("input.txt","r");
	yylex();
	printf("word count:%d\n",wordcount);
	printf("character count:%d\n",charcount);
	printf("line count:%d\n",linecount);
	return 0;
}
