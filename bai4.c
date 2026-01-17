/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void kiemTraHocLuc()
{
    // Khai báo biến
    float diem = 0.00;

    // Nhập dữ liệu
    printf("Nhập điểm: ");
    scanf("%f", &diem);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (diem <= 0)
    {
        printf("Diem khong hop le");
    }
    else if (diem >= 9 && diem <= 10)
    {
        printf("Hoc sinh xuat sac");
    }
    else if (diem >= 8 && diem < 9)
    {
        printf("Hoc sinh gioi");
    }
    else if (diem >= 6.5 && diem < 8)
    {
        printf("Hoc sinh kha");
    }
    else if (diem >= 5 && diem < 6.5)
    {
        printf("Hoc sinh trung binh");
    }
    else if (diem >= 3.5 && diem < 5)
    {
        printf("Hoc sinh yeu");
    }
    else
    {
        printf("Hoc sinh kem");
    }
}

void phuongTrinhBac1()
{
    // Khai báo biến
    float a, b, x = 0;

    // Nhập dữ liệu
    printf("Nhap bien a: ");
    scanf("%f", &a);

    printf("Nhap bien b: ");
    scanf("%f", &b);

    // Xử lý, tính toán VÀ Hiển thị kết
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh %.2fx + %.2f = 0 vo so nghiem", a, b);
        }
        else
        {
            printf("Phuong trinh %.2fx + %.2f = 0 vo nghiem", a, b);
        }
    }
    else
    {
        x = (-b) / a;
        printf("Nghiem cua %.2fx + %.2f = 0 la: %.2f", a, b, x);
    }
}

void phuongTrinhBac2()
{
    // Khai báo biến
    float a, b, c, x, delta = 0.00;
    // Nhập dữ liệu
    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap c: ");
    scanf("%f", &c);
    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh %.2fx*x + %.2fx + %.2f vo so nghiem", a, b, c);
            }
            else
            {
                printf("Phuong trinh %.2fx*x + %.2fx + %.2f vo nghiem", a, b, c);
            }
        }
        else
        {
            x = (-c) / b;
            printf("Nghiem cua phuong trinh %.2fx*x + %.2fx + %.2f la: %.2f", a, b, c, x);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        printf("Gia tri cua delta: %.2f\n", delta);
        if (delta == 0)
        {
            x = -b / (2 * a);
            printf("Nghiem cua phuong trinh %.2fx*x + %.2fx + %.2f la: %.2f", a, b, c, x);
        }
        else if (delta > 0)
        {
            printf("Phuong trinh %.2fx*x + %.2fx + %.2f co 2 nghiem la: \n", a, b, c);
            x = (-b + sqrt(delta)) / (2 * a);
            printf("Nghiem x1: %.2f\n", x);
            x = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem x2: %.2f\n", x);
        }
        else
        {
            printf("Phuong trinh %.2fx*x + %.2fx + %.2f vo nghiem", a, b, c);
        }
    }
}

void tinhTienDien()
{
    // Khai báo biến
    unsigned int tongSoDienMotThang, giaTienDien, giaTienDienSauThue = 0;

    // Nhập dữ liệu
    printf("Nhap vao so dien tieu thu hang thang: ");
    scanf("%d", &tongSoDienMotThang);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (tongSoDienMotThang < 51)
    {
        giaTienDien = tongSoDienMotThang * 1984;
    }
    else if (tongSoDienMotThang >= 51 && tongSoDienMotThang < 101)
    {
        giaTienDien = 50 * 1984 + (tongSoDienMotThang - 50) * 2050;
    }
    else if (tongSoDienMotThang >= 101 && tongSoDienMotThang < 201)
    {
        giaTienDien = 50 * 1984 + 50 * 2050 + (tongSoDienMotThang - 50 * 2) * 2380;
    }
    else if (tongSoDienMotThang >= 201 && tongSoDienMotThang < 301)
    {
        giaTienDien = 50 * 1984 + 50 * 2050 + 50 * 2380 + (tongSoDienMotThang - 50 * 3) * 2998;
    }
    else if (tongSoDienMotThang >= 301 && tongSoDienMotThang < 401)
    {
        giaTienDien = 50 * 1984 + 50 * 2050 + 50 * 2380 + 50 * 2998 + (tongSoDienMotThang - 50 * 4) * 3350;
    }
    else
    {
        giaTienDien = 50 * 1984 + 50 * 2050 + 50 * 2380 + 50 * 2998 + 50 * 3350 + (tongSoDienMotThang - 50 * 5) * 3460;
    }

    giaTienDienSauThue = giaTienDien + (giaTienDien * 8 / 100);
    printf("Tien dien hang thang phai tra la: %d VND", giaTienDienSauThue);
}

int main()
{

    // Khai báo biến
    int a = 0;
    // Nhập dữ liệu

    // Xử lý, tính toán VÀ Hiển thị kết quả
    while (true)
    {
        printf("\n1. Kiểm tra học lực\n"
               "2. Giải phương trình bậc 1\n"
               "3. Giải phương trình bậc 2\n"
               "4. Tính tiền điện\n"
               "0. Thoát chương trình\n");

        printf("Mời nhập chức năng theo số thứ tự: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            kiemTraHocLuc();
            break;

        case 2:
            phuongTrinhBac1();
            break;

        case 3:
            phuongTrinhBac2();
            break;

        case 4:
            tinhTienDien();
            break;

        case 0:
            return 0;
        }
    }
}
