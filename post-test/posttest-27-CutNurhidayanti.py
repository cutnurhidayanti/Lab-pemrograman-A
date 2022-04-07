batasbawah=input("batas bawah :")  
batasbawah=int(batasbawah) 
batasatas=input("batas atas :")
batasatas=int(batasatas)

for i in range (batasbawah, batasatas+1,1):
    if i==1:
        continue;
    elif i==2:
        print(i)
    if i %2==1 and i%i==0:
        print(i)