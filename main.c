#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLOCATION_ERROR 1
#define FILE_ERROR 2
#define OTHER_ERROR 3

static inline FILE*
get_file_pointer(const char* filename,const char* mode){
	FILE* file_pointer=fopen(filename,mode);
	if(file_pointer==NULL){
		fprintf(stderr,"Error: failed to open file %s\n",filename);
		exit(FILE_ERROR);
	}
	return file_pointer;
}
static inline char*
int_to_brainfuck(int difference){
	if(difference==0)
		return ".";
	else{
		char character_in_loop=difference>0?'+':'-';
		difference=difference>0?difference:-difference;
		const unsigned int loop_body_length=17;
		const unsigned int number_of_ones=(unsigned int)(difference%10);
		const unsigned int number_of_tens=(unsigned int)(difference/10);
		char* brainfuck_code=calloc(number_of_tens+loop_body_length+number_of_ones+2,sizeof*brainfuck_code);
		if(brainfuck_code==NULL){
			fprintf(stderr,"Fatal: failed to allocate %zu bytes.\n",(number_of_tens+loop_body_length+number_of_ones+2)*sizeof*brainfuck_code);
			exit(ALLOCATION_ERROR);
		}
		if(number_of_tens>0){
			brainfuck_code[strlen(brainfuck_code)]='>';
			memset(brainfuck_code+strlen(brainfuck_code),'+',number_of_tens);
			strcat(brainfuck_code+strlen(brainfuck_code),"[<");
			memset(brainfuck_code+strlen(brainfuck_code),character_in_loop,10);
			strcat(brainfuck_code+strlen(brainfuck_code),">-]<");
		}
		memset(brainfuck_code+strlen(brainfuck_code),character_in_loop,number_of_ones);
		brainfuck_code[strlen(brainfuck_code)]='.';
		return brainfuck_code;
	}
}
static inline void
generate_code(FILE* input_file,FILE* output_file){
	int current_char,last_char=0;
	while((current_char=fgetc(input_file))!=EOF){
		char* brainfuck_code=int_to_brainfuck(current_char-last_char);
		fputs(brainfuck_code,output_file);
		if(brainfuck_code[0]!='.')
			free(brainfuck_code);
		last_char=current_char;
	}
}
static inline void
parse_args(int argc){
	if(argc!=3){
		puts("Usage: bfgen <input> <output>\n");
		exit(OTHER_ERROR);
	}
}
int
main(int argc,char** argv){
	parse_args(argc);
	FILE* input_file=get_file_pointer(argv[1],"r");
	FILE* output_file=get_file_pointer(argv[2],"wb");
	generate_code(input_file,output_file);
	fclose(input_file);
	fclose(output_file);
	return 0;
}
