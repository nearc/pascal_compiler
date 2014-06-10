#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define MIN(A, B) (A)<(B)?(A):(B)
#define MAX(A, B) (A)>(B)?(A):(B)

int lineno = 0;
FILE * source;
const FILE * listing;
FILE * code;

int EchoSource = TRUE;
int TraceScan = TRUE;
int TraceParse = TRUE;
int TraceAnalyze = TRUE;
int TraceCode = TRUE;

int Error = FALSE;

int main(int argc, char *argv[]){
	TreeNode * syntaxTree;
	char program[255]; /*source code file name*/
	if (argc != 2){
		fprintf(stderr, "usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	strncpy(program, argv[1], MIN(sizeof(program), strlen(argv[1])));

	source = fopen(program, "r");
	if (source == NULL){
		fprintf(stderr, "can not open file %s\n", program);
		//error
		exit(1);
	}


	listing = stdout;
	// listing = fopen("./output", "w");
	if (listing == NULL){
		printf("%s\n", "unable to make file");
	}

	syntaxTree = parse();
	
	fprintf(listing, "\nSyntax tree:\n");
	printTree(syntaxTree);

	fclose(source);
	return 0;
}