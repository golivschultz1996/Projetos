import cv2
import numpy as np



# Inciciações 

fileName='/home/rafael/Projeto FInal PDI - GABRIEL/short_video.mp4' # Video a ser lido
cap = cv2.VideoCapture(fileName) # Abertura de arquivo
filename2="/home/rafael/Projeto FInal PDI - GABRIEL/Resultado.mp4"
writer = cv2.VideoWriter(filename2, cv2.VideoWriter_fourcc(*'mp4v'), 20,(800,600)) 
elk  = 28
clo = 23
blu  = 21
thr = 124

########################### FUnções

def contagem(img_2):
    rr = []
    fator = 400
    cont = 0
    while fator>=350:
        pixel = img_2[350:470,fator]
        media = pixel.mean()
        if media==255:
            rr.append(fator)
            
        # if contador==3:
        #     rr.append(fator)
        #     fator = fator - 50
        #     contador = 0
            

        fator = fator -1
    array = np.array(rr)
    media = cv2.mean(array)
    media = np.array(media)
    primeiro =media[0]

    return primeiro

def processamento(img,elk,clo,blu,thr):
    retangulo = 0
    copia_image  = img.copy()
    elKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (elk,elk))
    closingKernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (clo,clo))
    blur = cv2.blur(img, (blu,blu))
    gray = cv2.cvtColor(blur, cv2.COLOR_BGR2GRAY)
    _, thresh = cv2.threshold(gray, thr, 255, cv2.THRESH_BINARY_INV)
    imagem = cv2.bitwise_not(thresh)
    opening = cv2.morphologyEx(imagem, cv2.MORPH_OPEN, elKernel)
    closing = cv2.morphologyEx(opening, cv2.MORPH_CLOSE, closingKernel)
    imagem2 = cv2.bitwise_not(opening)
    opening2 = cv2.morphologyEx(imagem2, cv2.MORPH_OPEN, elKernel)
    closing = cv2.morphologyEx(opening2, cv2.MORPH_CLOSE, closingKernel)
    new_image = int(contagem(closing))
    retangulo = cv2.rectangle(copia_image,(100,new_image), (650,new_image-50),(0,255,0),5)

    return retangulo

sum = 0
while(cap.isOpened()):                    
    ret, frame = cap.read()
    if ret==True:
        # Diminui a imagem
        novovai = cv2.resize(frame, (800,600))
        # Inicia o processamento com os parametros escolhidos             
        imagine = processamento(novovai,elk, clo,blu,thr)
        # Printa soma              
        print("sum is {}".format(sum))             
        sum =sum + 1
        # MOstra na tela
        cv2.imshow('frame',imagine)    
        # Grava 
        writer.write(imagine)                
        if cv2.waitKey(1) & 0xFF == ord('q'):  # press q to quit
            break
    else:
        break     

cap.release() 
cv2.destroyAllWindows