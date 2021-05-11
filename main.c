#include <stdio.h>

void bublesort(int angka[],int n){
    int i,j,tmp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(angka[j]>angka[j+1]){
                tmp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = tmp;
            }
        }
    }
}
int main(){
    int angka[100],i,j,n;
    printf("Mau Berapa Angka Yang Di Urut ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Masukan Angkanya: ");
        scanf("%d",&angka[i]);
    }
    bublesort(angka,n);
    printf("Angka Setelah di sorting");
    for(i=0; i<n;i++){
        printf("%d ",angka[i]);
    }
return 0;
}