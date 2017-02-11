#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a ;
    
    printf("请输入一串数字\n");
    scanf("%d",&a);
    
    int digit ;
    int ret = 0;
    
    while ( a > 0 ) {
        digit = a%10 ;
        ret = ret * 10 + digit ;
        a /= 10 ;
    }
    printf("%d\n",ret);
    return 0 ;
}
