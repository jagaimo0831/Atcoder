#include <stdio.h>
int main(void)
{
    // input
    float A, B;
    scanf("%f %f", &A, &B);
    
    // processing & output
    float C;
    C = (A-B)/3 + B;

    printf("%f\n", C); 

}


/*  解説メモ
       割った値を少数にしたいときは " / 3.0 " のようにする
       桁数を指定されている時は printf("%<全体の幅>.<小数点以下の幅>f"); のように指定する
*/

/* 最速コード（ygussany）
#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf()"%.6f\n", (double)(A - B) / 3 + B);
    fflush(stdout);   // 即座にデータを吐き出す関数（なぜ使っているのかは分からん）
    return 0;
}

*/
