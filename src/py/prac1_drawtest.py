import tkinter
import math

arma=61
armb=150

armc_theta = float(input("Servo7の角度=>"))+90
arma_theta = -1*float(input("Servo6の角度=>"))+180
armb_theta = -1*float(input("Servo5の角度=>"))+arma_theta


root = tkinter.Tk()
root.geometry("640x480")
root.title("Let's Use a Canvvas")

canvas = tkinter.Canvas(root, bg="white", height=480, width=640)
        
canvas.create_rectangle(10, 420, 90, 470, fill = 'red')
canvas.create_rectangle(40, 345, 60, 420, fill = 'blue')
canvas.create_rectangle(10, 60, 90, 140, fill = 'red')
canvas.create_rectangle(40, 90, 60, 110, fill = 'blue')
#armaの頂点は正面50,345、平面50,100
#正面アームA
canvas.create_line(50, 345, 50+int(arma*math.sin(math.radians(arma_theta))),
                   345+int(arma*math.cos(math.radians(armc_theta))), fill='black')
#平面アームA
canvas.create_line(50, 100, 50+int(arma*math.sin(math.radians(arma_theta))),
                   100+int(arma*math.cos(math.radians(armc_theta))), fill='black')

#正面アームB
canvas.create_line(50+int(arma*math.sin(math.radians(arma_theta))),
                   345+int(arma*math.cos(math.radians(arma_theta))),
                   50+int(arma*math.sin(math.radians(arma_theta)))
                   +int(armb*math.sin(math.radians(armb_theta))),
                   345+int(arma*math.cos(math.radians(arma_theta)))
                   +int(armb*math.cos(math.radians(armb_theta))), fill='black')
#平面アームB
canvas.create_line(50+int(arma*math.sin(math.radians(arma_theta))),
                   100+int(arma*math.cos(math.radians(armc_theta))),
                   50+int(arma*math.sin(math.radians(arma_theta)))
                   +int(armb*math.sin(math.radians(armb_theta))),
                   100+int(arma*math.cos(math.radians(armc_theta)))
                   +int(armb*math.cos(math.radians(armb_theta))),fill='black')

print("x座標=>",50+int(arma*math.sin(math.radians(arma_theta)))+int(armb*math.sin(math.radians(armb_theta))))
print("y座標=>",345+int(arma*math.cos(math.radians(arma_theta)))+int(armb*math.cos(math.radians(armb_theta))))

canvas.pack()
