#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // number of boxes

    int i, l, w, h;
    for(i=0; i<n; i++)
	 {
        scanf("%d %d %d", &l, &w, &h);
        if (h < 41) {
            int volume = l * w * h;
            printf("%d\n", volume);
        }
    }

    return 0;
}

