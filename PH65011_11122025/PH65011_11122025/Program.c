// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <string.h>
void thongTinThuCung()
{
    char maThuCung, tenThuCung;
    int namSinh;
    int tuoi = 2025 - namSinh;
    

}
void tinhTong()
{
    int n;
    int tong = 0;
    do
    {
        printf("Xin moi nhap so nguyen duong n: \n");
        scanf("%d", &n);
        if (n <= 3)
        {
            printf("Xin moi nhap lai n (n phai la so nguyen duong > 3).\n");
        }
    } while (n <= 3);
    for (int i = 1; i <= n; i+=2)
    {
            tong += i;
    }
    printf("Tong cac so le tu 1 den %d la: %d\n", n, tong);
    if (n % 5 == 0 )
    {
        printf("So %d chia het cho 5.\n", n);
    }
    else
    {
        printf("So %d khong chia het cho 5.\n", n);
    }
}
void thongTinCuaHang()
{
    int soLuong;
    float canNang[100];
    float trungBinh, min;
    float tong = 0;
    printf("Nhap so luong thu cung: ");
    scanf("%d", &soLuong);
    printf("Nhap can nang cua tung thu cung:\n");
    for (int i = 0; i < soLuong; i++)
    {
        scanf("%f", &canNang[i]);
    }
    min = canNang[0];
    for (int i = 0; i < soLuong; i++) 
    {
        tong += canNang[i];
        if (canNang[i] < min)
        {
            min = canNang[i];
        }
    }
    trungBinh = tong / soLuong;
    int dem = 0;
    for (int i = 0; i < soLuong; i++) {
        if (canNang[i] < trungBinh) 
        {
            dem++;
        }
    }
    printf("Can nang trung binh: %.2f\n", trungBinh);
    printf("Can nang thap nhat: %.2f\n", min);
    printf("So thu cung co can nang duoi muc trung binh: %d\n", dem);
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCuaHang();
            break;
        case 0:
            printf("Ket thuc chuong trinh\n");
            return;
        default:
            printf("Hay chon cac chuc nang tren MENU: [0-3]");
            break;
        }
        printf("\n");
        printf("Ban co muon tiep tuc chuc nang: [1-Co] [Khac-Khong]\n");
        scanf("%d", &tiepTuc);
    }
}
int main()
{
    int chonChucNang;
    do
    {
        printf("      MENU\n");
        printf("1. Thong Tin Thu Cung\n");
        printf("2. Tinh Tong\n");
        printf("3. Thong Tin Cua Hang\n");
        printf("0. Thoat\n");
        printf("Hay chon CN tu [0-3]\n");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
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