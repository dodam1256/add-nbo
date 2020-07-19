# include <stddef.h>
# include <stdio.h>
# include <stdint.h>
# include <netinet/in.h>



int main(int argc, char*argv[]){

        if (argc != 3){
                printf("usage : %s <file1> <file2>\n", argv[0]);
        return 0;}

        FILE *file1, *file2;
	uint8_t file1num[4];
        uint8_t file2num[4];
       	uint32_t sum;

        file1 = fopen(argv[1], "r");
        file2 = fopen(argv[2], "r");

        fread(&file1num, 1 , 8  , file1);
        fread(&file2num, 1 , 8  , file2);

	uint32_t *a1 = reinterpret_cast < uint32_t *> (file1num);
        uint32_t *a2 = reinterpret_cast < uint32_t *> (file2num);

        uint32_t b1 = ntohl(*a1);
	uint32_t b2 = ntohl(*a2);

        sum = b1 + b2 ;

        printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", b1 , b1 , b2 , b2 , sum , sum);

        fclose(file1);
        fclose(file2);
        }

