#include <stdio.h>

int main(void) {

    int x,y;
    scanf("%d%d", &x,&y);
    
    if(x>y || x==y){
        printf("NO");
    }
    else{
        printf("YES");
    }
    	return 0;
}

