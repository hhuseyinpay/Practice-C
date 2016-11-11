#include <stdio.h>

int asal_carpan(long n);

int main()
{
    printf("%d\n",asal_carpan(75));
    return 0;
}

int asal_carpan(long n)
{
    int i ,j ,flag, count = 0;

    for(i=2;i<=n/2;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }

        if(flag)
            continue;
        else if(n%i == 0)    
                count++;
    }
    return count;
}
