
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

// Biến toàn cục của tọa độ
struct ToaDo {
    float x;
    float y;
};

// Cách 1: Nhập tạo độ cách 1 dùng hàm struct và return về giá trị vừa nhập
struct ToaDo NhapToaDo() {
    struct ToaDo td;
    scanf ("%f%f", &td.x, &td.y);
    return td;
}


// Cách 2: Ta dùng 1 con trỏ để nhập và truy xuất con trỏ đó 
void NhapToaDo2(struct ToaDo *td) {
    scanf ("%f%f", &(*td).x, &(*td).y);
    // Nghĩa là: 
        /*
            std2 bên dưới: nó chứ x và y ta cần truy xuất

            dùng con trỏ truy xuất vào cả phân vùng chưa x và y là: td2 => *td

            giờ nhập địa chỉ: &(*td).x và &(*td).y
        */
}



// In ra tọa độ vừa nhập
void inToaDo (struct ToaDo td) {
    printf ("(%.2f, %.2f)", td.x, td.y);
}


int main() {

    struct ToaDo td1;
    NhapToaDo(&td1);
    inToaDo(td1);


    printf ("\n");



    struct ToaDo td2;
    NhapToaDo2(&td2);
    inToaDo(td2);


}