/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN
//  Input: Nhập vào số điện tiêu thụ hàng tháng
//  Output: Hiển thị số tiền cần phải đóng

#include <stdio.h>

int main()
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

    return 0;
}