/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49647]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][100];
    char temp[100];

    printf("Nhap 5 chuoi:\n");
    for(int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
        // Loại bỏ ký tự newline nếu có
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Sắp xếp các chuỗi theo thứ tự bảng chữ cái
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}