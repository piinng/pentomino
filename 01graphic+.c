#include<stdio.h>
char day[6][13];
void resetDay(){
    for(int i=0;i<6;i++){
        for(int j=0;j<13;j++){
            day[i][j] = '0';
        }
    }
};
void printDay(){
    for(int i=0;i<6;i++){
        for(int j=0;j<13;j++){
            printf("%c, ",day[i][j]);
        }
        printf("\n");
    }
};
void X(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+1] = 'X';
        day[y+1][x+0] = 'X';
        day[y+1][x+1] = 'X';
        day[y+2][x+1] = 'X';
        day[y+1][x+2] = 'X';
    }
};
void I(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'I';
        day[y+0][x+1] = 'I';
        day[y+0][x+2] = 'I';
        day[y+0][x+3] = 'I';
        day[y+0][x+4] = 'I';
    }else if(dir==1){
        day[y+0][x+0] = 'I';
        day[y+1][x+0] = 'I';
        day[y+2][x+0] = 'I';
        day[y+3][x+0] = 'I';
        day[y+4][x+0] = 'I';
    }
};
void T(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'T';
        day[y+0][x+1] = 'T';
        day[y+0][x+2] = 'T';
        day[y+1][x+1] = 'T';
        day[y+2][x+1] = 'T';
    }else if(dir==1){
        day[y+0][x+0] = 'T';
        day[y+1][x+0] = 'T';
        day[y+2][x+0] = 'T';
        day[y+1][x+1] = 'T';
        day[y+1][x+2] = 'T';
    }else if(dir==2){
        day[y+2][x+0] = 'T';
        day[y+2][x+1] = 'T';
        day[y+2][x+2] = 'T';
        day[y+0][x+1] = 'T';
        day[y+1][x+1] = 'T';
    }else if(dir==3){
        day[y+0][x+2] = 'T';
        day[y+1][x+0] = 'T';
        day[y+1][x+1] = 'T';
        day[y+1][x+2] = 'T';
        day[y+2][x+2] = 'T';
    }
};
void U(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'U';
        day[y+1][x+0] = 'U';
        day[y+1][x+1] = 'U';
        day[y+1][x+2] = 'U';
        day[y+0][x+2] = 'U';
    }else if(dir==1){
        day[y+0][x+0] = 'U';
        day[y+2][x+0] = 'U';
        day[y+0][x+1] = 'U';
        day[y+1][x+1] = 'U';
        day[y+2][x+1] = 'U';
    }else if(dir==2){
        day[y+0][x+0] = 'U';
        day[y+0][x+1] = 'U';
        day[y+0][x+2] = 'U';
        day[y+1][x+0] = 'U';
        day[y+1][x+2] = 'U';
    }else if(dir==3){
        day[y+0][x+0] = 'U';
        day[y+1][x+0] = 'U';
        day[y+2][x+0] = 'U';
        day[y+0][x+1] = 'U';
        day[y+2][x+1] = 'U';
    }
};
void V(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'V';
        day[y+1][x+0] = 'V';
        day[y+2][x+0] = 'V';
        day[y+2][x+1] = 'V';
        day[y+2][x+2] = 'V';
    }else if(dir==1){
        day[y+0][x+2] = 'V';
        day[y+1][x+2] = 'V';
        day[y+2][x+0] = 'V';
        day[y+2][x+1] = 'V';
        day[y+2][x+2] = 'V';
    }else if(dir==2){
        day[y+0][x+0] = 'V';
        day[y+0][x+1] = 'V';
        day[y+0][x+2] = 'V';
        day[y+1][x+2] = 'V';
        day[y+2][x+2] = 'V';
    }else if(dir==3){
        day[y+0][x+0] = 'V';
        day[y+0][x+1] = 'V';
        day[y+0][x+2] = 'V';
        day[y+1][x+0] = 'V';
        day[y+2][x+0] = 'V';
    }
};
void W(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'W';
        day[y+0][x+1] = 'W';
        day[y+1][x+1] = 'W';
        day[y+1][x+2] = 'W';
        day[y+2][x+2] = 'W';
    }else if(dir==1){
        day[y+0][x+1] = 'W';
        day[y+0][x+2] = 'W';
        day[y+1][x+0] = 'W';
        day[y+1][x+1] = 'W';
        day[y+2][x+0] = 'W';
    }else if(dir==2){
        day[y+0][x+0] = 'W';
        day[y+1][x+0] = 'W';
        day[y+1][x+1] = 'W';
        day[y+2][x+1] = 'W';
        day[y+2][x+2] = 'W';
    }else if(dir==3){
        day[y+0][x+2] = 'W';
        day[y+1][x+1] = 'W';
        day[y+1][x+2] = 'W';
        day[y+2][x+0] = 'W';
        day[y+2][x+1] = 'W';
    }
};
void Z(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'Z';
        day[y+0][x+1] = 'Z';
        day[y+1][x+1] = 'Z';
        day[y+2][x+1] = 'Z';
        day[y+2][x+2] = 'Z';
    }else if(dir==1){
        day[y+0][x+2] = 'Z';
        day[y+1][x+0] = 'Z';
        day[y+1][x+1] = 'Z';
        day[y+1][x+2] = 'Z';
        day[y+2][x+0] = 'Z';
    }else if(dir==2){
        day[y+0][x+1] = 'Z';
        day[y+0][x+2] = 'Z';
        day[y+1][x+1] = 'Z';
        day[y+2][x+1] = 'Z';
        day[y+2][x+0] = 'Z';
    }else if(dir==3){
        day[y+0][x+0] = 'Z';
        day[y+1][x+0] = 'Z';
        day[y+1][x+1] = 'Z';
        day[y+1][x+2] = 'Z';
        day[y+2][x+2] = 'Z';
    }
};
void F(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+1] = 'F';
        day[y+0][x+2] = 'F';
        day[y+1][x+0] = 'F';
        day[y+1][x+1] = 'F';
        day[y+2][x+1] = 'F';
    }else if(dir==1){
        day[y+0][x+0] = 'F';
        day[y+1][x+0] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+2] = 'F';
        day[y+2][x+1] = 'F';
    }else if(dir==2){
        day[y+0][x+1] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+2] = 'F';
        day[y+2][x+0] = 'F';
        day[y+2][x+1] = 'F';
    }else if(dir==3){
        day[y+0][x+1] = 'F';
        day[y+1][x+2] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+0] = 'F';
        day[y+2][x+0] = 'F';
    }else if(dir==4){
        day[y+0][x+1] = 'F';
        day[y+0][x+0] = 'F';
        day[y+1][x+2] = 'F';
        day[y+1][x+1] = 'F';
        day[y+2][x+1] = 'F';
    }else if(dir==5){
        day[y+0][x+1] = 'F';
        day[y+1][x+2] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+0] = 'F';
        day[y+2][x+0] = 'F';
    }else if(dir==6){
        day[y+0][x+1] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+0] = 'F';
        day[y+2][x+2] = 'F';
        day[y+2][x+1] = 'F';
    }else if(dir==7){
        day[y+0][x+2] = 'F';
        day[y+1][x+2] = 'F';
        day[y+1][x+1] = 'F';
        day[y+1][x+0] = 'F';
        day[y+2][x+1] = 'F';
    }
};
void L(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'L';
        day[y+1][x+0] = 'L';
        day[y+2][x+0] = 'L';
        day[y+3][x+0] = 'L';
        day[y+3][x+1] = 'L';
    }else if(dir==1){
        day[y+0][x+3] = 'L';
        day[y+1][x+0] = 'L';
        day[y+1][x+1] = 'L';
        day[y+1][x+2] = 'L';
        day[y+1][x+3] = 'L';
    }else if(dir==2){
        day[y+0][x+0] = 'L';
        day[y+0][x+1] = 'L';
        day[y+1][x+1] = 'L';
        day[y+2][x+1] = 'L';
        day[y+3][x+1] = 'L';
    }else if(dir==3){
        day[y+0][x+3] = 'L';
        day[y+0][x+2] = 'L';
        day[y+0][x+1] = 'L';
        day[y+0][x+0] = 'L';
        day[y+1][x+0] = 'L';
    }else if(dir==4){
        day[y+0][x+1] = 'L';
        day[y+1][x+1] = 'L';
        day[y+2][x+1] = 'L';
        day[y+3][x+1] = 'L';
        day[y+3][x+0] = 'L';
    }else if(dir==5){
        day[y+0][x+3] = 'L';
        day[y+0][x+2] = 'L';
        day[y+0][x+1] = 'L';
        day[y+0][x+0] = 'L';
        day[y+1][x+3] = 'L';
    }else if(dir==6){
        day[y+0][x+0] = 'L';
        day[y+0][x+1] = 'L';
        day[y+1][x+0] = 'L';
        day[y+2][x+0] = 'L';
        day[y+3][x+0] = 'L';
    }else if(dir==7){
        day[y+0][x+0] = 'L';
        day[y+1][x+3] = 'L';
        day[y+1][x+2] = 'L';
        day[y+1][x+1] = 'L';
        day[y+1][x+0] = 'L';
    }
};
void N(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'N';
        day[y+1][x+0] = 'N';
        day[y+1][x+1] = 'N';
        day[y+2][x+1] = 'N';
        day[y+3][x+1] = 'N';
    }else if(dir==1){
        day[y+0][x+1] = 'N';
        day[y+0][x+2] = 'N';
        day[y+0][x+3] = 'N';
        day[y+1][x+0] = 'N';
        day[y+1][x+1] = 'N';
    }else if(dir==2){
        day[y+0][x+0] = 'N';
        day[y+1][x+0] = 'N';
        day[y+2][x+0] = 'N';
        day[y+2][x+1] = 'N';
        day[y+3][x+1] = 'N';
    }else if(dir==3){
        day[y+0][x+2] = 'N';
        day[y+0][x+3] = 'N';
        day[y+1][x+0] = 'N';
        day[y+1][x+1] = 'N';
        day[y+1][x+2] = 'N';
    }else if(dir==4){
        day[y+0][x+1] = 'N';
        day[y+1][x+1] = 'N';
        day[y+1][x+0] = 'N';
        day[y+2][x+0] = 'N';
        day[y+3][x+0] = 'N';
    }else if(dir==5){
        day[y+0][x+0] = 'N';
        day[y+0][x+1] = 'N';
        day[y+1][x+1] = 'N';
        day[y+1][x+2] = 'N';
        day[y+1][x+3] = 'N';
    }else if(dir==6){
        day[y+0][x+1] = 'N';
        day[y+1][x+1] = 'N';
        day[y+2][x+1] = 'N';
        day[y+2][x+0] = 'N';
        day[y+3][x+0] = 'N';
    }else if(dir==7){
        day[y+0][x+0] = 'N';
        day[y+0][x+1] = 'N';
        day[y+0][x+2] = 'N';
        day[y+1][x+2] = 'N';
        day[y+1][x+3] = 'N';
    }
};
void P(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+0] = 'P';
        day[y+0][x+1] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
        day[y+2][x+0] = 'P';
    }else if(dir==1){
        day[y+0][x+0] = 'P';
        day[y+0][x+1] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
        day[y+1][x+2] = 'P';
    }else if(dir==2){
        day[y+0][x+1] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
        day[y+2][x+0] = 'P';
        day[y+2][x+1] = 'P';
    }else if(dir==3){
        day[y+0][x+0] = 'P';
        day[y+0][x+1] = 'P';
        day[y+0][x+2] = 'P';
        day[y+1][x+1] = 'P';
        day[y+1][x+2] = 'P';
    }else if(dir==4){
        day[y+0][x+0] = 'P';
        day[y+0][x+1] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
        day[y+2][x+1] = 'P';
    }else if(dir==5){
        day[y+0][x+0] = 'P';
        day[y+0][x+1] = 'P';
        day[y+0][x+2] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
    }else if(dir==6){
        day[y+0][x+0] = 'P';
        day[y+1][x+0] = 'P';
        day[y+1][x+1] = 'P';
        day[y+2][x+0] = 'P';
        day[y+2][x+1] = 'P';
    }else if(dir==7){
        day[y+0][x+1] = 'P';
        day[y+0][x+2] = 'P';
        day[y+1][x+1] = 'P';
        day[y+1][x+2] = 'P';
        day[y+1][x+0] = 'P';
    }
};
void Y(int x,int y,int dir){
    if(dir==0){
        day[y+0][x+1] = 'Y';
        day[y+1][x+0] = 'Y';
        day[y+2][x+1] = 'Y';
        day[y+3][x+1] = 'Y';
        day[y+1][x+1] = 'Y';
    }else if(dir==1){
        day[y+0][x+0] = 'Y';
        day[y+0][x+1] = 'Y';
        day[y+0][x+2] = 'Y';
        day[y+0][x+3] = 'Y';
        day[y+1][x+1] = 'Y';
    }else if(dir==2){
        day[y+0][x+0] = 'Y';
        day[y+1][x+0] = 'Y';
        day[y+2][x+0] = 'Y';
        day[y+3][x+0] = 'Y';
        day[y+2][x+1] = 'Y';
    }else if(dir==3){
        day[y+0][x+2] = 'Y';
        day[y+1][x+0] = 'Y';
        day[y+1][x+1] = 'Y';
        day[y+1][x+2] = 'Y';
        day[y+1][x+3] = 'Y';
    }else if(dir==4){
        day[y+0][x+0] = 'Y';
        day[y+1][x+0] = 'Y';
        day[y+2][x+0] = 'Y';
        day[y+3][x+0] = 'Y';
        day[y+1][x+1] = 'Y';
    }else if(dir==5){
        day[y+0][x+1] = 'Y';
        day[y+1][x+0] = 'Y';
        day[y+1][x+1] = 'Y';
        day[y+1][x+2] = 'Y';
        day[y+1][x+3] = 'Y';
    }else if(dir==6){
        day[y+0][x+1] = 'Y';
        day[y+1][x+1] = 'Y';
        day[y+2][x+1] = 'Y';
        day[y+3][x+1] = 'Y';
        day[y+2][x+0] = 'Y';
    }else if(dir==7){
        day[y+0][x+0] = 'Y';
        day[y+0][x+1] = 'Y';
        day[y+0][x+2] = 'Y';
        day[y+0][x+3] = 'Y';
        day[y+1][x+2] = 'Y';
    }
};
int main(){
    for(int k=0;k<8;k++){
        resetDay();
        Y(1,0,k);
        printf("%d\n",k);
        printDay();
        printf("\n");
    }
    
}
