import cv2
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
from tqdm import * 
import PIL


fileName='/home/rafael/Projeto FInal PDI - GABRIEL/short_video.mp4'  # change the file name if needed

cap = cv2.VideoCapture(fileName)          # load the video

fileName='/home/rafael/Projeto FInal PDI - GABRIEL/Essevai.mp4'  # change the file name if needed
imgSize=(int(cap.get(3)),int(cap.get(4)))
frame_per_second=40
writer = cv2.VideoWriter(fileName, cv2.VideoWriter_fourcc(*'mp4v'), frame_per_second,imgSize)
valor = 15
fator = 26
elk = 29
clo = 6
valor1 = 89
valor2 = 116
valor3 = 1
valor4 = 226
valor5 = 73
valor6 =55
valor7 = 23
elKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (elk,elk))
closingKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (clo,clo))




numFeatures = 1


def display_lines(image,lines):
    line_image = np.zeros_like(image)
    if lines is not None:
        for line in lines:
            x1,y1,x2,y2 = line.reshape(4)
            cv2.line(line_image,(x1,y1),(x2,y2),(0,255,0),23)
    
    return line_image 
def make_coordinates(image,line_parameters):
    slope,intercept = line_parameters
    try:
        y1 = image.shape[0]
    except:
        y1 = 1
    y2 = int(y1*(3/5))
    x1 = int((y1 - intercept)/slope)
    x2 = int((y2 - intercept)/slope)
    return np.array([x1,y1,x2,y2])
def processamento(img):
    newimage = img.copy()
    blur = cv2.blur(img,(fator,fator))
    

    elKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (elk,elk))
    closingKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (clo,clo))
    
    gradient = cv2.morphologyEx(blur, cv2.MORPH_GRADIENT, elKernel)
    gradient = cv2.cvtColor(gradient, cv2.COLOR_BGR2GRAY)
    otsu = cv2.threshold(gradient, 0, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)[1]
    close = cv2.morphologyEx(otsu, cv2.MORPH_CLOSE, closingKernel)
    eroded = cv2.erode(close, None, iterations=valor)

    
    novo = cv2.cvtColor(eroded, cv2.COLOR_GRAY2BGR)
    edges = cv2.Canny(novo,valor1,valor2)
    lines = cv2.HoughLinesP(edges,2,np.pi/180,100,minLineLength = 20, maxLineGap=5)
    if lines is not None:
        for line in lines:
            x1,y1,x2,y2=line[0]
            cv2.line(frame,(x1,y1),(x2,y2),(0,255,0),valor7)
    left_fit = []
    right_fit = []
    for line in lines:
        x1,y1,x2,y2 = line.reshape(4)
        parameters = np.polyfit((x1,x2), (y1,y2),1)
        slope = parameters[0]
        intercept = parameters[1]
        if slope <0:
            left_fit.append((slope,intercept))
        else:
            right_fit.append((slope,intercept))
    left_fit_average = np.average(left_fit,axis=0)
    right_fit_average = np.average(right_fit,axis = 0)
    try:
        left_line = make_coordinates(newimage, left_fit_average)
    except:
        left_line = np.array([112,960,303,576])
    
    try:
        right_line = make_coordinates(newimage,right_fit_average)
        
    except:
        right_line = np.array([1046,960,895,576])

    
    try:
        averaged_lines = np.array([left_line,right_line])
        
    except: 
        averaged_lines = np.array([[113,960,302,576,1033,960,883,576]])
    line_image = display_lines(newimage,averaged_lines)
    

    combo_image = cv2.addWeighted(newimage, 0.8, line_image,1,1)

    return combo_image
sum = 0
while(cap.isOpened()):                    
    ret, frame = cap.read()
    if ret==True:
        
        
        img = processamento(frame)
        #print(img)
        print("sum is {}".format(sum))
        
        sum =sum + 1
        cv2.imshow('frame',img)
        writer.write(img)
        #cv2.imshow('Canny',img)
        if cv2.waitKey(1) & 0xFF == ord('q'):  # press q to quit
            break
                     
        
            
    else:
        break

print('FIM')     
cap.release()
cv2.destroyAllWindows()