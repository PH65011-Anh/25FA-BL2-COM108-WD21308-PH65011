#include <stdio.h>
#include <string.h>
void kiemTraSoNguyen()
{
    printf("Kiem tra so nguyen:   \n");
}
void uocChungBoiChung()
{
    printf("Tim uoc chung & boi chung:   \n");
}
void sapXepPhanTuMang1Chieu()
{
    int intergerArray[100];
    int i;
    int tmp; //temperary
    int length;
    printf("Nhap so luong phan tu cua Mang:   \n");
    scanf("%d", &length);
    printf("Nhap du lieu mang %d phan tu:   \n", length);
    for (i = 0; i < length; i++)
    {
        printf("mang[%d] = ", i);
        scanf("%d", &intergerArray[i]);
    }
    printf("Sap xep du lieu mang %d phan tu:   \n", length);
    for (i = 0; i < length - 1; i++)
    {
        if (intergerArray[i] > intergerArray[i + 1])
        {
            tmp = intergerArray[i];
            intergerArray[i] = intergerArray[i + 1];
            intergerArray[i + 1] = tmp;
            i = -1;
        }
    }
    printf("Xuat mang du lieu %d phan tu Giam dan:   \n", length);
    for (i = length - 1; i > -1; i--)
    {
        printf("mang[%d] = %d\n", i, intergerArray[i]);
    }
    printf("Xuat mang du lieu %d phan tu Tang dan:   \n", length);
    for (i = 0; i < length; i++)
    {
        printf("mang[%d] = %d\n", i, intergerArray[i]);
    }

}
void demoMang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", array[i][j]);
         
        }
        printf("\n");
    }

}
void demoString()
{
    /*string - "string.h"
    char mangKyTu[10] = { 'A', 'n', 'h' };*/
    char mangKyTu[50];
    /*for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &mangKyTu[i]);
        if (mangKyTu[i] == '.')
        {
            break;
        }
    }*/
    //fgets(mangKyTu);
    while (getchar() != '\n');
    printf("Nhap du lieu: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);
    /*for (int i = 0; i < 10; i++)
    {
        printf("%c", mangKyTu[i]);
    }*/
    printf("%s", mangKyTu);
    printf("\n");
    //puts(mangKyTu);
    printf("String Length :");    
    printf("%d", strlen(mangKyTu)-1);
    printf("\n");
    //printf("String Compare The Same As :"); // so sanh
    //printf("%d", strcmp("ABC","ABC"));   
    //printf("\n");
    //printf("String Compare Less:");
    //printf("%d", strcmp("A","C"));
    //printf("\n");
    //printf("String Compare Greater than :");
    //printf("%d", strcmp("C","A"));
    printf("String Reverse (Encryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Reverse (Decryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Lower: ");
    printf("%s", strlwr (mangKyTu));
    printf("\n");
    printf("String Uper: ");
    printf("%s", strupr(mangKyTu));
    printf("\n");
    printf("Find String in String: ");
    if (strstr(mangKyTu, "A") != NULL)
    {
        printf("Found:\n");
        printf("%s", strstr(mangKyTu, "A"));
    }
    else
    {
        printf("NOT FOUND\n");
    }
    
    printf("\n");
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
            uocChungBoiChung();
            break;
        case 3:
            sapXepPhanTuMang1Chieu();
            break;
        case 4:
            demoMang2Chieu();
            break;
        case 5:    
            demoString();
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
        printf("2. Uoc Chung & Boi Chung \n");
        printf("3. Sap xep mang 1 chieu\n");
        printf("4. Demo Mang 2 Chieu\n");
        printf("5. Demo String\n");
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