/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49647]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char correctUsername[] = "admin";
    char correctPassword[] = "123456";

    printf("Nhap username: ");
    scanf("%s", username);
    printf("Nhap password: ");
    scanf("%s", password);

    if(strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }

    return 0;
}