// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void kiemTraSoNguyen()
{
    int x;
    int soNguyenTo = 1;
    int soChinhPhuong = 0;
    system("cls");
    printf("\n");
    printf("Kiem Tra So Nguyen\n");
    printf("Nhap mot so Nguyen bat ky : ");
    scanf("%d", &x);
    printf("So %d la so Nguyen\n", x);
    if (x < 2)
    {
        soNguyenTo = 0;   
    }
    else 
    {
        for (int i = 2; i <= sqrt(x); i++)
        {  
            if (x % i == 0) 
            {
                soNguyenTo = 0;
                break;
            }
        }
    }
    if (soNguyenTo)
        printf("So %d la so Nguyen To.\n", x);
    else
        printf("So %d khong phai la so Nguyen To.\n", x);
    for (int i = 0; i * i <= x; i++) {
        if (i * i == x) 
        {
            soChinhPhuong = 1;
            break;
        }
    }
    if (soChinhPhuong)
        printf("So %d la so Chinh Phuong.\n", x);
    else
        printf("So %d khong phai la so Chinh Phuong.\n", x);
}
void timUocChungBoiChung()
{
    int x, y;
    int UCLN = 1;
    int BCNN;
    system("cls");
    printf("Tim UCLN va BCNN cua 2 so nguyen\n");
    printf("Nhap so nguyen x: \n");
    scanf("%d", &x);
    printf("Nhap so nguyen y: \n");
    scanf("%d", &y);
    int a = (x < 0) ? -x : x;
    int b = (y < 0) ? -y : y;
    int min = (a < b) ? a : b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            UCLN = i;
        }
    }
    int max = (a > b) ? a : b;
    BCNN = max;
    while (BCNN % a != 0 || BCNN % b != 0) {
        BCNN++;
    }
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, UCLN);
    printf("Boi so chung nho nhat cua %d va %d la: %d\n", x, y, BCNN);
}
void tinhTienKaraoke()
{
    int gioBatDau, gioKetThuc, tongGio;
    double tongTien = 0;
    int gia3GioDau = 150000;
    system("cls");
    do 
    {
        printf("Tinh Tien Quan Karaoke hoat dong tu 12-23h\n");
        printf("Nhap gio bat dau: \n");
        scanf("%d", &gioBatDau);
        if (gioBatDau < 12 || gioBatDau > 22)
        {
            if (gioBatDau == 23)
            {
                printf("Quan dong cua vao 23h! Vui long nhap gio khac (12-22h).\n");
            }
            else printf("Gio bat dau khong hop le! Vui long nhap lai (12-22h).\n");
        }
    } while (gioBatDau < 12 || gioBatDau > 22);
    do 
    {
        printf("Nhap gio ket thuc: \n");
        scanf("%d", &gioKetThuc);
        if (gioKetThuc < 13 || gioKetThuc > 23)
        {
            printf("Gio ket thuc khong hop le! Vui long nhap lai .\n");
        }
        else if (gioKetThuc <= gioBatDau)
        {
            printf("Gio ket thuc phai lon hon gio bat dau! Vui long nhap lai.\n");
        }
    } while (gioKetThuc < 12 || gioKetThuc > 23 || gioKetThuc <= gioBatDau);
    tongGio = gioKetThuc - gioBatDau;
    if (tongGio <= 3) 
    {
        tongTien = tongGio * gia3GioDau;
    }
    else 
    {
        tongTien = 3 * gia3GioDau;                     
        tongTien += (tongGio - 3) * gia3GioDau * 0.7; // Giam 30% tu gio thu 4 tro di
    }
    if (gioBatDau >= 14 && gioBatDau <= 17) 
    {
        tongTien *= 0.9; // Giam them 10% trong khoang thgian 14-17h
    }
    printf("Tong tien can thanh toan: %.0f dong\n", tongTien);
}
void tinhTienDien() 
{
    /*int kwh;
    double tien = 0;
    system("cls");
    printf("Tinh tien dien: \n");
    printf("Nhap so kWh dien da su dung: \n");
    scanf("%d", &kwh);
    if (kwh <= 50)
    {
        tien = kwh * 1678.0;
    }
    else if (kwh <= 100) 
    {
        tien = 50 * 1678.0 + (kwh - 50) * 1734.0;
    }
    else if (kwh <= 200)
    {
        tien = 50 * 1678.0 + 50 * 1734.0 + (kwh - 100) * 2014.0;
    }
    else if (kwh <= 300)
    {
        tien = 50 * 1678.0 + 50 * 1734.0 + 100 * 2014.0 + (kwh - 200) * 2536.0;
    }
    else if (kwh <= 400)
    {
        tien = 50 * 1678.0 + 50 * 1734.0 + 100 * 2014.0 + 100 * 2536.0 + (kwh - 300) * 2834.0;
    }
    else
    {
        tien = 50 * 1678.0 + 50 * 1734.0 + 100 * 2014.0 + 100 * 2536.0 + 100 * 2834.0 + (kwh - 400) * 2927.0;
    }
    printf("So tien phai tra la: %.0f dong\n", tien);*/
    int kwh, suDung;
    double tien = 0;
    int bac[] = { 50, 50, 100, 100, 100, 0 };
    double gia[] = { 1678, 1734, 2014, 2536, 2834, 2927 };
    int n = sizeof(bac) / sizeof(bac[0]); // tim so phan tu mang
    system("cls");
    printf("Tinh tien dien: \n");
    printf("Nhap so kWh dien da su dung: \n");
    scanf("%d", &kwh); 
    for (int i = 0; i < n; i++) 
    { 
        if (bac[i] == 0) 
        {
            suDung = kwh;
        }
        else 
        {
            suDung = (kwh > bac[i]) ? bac[i] : kwh;
        }
        tien += suDung * gia[i];
        kwh -= suDung;
        if (kwh <= 0)
        {
            break;
        }
    }
    printf("So tien dien phai tra la: %.0f dong\n", tien);
}
void chucNangDoiTien()
{
    int tien, soLuong;
    int cacMenhGiaTien[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    system("cls");
    printf("Chuc Nang Doi Tien\n");
    printf("Nhap so tien can doi: \n");
    scanf("%d", &tien);
    printf("Cac menh gia tien:  \n");
    for (int i = 0; i < 9; i++) {
        if (tien >= cacMenhGiaTien[i])
        {
            soLuong = tien / cacMenhGiaTien[i]; //So to cua menh gia hien tao 
            tien = tien % cacMenhGiaTien[i];    //Con lai tien chua doi
            if (soLuong > 0)
            {
                printf("%d to %d\n", soLuong, cacMenhGiaTien[i]);
            }
        }
    }
}
void laiSuatNganHang()
{
    double tienVay, laiHangThang, gocHangThang, tienTraHangThang, duNo;
    double laiSuat = 0.05; //Lai suat 5% moi thang
    int thang = 12;
    system("cls");
    printf("Tinh Lai Suat Ngan Hang & Tra Gop\n");
    printf("Nhap so tien muon vay: \n");
    scanf("%lf", &tienVay);
    printf("So tien can tra trong 12 thang: \n");
    gocHangThang = tienVay / thang;   
    duNo = tienVay;
    printf("\n%-8s %-15s %-15s %-20s %-20s \n", "Ky han", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai"); 
    for (int i = 1; i <= thang; i++) 
    {
        laiHangThang = duNo * laiSuat;
        tienTraHangThang = gocHangThang + laiHangThang;
        printf("%-8d %-15.2f %-15.2f %-20.2f %-20.2f\n",
            i, laiHangThang, gocHangThang, tienTraHangThang, duNo - gocHangThang);
        duNo -= gocHangThang;
    }
}
void vayTienMuaXe()
{
    double tyLeVay, tongTienVay, tienTraTruoc, laiSuatThang, gocHangThang, duNo;
    double giaXe = 500000000;
    int thang = 24 * 12;
    double laiSuatNam = 7.2;
    double tongTienTra = 0;
    system("cls");
    printf("Chuong Trinh Vay Tien Mua Xe\n");
    printf("Nhap vao so phan tram vay toi da: \n");
    scanf("%lf", &tyLeVay);
    tongTienVay = giaXe * tyLeVay / 100.0;
    tienTraTruoc = giaXe - tongTienVay;
    laiSuatThang = laiSuatNam / 12 / 100.0;
    gocHangThang = tongTienVay / thang;
    duNo = tongTienVay;
    printf("\nSo tien phai tra lan dau: %.0f dong\n", tienTraTruoc);
    printf("So tien phai tra hang thang: \n");
    printf("%-6s %-15s %-15s %-15s %-15s\n", "Thang", "Du no dau", "Goc", "Lai", "Tong tra");
    for (int i = 1; i <= thang; i++) 
    {
        double laiHangThang = duNo * laiSuatThang;
        double tienTraHangThang = gocHangThang + laiHangThang;
        tongTienTra += tienTraHangThang;
        printf("%-6d %-15.0f %-15.0f %-15.0f %-15.0f\n",
            i, duNo, gocHangThang, laiHangThang, tienTraHangThang);
        duNo -= gocHangThang; // giam du no
    }
    //printf("\nTong tien tra sau %d thang/24 nam: %.0f dong\n", thang, tienTraTruoc + tongTienTra);
}
void sapXepThongTin()
{
    int n;
    char hoTen[100][30];
    float diem[100];
    char hocLuc[100][20];
    system("cls");
    printf("Sap Xep Diem Cua Hoc Sinh Theo Thu Tu Giam Dan\n");
    printf("Nhap so luong sinh vien: \n");
    scanf("%d", &n);
    getchar(); // loai bo newline

    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("Ho ten: \n");
        fgets(hoTen[i], sizeof(hoTen[i]), stdin); // standard input
        hoTen[i][strcspn(hoTen[i], "\n")] = 0;   // loai bo '\n'
        do
        {
            printf("Diem (0-10): ");
            scanf("%f", &diem[i]);
            getchar();
            if (diem[i] < 0 || diem[i] > 10)
                printf("Diem khong hop le! Vui long nhap lai (0-10).\n");
        } while (diem[i] < 0 || diem[i] > 10);
        if (diem[i] >= 9.0) strcpy(hocLuc[i], "Xuat sac");
        else if (diem[i] >= 8.0) strcpy(hocLuc[i], "Gioi");
        else if (diem[i] >= 6.5) strcpy(hocLuc[i], "Kha");
        else if (diem[i] >= 5.0) strcpy(hocLuc[i], "Trung binh");
        else strcpy(hocLuc[i], "Yeu");
    }
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (diem[i] < diem[j]) 
            {   // doi diem
                float tmpDiem = diem[i];
                diem[i] = diem[j];
                diem[j] = tmpDiem;
                // doi ten
                char tmpTen[50];
                strcpy(tmpTen, hoTen[i]);
                strcpy(hoTen[i], hoTen[j]);
                strcpy(hoTen[j], tmpTen);
                // doi hoc luc
                char tmpHocLuc[20];
                strcpy(tmpHocLuc, hocLuc[i]);
                strcpy(hocLuc[i], hocLuc[j]);
                strcpy(hocLuc[j], tmpHocLuc);
            }
        }
    }
    printf("\n%-5s %-25s %-10s %-15s\n", "STT", "Ho ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++) 
    {
        printf("%-5d %-25s %-10.2f %-15s\n", i + 1, hoTen[i], diem[i], hocLuc[i]);
    }
}
void xayDungGame()
{
    int a, b;     
    int x, y;   
    int dem = 0;

    do 
    {
        system("cls");
        printf("FPOLY-LOTT\n");
        printf("Nhap so thu 1 (1-15): \n");
        scanf("%d", &a);
        if (a < 1 || a > 15)
        {
            printf("So khong hop le! Vui long nhap lai (1-15).\n");
        }
    } while (a < 1 || a > 15);
    do 
    {
        printf("Nhap so thu 2 (1-15): ");
        scanf("%d", &b);
        if (b < 1 || b > 15)
        {
            printf("So khong hop le! Vui long nhap lai (1-15).\n");
        }
    } while (b < 1 || b > 15);
    x = rand() % 15 + 1;  //so ngau nhien tu 1-15
    y = rand() % 15 + 1;
    printf("\nSo trung thuong: %d  %d\n", x, y);
    if (a == x || a == y)
        dem++;
    if (b == x || b == y)
        dem++;
    if (dem == 0)
    {
        printf("Chuc ban may man lan sau!\n");
    }
    else if (dem == 1)
    {
        printf("Chuc mung ban da trung giai NHI!\n");
    }
    else
    {
        printf("Chuc mung ban da trung giai NHAT!\n");
    }
}
void tinhToanPhanSo()
{
    int tu1, mau1, tu2, mau2;
    int tongTu, tongMau;
    int hieuTu, hieuMau;
    int tichTu, tichMau;
    int thuongTu, thuongMau;
    int uocChung, tempA, tempB;
    system("cls");
    printf("Tinh Toan Phan So\n");
    printf("Nhap phan so thu 1 (tu/mau): \n");
    scanf("%d/%d", &tu1, &mau1);
    printf("Nhap phan so thu 2 (tu/mau): \n");
    scanf("%d/%d", &tu2, &mau2);
    tongTu = tu1 * mau2 + tu2 * mau1;
    tongMau = mau1 * mau2;
    tempA = tongTu;
    tempB = tongMau;
    while (tempB != 0) 
    {
        uocChung = tempA % tempB;
        tempA = tempB;
        tempB = uocChung;
    }
    tongTu /= tempA;
    tongMau /= tempA;
    hieuTu = tu1 * mau2 - tu2 * mau1;
    hieuMau = mau1 * mau2;
    tempA = hieuTu;
    tempB = hieuMau;
    if (tempA < 0) tempA = -tempA;
    while (tempB != 0) 
    {
        uocChung = tempA % tempB;
        tempA = tempB;
        tempB = uocChung;
    }
    hieuTu /= tempA;
    hieuMau /= tempA;
    tichTu = tu1 * tu2;
    tichMau = mau1 * mau2;
    tempA = tichTu;
    tempB = tichMau;
    while (tempB != 0) 
    {
        uocChung = tempA % tempB;
        tempA = tempB;
        tempB = uocChung;
    }
    tichTu /= tempA;
    tichMau /= tempA;
    thuongTu = tu1 * mau2;
    thuongMau = mau1 * tu2;
    tempA = thuongTu;
    tempB = thuongMau;
    if (tempA < 0) tempA = -tempA;
    while (tempB != 0) 
    {
        uocChung = tempA % tempB;
        tempA = tempB;
        tempB = uocChung;
    }
    thuongTu /= tempA;
    thuongMau /= tempA;
    printf("Tong: %d/%d\n", tongTu, tongMau);
    printf("Hieu: %d/%d\n", hieuTu, hieuMau);
    printf("Tich: %d/%d\n", tichTu, tichMau);
    printf("Thuong: %d/%d\n", thuongTu, thuongMau);
}
void lapChucNang(int chon)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chon)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            timUocChungBoiChung();
            break;
        case 3:
            tinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            chucNangDoiTien();
            break;
        case 6:
            laiSuatNganHang();
            break;
        case 7:
            vayTienMuaXe();
            break;
        case 8:
            sapXepThongTin();
            break;
        case 9:
            xayDungGame();
            break;
        case 10:
            tinhToanPhanSo();
            break;
        case 0:
            printf("Ket thuc chuong trinh\n");
            break;
        default:
            printf("Hay chon cac chuc nang tren Menu [0-10]\n");
            break;
        }

        printf("\n");
        printf("Ban co muon tiep tuc chuc nang: [1-Co] [Khac-Quay lai MENU]\n");
        scanf("%d", &tiepTuc);
    }
}
int main()
{
    int chon;
    do
    {
        system("cls");
        printf("        MENU\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung, boi chung\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang, tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10.Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang tren MENU\n");
        scanf("%d", &chon);
        lapChucNang(chon);
    } while (chon != 0);
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