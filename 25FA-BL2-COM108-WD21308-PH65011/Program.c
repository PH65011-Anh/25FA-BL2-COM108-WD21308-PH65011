#include <stdio.h>
void kiemTraSoNguyen() 
{
    printf("Kiem tra so nguyen:   \n");
}
void uocChungBoiChung() 
{
    printf("Tim uoc chung & boi chung:   \n");
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            soPhanTu();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 0:
            return;
        default:
            printf("Hay chon cac chuc nang tren MENU: [0-10]");
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
        printf("1. Kiem Tra So Nguyen\n");
        printf("2. Tinh tb tong cac so chia het cho 3 \n");
        printf("3. CN3\n");
        printf("4. CN4\n");
        printf("5. CN5\n");
        printf("6. CN6\n");
        printf("7. CN7\n");
        printf("8. CN8\n");
        printf("9. CN9\n");
        printf("10. CN10\n");
        printf("0. Thoat\n");  
        printf("Hay chon CN tu [0-10]\n");
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