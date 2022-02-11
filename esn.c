include <stdio.h>
int int main(int argc, const char** argv) {
    int n;


do{
    printf("inserisci n\n"):
    scanf("%d", &n);
    for ( int i = 0; i < n; i++)
    {
        printf("\n I numeri precedenti ad n sono:%d\n",i);
    }

}while(n >= 0);
    return 0;
}
