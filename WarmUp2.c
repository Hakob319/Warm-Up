#include <stdio.h>

int main() {

        int arr1[5] = {5, 14, 63, 10, 6};
        int num;
        int found = 0;

        printf("Input number");
        scanf("%d", &num);

        for (int i = 0; i < 5; ++i) {

        if (num == arr1[i]) {
                printf("%d is true", num);
                found = 1;


        }

        }
if (found) {
        printf("%d is true", num);

} else {

        printf("%d is false", num);

}



        return 0;
}

