from functions import cal
# viet chua ham
# a, b, c, d = map(int, input().split())
# res1 = a + b
# res2 = c + d
# print(c)

# viet bang ham
# def add(x, y): #x, y: arguments
#     res = x + y #return tong
#     return res #int

a, b = map(int, input().split())
# res1 = add(a, b) #return int
# # res1 = add(a, b) #return res --> res1 = res
# res2 = add(c, d)
# print(res1)
# print(res2)

total, substr = cal(a, b)
print(f"total: {total} - substr: {substr}")

# x = 10

# def testGlobal():
#     global x
#     x = 20 #local
#     print(x+2)

# testGlobal()
# print(x*2)