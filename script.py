print("Hello World!")

if 5 < 10 :
    print("Benar")
    print("Spasi")

if 5 < 10 :
 print("Yoiii")

# VARIABEL
x = 4
print(x)

y = float(3)
print(y)

namaBuah = ["nanas", "mangga", "apel"]
x, y, z = namaBuah
print(x)
print(y)
print(x,y,z)
print(x + y + z)

a = "Hari"
def myFunc() :
    a = "Sekarang"
    print(a + " Minggu")
myFunc()

# STRING
def stringA() :
    A = '''hari ini
        hari minggu
        tanggal 10
        Desember'''
    print(A)
stringA()

def stringB() :
    txt = "Hari ini hari minggu"
    if "hari" in txt :
        print("Benar")
stringB()

myName = str("Yuafiq Alfin {} status sebagai {}")
status = str("Pelajar")
age = int(20)

print(myName.format(age, status))

# QR code
import qrcode
import image
qr = qrcode.QRCode(
    version = 15, #versi dari qrcode, lebih besar angkanya gambar qr semakin kompleks
    box_size = 10, #ukuran QRcode nya
    border = 5 #ukuran border berwarna putih
)
data = "https://e-ipo.co.id/id/home"
qr.add_data(data)
qr.make(fit = True)
img = qr.make_image(fill="black", back_color="white")
img.save("QRCode.png")



