// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
void thongTinThuCung()
{
    char maThuCung[3][100];
    char tenThuCung[3][100];
    int namSinh[3];
    int tuoi[3];
    int i;
    int namHienTai = 2025;
    
    for (i = 0; i < 3; i++)
    {
        while (getchar() != '\n');
        printf("Nhap ma thu cung %d:\n", i+1);
        fgets(maThuCung[i], sizeof(maThuCung[i]), stdin);
        printf("Nhap ten thu cung:\n");
        fgets(tenThuCung[i], sizeof(tenThuCung[i]), stdin);
        printf("Nhap nam sinh:\n");
        scanf("%d", &namSinh[i]);
        tuoi[i] = namHienTai - namSinh[i];
    }
    printf("\nThong tin vua nhap:\n");
    for ( i = 0; i < 3; i++)
    {
        printf("\nThu cung thu %d:\n", i+1);
        printf("Ma thu cung: %s\n", maThuCung[i]);
        printf("Ten thu cung: %s\n", tenThuCung[i]);
        printf("Tuoi thu cung: %d\n", tuoi[i]);
    }
}
void tinhTong()
{
    int n;
    int tong = 0;
    do
    {
        printf("Nhap so nguyen duong n:\n");
        scanf("%d", &n);
        if (n <= 3)
        {
            printf("Xin hay nhap lai n (n phai > 3");
        }
    } while (n <= 3);
    for (int i = 1; i <= n; i+=2)
    {
        tong += i;
    }
    printf("Tong cac so le tu 1 den %d la : %d\n", n, tong);
    if (n % 5 == 0)
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
    float trungBinh, nhoNhat;
    float tong = 0;
    int dem = 0;
    printf("Nhap so luong thu cung: \n");
    scanf("%d", &soLuong);
    printf("Nhap can nang cua tung thu cung\n");
    for (int i = 0; i < soLuong; i++)
    {
        scanf("%f", &canNang[i]);
    }
    nhoNhat = canNang[0];
    for (int i = 0; i < soLuong;i++)
    {
        tong += canNang[i];
        if (canNang[i] < nhoNhat)
        {
            nhoNhat = canNang[i];
        }
    }
    trungBinh = tong / soLuong;
    for (int i = 0; i < soLuong; i++)
    {
        dem++;
    }
    printf("Can nang trung binh: %.2f\n", trungBinh);
    printf("Can nang thap nhat: %.2f\n", nhoNhat);
    printf("So thu cung co can nang duoi muc trung binh: %d\n", dem);

}
void lapChucNang(int chonChucNang)
{
    int lap = 1;
    while (lap == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            thongTinThuCung();
            break;
        case 2:
            tinhTong();
            break;
        case 3:
            thongTinCuaHang();
            break;
        case 0:
            printf("Ket thuc chuong trinh");
            return;
        default:
            printf("Chuc nang khong hop le, vui long chon chuc nang tren MENU [0-3]");
            break;
        }
        printf("\n");
        printf("Ban co muon tiep tuc chuc nang: [1-Co] [Khac-Khong]");
        scanf("%d", &lap);
    }

}
int main()
{
    int chonChucNang;
    do
    {
        printf("     MENU\n");
        printf("1. Thong tin thu cung\n");
        printf("2. Tinh tong\n");
        printf("3. Thong tin cua hang\n");
        printf("0. Thoat\n");
        printf("Hay chon chuc nang tu [0-3]\n");
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