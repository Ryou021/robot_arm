import tkinter
import math

#原点をx=50,y=370とする
origin_x=50
origin_y=370
# tk_x=arm_x+origin_x
# tk_y=origin_y-arm_y

arm_len1=61
arm_len2=150
#アーム座標から描画座標を求める
def draw_xaxis(arm_x):
    draw_x=arm_x+origin_x
    return draw_x
def draw_yaxis(arm_y):
    draw_y=origin_y-arm_y
    return draw_y
#描画座標からアーム座標を求める
def arm_xaxis(draw_x):
    arm_x=draw_x-origin_x
    return arm_x
def arm_yaxis(draw_y):
    arm_y=origin_y-draw_y
    return arm_y

root = tkinter.Tk()
root.geometry("640x400")
root.title("Robot Arm")
#アームの角度の0は水平にしゅる
#id7
arma_theta = 0
#id6
armb_theta = 0
#id4
armc_theta = 0

var1=tkinter.IntVar(master=root,value=100)
var2=tkinter.IntVar(master=root,value=0)

canvas = tkinter.Canvas(root, bg="white", height=400, width=640)

def update(a):
    joint2_x=var1.get()
    joint2_y=-1*var2.get()
    
    armb_theta =-1*math.degrees(-1*math.acos((arm_len1*arm_len1-arm_len2*arm_len2
                                        +joint2_x*joint2_x+joint2_y*joint2_y)
                                       /(2*arm_len1*math.sqrt(abs(joint2_x*joint2_x+joint2_y*joint2_y))))
                             +math.atan(joint2_y/joint2_x))
    
    
    canvas.create_rectangle(0, 0, 640, 400, fill = 'white')
    canvas.create_oval(draw_xaxis(0)-211,draw_yaxis(125)-211,draw_xaxis(0)+211,draw_yaxis(125)+211,fill = 'pink')
    canvas.create_oval(draw_xaxis(0)-89,draw_yaxis(125)-89,draw_xaxis(0)+89,draw_yaxis(125)+89,fill = 'white')
    
    #真ん中で区切る線
    canvas.create_line(320,0,320,400, fill='black')
    #地面
    canvas.create_rectangle(0, 370, 320, 400, fill = 'brown')
    #ロボットアーム土台
    canvas.create_rectangle(10, 320, 90, 370, fill = 'red')
    canvas.create_rectangle(40, 245, 60, 320, fill = 'blue')

    joint1_x=draw_xaxis(arm_len1*math.cos(math.radians(armb_theta)))
    joint1_y=draw_yaxis(arm_len1*math.sin(math.radians(armb_theta))+125)
#      joint2_x=draw_xaxis(arm_len1*math.cos(math.radians(armb_theta)))+arm_len2*math.cos(math.radians(-armc_theta-armb_theta))
#      joint2_y=draw_yaxis(arm_len1*math.sin(math.radians(armb_theta))+125)+arm_len2*math.sin(math.radians(-armc_theta-armb_theta))
    
    joint2_x=joint2_x+50
    joint2_y=joint2_y+draw_yaxis(125)
    
    #アーム1
    canvas.create_line(draw_xaxis(0),draw_yaxis(125),joint1_x,joint1_y, fill='gray', width=5)
    #アーム2
    canvas.create_line(joint1_x,joint1_y,joint2_x,joint2_y, fill='gray', width=5)

    #ロボットアームの第一関節
    canvas.create_oval(draw_xaxis(0)-5, draw_yaxis(125)-5,
                       draw_xaxis(0)+5, draw_yaxis(125)+5,fill = 'green')
    #ロボットアームの第二関節
    canvas.create_oval(joint1_x-5,joint1_y-5,joint1_x+5,joint1_y+5,fill = 'green')
    #ロボットアームの第三関節(実質ペン先)
    canvas.create_oval(joint2_x-5,joint2_y-5,joint2_x+5,joint2_y+5,fill = 'green')

    joint2_x=arm_xaxis(joint2_x)
    joint2_y=arm_yaxis(joint2_y)

    print("アーム先端の座標")
    print("x座標：",joint2_x)
    print("y座標：",joint2_y)
    print("Servo6の角度",armb_theta)
    print("Servo4の角度",math.degrees(math.atan2(joint2_y-joint1_y,joint2_x-joint1_x)))

s1 = tkinter.Scale(root,orient='h',variable=var1,from_=0,
                   to=211,length=160,command=update)
s1.place(x=350, y=30)
s2 = tkinter.Scale(root,orient='v',variable=var2,from_=211,
                   to=-211,length=160,command=update)
s2.place(x=350, y=100)

update(0)
canvas.pack()
root.mainloop()

