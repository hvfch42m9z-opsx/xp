
name = "xp"
postall = 123456
age = input("name?")
agd = input("pkkk")
if age == name:
    print("名称对")
    if agd == postall:
        print("密码对")
    elif agd != postall:
        print("密码错")
elif age != name:
    print("名称错")