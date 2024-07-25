#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a1, b1, c1;
    int a2, b2, c2;
    scanf("%c %d\n", &a1, &a2);
    scanf("%c %d\n", &b1, &b2);
    scanf("%c %d\n", &c1, &c2);

    if(a1=='Y' && a2>=37){
        if((b1=='Y' && b2>=37) || (c1=='Y' && c2>=37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    
    else if(b1=='Y' && b2>=37){
        if((a1=='Y' && a2>=37) || (c1=='Y' && c2>=37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }

    else if(c1=='Y' && c2>=37){
        if((b1=='Y' && b2>=37) || (a1=='Y' && a2>=37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    else {
        printf("N");
    }        
    return 0;
}