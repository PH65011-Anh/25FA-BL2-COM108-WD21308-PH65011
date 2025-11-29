//Lab6 - Bai 1
#include <stdio.h>
int mang(int n)
{
    int i;
    int array[100];
    float tong = 0;
    float tb;
    int count = 0;
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 3 == 0) {
            tong += array[i];
            count++;
        }
    }

    if (count > 0)
    {
        tb = tong / count;
        printf("Trung binh cong cac so chia het cho 3: %.2f\n", tb);
    }
    else
    {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}
int main()
{
    int n;
    printf("TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG\n");
    printf("Xin moi nhap so phan tu cua mang: \n");
    scanf("%d", &n);
    mang(n);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184