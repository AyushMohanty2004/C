#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rw=0;
    int dw=0;
    if(cr==er||cc==ec){
        return 1;
    }
    if(cr==er){
        return dw=maze(cr+1,cc,er,ec);
    }
if(cc==ec){
        return rw=maze(cr,cc+1,er,ec);
    }
    else
    {
        return {rw=maze(cr,cc+1,er,ec);
        dw=maze(cr+1,cc,er,ec);
        }
    }
}
int main(){
    int n;
    puts("Enter number of Rows:");
    scanf("%d",&n);
    int m;
    puts("Enter number of Columns:");
    scanf("%d",&m);
    printf("The number of ways to reach the destination are:%d",maze(1,1,n,m));
}