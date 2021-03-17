#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <omp.h>
#include <pthread.h>
#include <sys/wait.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char matrix[9][9]

typedef struct hilo{
	int colm, totl;
}fThread;

int division(int col, int fil){
	omp_set_num_threads(81);
	omp_set_nested(true);
	
	
	int row[9];
	size_t i,j; 	
	
	
	#pragma omp parallel for collapse(2) schedule(dynamic)
	for(i = col; i < (col+3);i++ ){
		for(j = fil;j <(fil+3);j++ ){
			if(matrix[i][j]>48 && matrix[i][j]>58){
				row[[i][j]-49] = 1;     //sum total de linea+3
			}
			else{
				exit(-1);
			}
		}
	}
	
	for(i = 0;i<9;i++ ){
		if(row[x]==0){
			return(0);
		}
	}
	
	
	return 1;
}

void *repeticion(void *argc){
	omp_set_num_threads(81);
	omp_set_nested(true);
	
	int y,i,j;
	hilo *celda = (hilo *)arg;
	
	
	int colm = celda -> colm;
	int col[9];
	
	for(y=0;y<10;y++){
		col[y] = 1;
	}
	
	#pragma om parallel for 
	for(int i =0; j<9;j++){
		
		if(colm == 1){
			pid_t id;
			id = syscall(SYS_getid);
			
			int line[9];
		}
	}
}
int main(int argc, char *argv[]) {
	
	return 0;
}
