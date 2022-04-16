
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>

typedef struct {
    int tuso;
    int mauso;
} PhanSo;

PhanSo* capPhatPhanSo() {
    return (PhanSo*) malloc(sizeof(PhanSo));
}

int main() {

    PhanSo* ps = capPhatPhanSo();
    scanf ("%d%d", &ps->tuso, &ps->mauso);
    printf ("%d/%d", ps->tuso, ps->mauso);

}



