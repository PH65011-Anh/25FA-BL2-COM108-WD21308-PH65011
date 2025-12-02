// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen()
{
    int soNguyen;
    int i;
    int chon1 = 1;
    while (chon1 == 1)

    {
        system("cls"); //clear screen
        printf("\n");
        printf("Kiem tra so Nguyen"); printf("\n");
        printf("\n");
        printf("Moi nhap so Nguyen bat ky:  ");
        scanf("%d", &soNguyen);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon1);
    }


}
void timUocChungBoiChung()
{
    const float pi = 3.1415;
    double banKinh;
    double chuVi1;
    double dienTich1;
    int chon2 = 1;
    while (chon2 == 1)
    {
        system("cls"); //clear screen
        printf("\n");
        printf("Nhap  ");
        scanf("%lf", &banKinh);
        chuVi1 = 2 * pi * banKinh;
        dienTich1 = pi * pow(banKinh, 2);
        printf("ChuVi: 2 * 3.1415 * %lf = %.2lf\n", banKinh, chuVi1);
        printf("DienTich: 3.1415 * %lf^2 = %.2lf\n", banKinh, dienTich1);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon2);
    }
}
void tinhTienKaraoke()
{
    double soThuc3;
    double soThuc4;
    double chuVi;
    double dienTich;
    int chon3 = 1;
    while (chon3 == 1)
    {
        system("cls"); //clear screen
        printf("\n");
        printf("Moi nhap Chieu dai hcn:  ");
        scanf("%lf", &soThuc3);
        printf("Moi nhap Chieu rong hcn:  ");
        scanf("%lf", &soThuc4);
        chuVi = 2 * (soThuc3 + soThuc4);
        dienTich = soThuc3 * soThuc4;
        printf("ChuViHcn: 2 * (%lf + %lf) = %.2lf\n", soThuc3, soThuc4, chuVi);
        printf("DienTichHcn: %lf * %lf = %.2lf\n", soThuc3, soThuc4, dienTich);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon3);
    }
}
void tinhTienDien() {
    double soBiChia, soChia, thuong;
    int chon4 = 1;
    while (chon4 == 1)
    {
        system("cls"); //clear screen
        printf("\n");
        printf("Xin moi nhap So bi chia:  ");
        scanf("%lf", &soBiChia);
        printf("Xin moi nhap So chia:  ");
        scanf("%lf", &soChia);
        if (soChia == 0)
        {
            printf("so chia phai khac 0\n");
        }
        else if (soBiChia == 0 && soChia != 0)
        {
            printf("0");
        }
        else if (soChia == 1)
        {
            printf("%lf", soBiChia);
        }
        else
        {
            thuong = soBiChia / soChia;
            printf("Thuong: %lf / %lf = %.2lf\n", soBiChia, soChia, thuong);
        }
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon4);
    }
}
void chucNangDoiTien()
{
    int soBatKi, soDu;
    int chon5 = 1;
    while (chon5 == 1)
    {
        system("cls"); //clear screen
        printf("\n");
        printf("Moi nhap So bat ki:  ");
        scanf("%d", &soBatKi);
        soDu = soBatKi % 2;
        if (soDu == 0)
        {
            printf("so chan\n");
        }
        else
        {
            printf("so le\n");
        }
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon5);
    }

}
void laiSuatNganHang()
{
    double soThuc;
    double soThuc2;
    double tong, hieu, thuong, tich;
    int i;
    int chon1 = 1;
    while (chon1 == 1)

    {
        system("cls"); //clear screen
        printf("\n");
        printf("Phep tinh co ban"); printf("\n");
        printf("\n");
        printf("Moi nhap So thu nhat:  ");
        scanf("%lf", &soThuc);
        printf("Moi nhap So thu hai:  ");
        scanf("%lf", &soThuc2);
        tong = soThuc + soThuc2;
        hieu = soThuc - soThuc2;
        thuong = soThuc / soThuc2;
        tich = soThuc * soThuc2;
        printf("Tong: %lf + %lf = %.2lf\n", soThuc, soThuc2, tong);
        printf("Hieu: % lf - % lf = % .2lf\n", soThuc, soThuc2, hieu);
        printf("Thuong: %lf / %lf = %.2lf\n", soThuc, soThuc2, thuong);
        printf("Tich: %lf * %lf = %.2lf\n", soThuc, soThuc2, tich);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon1);
    }


}
void vayTienMuaXe()
{
    double soThuc;
    double soThuc2;
    double tong, hieu, thuong, tich;
    int i;
    int chon1 = 1;
    while (chon1 == 1)

    {
        system("cls"); //clear screen
        printf("\n");
        printf("Phep tinh co ban"); printf("\n");
        printf("\n");
        printf("Moi nhap So thu nhat:  ");
        scanf("%lf", &soThuc);
        printf("Moi nhap So thu hai:  ");
        scanf("%lf", &soThuc2);
        tong = soThuc + soThuc2;
        hieu = soThuc - soThuc2;
        thuong = soThuc / soThuc2;
        tich = soThuc * soThuc2;
        printf("Tong: %lf + %lf = %.2lf\n", soThuc, soThuc2, tong);
        printf("Hieu: % lf - % lf = % .2lf\n", soThuc, soThuc2, hieu);
        printf("Thuong: %lf / %lf = %.2lf\n", soThuc, soThuc2, thuong);
        printf("Tich: %lf * %lf = %.2lf\n", soThuc, soThuc2, tich);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon1);
    }


}
void sapXepThongTin()
{
    double soThuc;
    double soThuc2;
    double tong, hieu, thuong, tich;
    int i;
    int chon1 = 1;
    while (chon1 == 1)

    {
        system("cls"); //clear screen
        printf("\n");
        printf("Phep tinh co ban"); printf("\n");
        printf("\n");
        printf("Moi nhap So thu nhat:  ");
        scanf("%lf", &soThuc);
        printf("Moi nhap So thu hai:  ");
        scanf("%lf", &soThuc2);
        tong = soThuc + soThuc2;
        hieu = soThuc - soThuc2;
        thuong = soThuc / soThuc2;
        tich = soThuc * soThuc2;
        printf("Tong: %lf + %lf = %.2lf\n", soThuc, soThuc2, tong);
        printf("Hieu: % lf - % lf = % .2lf\n", soThuc, soThuc2, hieu);
        printf("Thuong: %lf / %lf = %.2lf\n", soThuc, soThuc2, thuong);
        printf("Tich: %lf * %lf = %.2lf\n", soThuc, soThuc2, tich);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon1);
    }


}
void xayDungGame()
{
    double soThuc;
    double soThuc2;
    double tong, hieu, thuong, tich;
    int i;
    int chon1 = 1;
    while (chon1 == 1)

    {
        system("cls"); //clear screen
        printf("\n");
        printf("Phep tinh co ban"); printf("\n");
        printf("\n");
        printf("Moi nhap So thu nhat:  ");
        scanf("%lf", &soThuc);
        printf("Moi nhap So thu hai:  ");
        scanf("%lf", &soThuc2);
        tong = soThuc + soThuc2;
        hieu = soThuc - soThuc2;
        thuong = soThuc / soThuc2;
        tich = soThuc * soThuc2;
        printf("Tong: %lf + %lf = %.2lf\n", soThuc, soThuc2, tong);
        printf("Hieu: % lf - % lf = % .2lf\n", soThuc, soThuc2, hieu);
        printf("Thuong: %lf / %lf = %.2lf\n", soThuc, soThuc2, thuong);
        printf("Tich: %lf * %lf = %.2lf\n", soThuc, soThuc2, tich);
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon1);
    }


}
void tinhToanPhanSo()
{
    float a, b, c;
    float delta, canDelta, x1, x2;
    int chon6 = 1;
    while (chon6 == 1)
    {
        system("cls"); //clear screen
        printf("\n");
        printf("Giai phuong trinh bac 2\n");
        printf("Moi nhap a:  ");
        scanf("%f", &a);
        printf("Moi nhap b:  ");
        scanf("%f", &b);
        printf("Moi nhap c:  ");
        scanf("%f", &c);
        printf("PT co dang: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
        if (a == 0)
        {
            printf("Phuong trinh thanh bx + c = 0");

        }
        else // a != 0
        {
            delta = pow(b, 2) - 4 * a * c;
            printf("Delta = %f^2 - 4x%fx%f = %f\n", b, a, c, delta);

            if (delta > 0)
            {
                canDelta = sqrt(delta);
                printf("CanDelta = can(%f) = %f\n", delta, canDelta);
                x1 = (-b + canDelta) / (2 * a);
                x2 = (-b - canDelta) / (2 * a);
                printf("Phuong trinh co 2 nghiem phan biet:\n");

                if (x1 == (int)x1 && x2 == (int)x2)
                {
                    printf("x1 = %f\n", x1);
                    printf("x2 = %f\n", x2);
                }
                else
                {
                    if (x1 == (int)x1)
                    {
                        printf("x1 = %f\n", x1);
                        printf("x2 = %f\n", x2);
                    }
                    else
                    {
                        printf("x1 = (-%f + %f) / (2+%f)\n", b, canDelta, a);
                    }
                    if (x2 == (int)x2)
                    {
                        printf("x1 = %f\n", x1);
                        printf("x2 = %f\n", x2);
                    }
                    else
                    {
                        printf("x2 = (-%f - %f) / (2+%f)\n", b, canDelta, a);
                    }
                }
            }
            else if (delta == 0)
            {
                x1 = -b / (2 * a);
                printf("Phuong trinh co nghiem kep\n");
                printf("x = %f\n", x1);
            }
            else //delta < 0
            {
                printf("Phuong trinh vo nghiem\n");
            }


        }
        printf("Ban co muon tiep tuc tinh toan: [1-Co] [Khac-Quay lai menu]\n");
        scanf("%d", &chon6);

    }
}

int main()
{
    int chon;
    do
    {

        printf("        MENU\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung, boi chung\n");
        printf("3. Tinh tien Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang Doi tien\n");
        printf("6. Tinh lai suat ngan hang, tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10.Chuong trinh tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang tren MENU\n");
        scanf("%d", &chon);
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