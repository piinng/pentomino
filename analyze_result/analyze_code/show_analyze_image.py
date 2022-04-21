import numpy as np
import cv2
size=200
mydata=[
    [9586,9459,11820,15766,14617,15826,17528,16710,14609,13913,8740,6024,8910],
[10052,8072,8214,8420,9045,8798,9446,9871,9984,4845,5264,4722,5262],
[9449,4869,2723,3329,2560,3210,2915,3316,4689,2181,2945,4880,5156],
[9964,7728,7426,7871,8893,9143,9931,9300,6528,8836,6241,4464,8760],
[8698,8079,10981,14820,15580,18497,15064,11363,9268,0,0,0,0]
    ]
photo=np.empty((5*size,13*size,3),np.uint8)
for i in range(0,5):
    for j in range(0,13):
        for m in range(size):
            for n in range(size):
                photo[i*size+m][j*size+n][0]=255-int(mydata[i][j]/200)
        for m in range(size):
            for n in range(size):
                photo[i*size+m][j*size+n][1]=255-int(mydata[i][j]/200)
        for m in range(size):
            for n in range(size):
                photo[i*size+m][j*size+n][2]=255
for i in range(4*size,5*size):
    for j in range(9*size,13*size):
        photo[i][j][0]=0
        photo[i][j][1]=0
        photo[i][j][2]=0
print(photo[0][0][0])
cv2.imshow("win",photo)

cv2.waitKey()