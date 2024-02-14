#include <stdio.h>

int main() {
    int arr[4][6] =  { {1, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 1, 0}, {0, 1, 1, 0, 1, 0} };
    int marked[4][6] = {{0}};
    int object = 0;
    int size1 = 4;
    int size2 = 6;

    for(int i = 0; i < size1 - 1; i++) {
        for (int j = 0; j < size2 - 1; j++)
        {
            if((arr[i][j] == arr[i + 1][j] || arr[i][j] == arr[i][j + 1]) && arr[i][j] == 1){
                object++;
                break;
            }
        }     
    }
    printf("%d", object);
}