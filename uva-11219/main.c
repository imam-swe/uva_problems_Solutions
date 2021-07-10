#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j, k, d1, m1, y1, d2, m2, y2;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d/%d/%d", &d1,&m1,&y1);
        scanf("%d/%d/%d", &d2,&m2,&y2);

        k=y1-y2;
        if(m2>m1)
            k--;

        if(m2==m1 && d2>d1)
            k--;

        if(k<0)
            printf("Case #%d: Invalid birth date\n", i+1);
        else if(k>130)
            printf("Case #%d: Check birth date\n", i+1);
        else
            printf("Case #%d: %d\n", i+1, k);

        k=0; m1=0; m2=0; d1=0; d2=0; y1=0; y2=0;
    }

    return 0;
}
