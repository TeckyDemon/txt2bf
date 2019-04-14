#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLOCATION_ERROR 1
#define FILE_ERROR 2
#define OTHER_ERROR 3

static inline FILE*
xfopen(const char* filename,const char* mode){
	FILE* file_pointer=fopen(filename,mode);
	if(file_pointer==NULL){
		fprintf(stderr,"Error: failed to open file %s\n",filename);
		exit(FILE_ERROR);
	}
	return file_pointer;
}
static inline void
emit_string(FILE* output_file,const char* string){
	fputs(string,output_file);
}
static inline void
emit_repeat(FILE* output_file,char c,int n){
	for(int i=0;i<n;++i)
		fputc(c,output_file);
}
static inline void
emit_difference(FILE* output_file,int difference){
	if(difference==0)
		fputc('.',output_file);
	else{
		char character_in_loop=difference>0?'+':'-';
		difference=difference>0?difference:-difference;
		const int number_of_tens=difference/10;
		if(number_of_tens>0){
			emit_string(output_file,">");
			emit_repeat(output_file,'+',number_of_tens);
			emit_string(output_file,"[<");
			emit_repeat(output_file,character_in_loop,10);
			emit_string(output_file,">-]<");
		}
		emit_repeat(output_file,character_in_loop,difference%10);
		fputc('.',output_file);
	}
}
static inline void
generate_code(FILE* input_file,FILE* output_file){
	int current_char,last_char=0;
	while((current_char=fgetc(input_file))!=EOF){
		emit_difference(output_file,current_char-last_char);
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
	FILE* input_file=xfopen(argv[1],"r");
	FILE* output_file=xfopen(argv[2],"wb");
	generate_code(input_file,output_file);
	fclose(input_file);
	fclose(output_file);
	return 0;
}
