'''
1. Khởi tạo 1 chương trình
2. Biến, cách đọc input, xuất output (console)

Nhập vào 2 số nguyên a, b, tính tổng và xuất ra màn hình
'''
# a = int(input()) # đọc dữ liệu trên 1 dòng và nhận vào là chuỗi
# b = int(input())
a, b = map(int, input().split()) # "2,3" object.function()

c = a + b
print(c)

