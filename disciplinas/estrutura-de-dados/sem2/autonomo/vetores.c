# include <stdio.h>

int main(){
    int v[5] = {0, 10, 7, 40, 3};

    for (int i =0; i < 5; i++) {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);

    }
    
    printf("&v[6] = %p, v[6] = %d\n", &v[6], v[6]);

    return 0;
}