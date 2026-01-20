/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH
// 2.2 BẬC 2
// Phương trình có dạng: ax2 + bx + c = 0
// Input: Nhập vào từ bàn phím: a, b, c
// Output: Nghiệm của phương trình
// Biết rằng:
// Nếu a == 0, phương trình thành bx + c = 0
// Ngược lại nếu a != 0
//  Tính delta
//  Nếu delta < 0: Phương trình vô nghiệm
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a)
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt
// o X1 = (-b + căn(delta))/(2*a)
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>

int main()
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
    return 0;
}