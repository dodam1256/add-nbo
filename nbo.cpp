# include <stdio.h>
# include <stdint.h>
# include <netinet/in.h>

int main(int argc, char*argv[]){

        if (argc != 3){
                printf("usage : %s <file1> <file2>\n", argv[0]);
        return 0;
	}

        FILE *file1, *file2 ;
        uint32_t file1num, file2num,sum;

        file1 = fopen(argv[1], "r");
        file2 = fopen(argv[2], "r");

        fread(&file1num, 1 , 5 , file1);
        fread(&file2num, 1 , 5 , file2);

        file1num = ntoh1(file1num);
        file2num = ntoh1(file2num);

        sum = file1num + file2num ;

        printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", file1num , file1num , file2num , file2num , sum , sum);

        fclose(file1);
        fclose(file2);
        }


