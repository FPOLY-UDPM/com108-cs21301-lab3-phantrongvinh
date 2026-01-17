/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
// Input: Nhập vào điểm của sinh viên (0-10)
// Output: Hiển thị ra màn hình học lực của sinh viên
// Biết rằng:
// Học lực xuất sắc: Điểm >= 9
// Học lực giỏi: 9 > điểm >= 8
// Học lực khá: 8 > điểm >= 6.5
// Học lực trung bình: 6.5 > điểm >= 5
// Học lực yếu: 5 > điểm >= 3.5
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main()
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

    return 0;
}