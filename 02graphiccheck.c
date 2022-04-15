#include<stdio.h>
char day[6][13];
int check(int cx,int cy,char text){
    if(day[cy][cx]=='0'){
        day[cy][cx] = text;
        return 1;
    }else{
        return 0;
    }
};
void resetDay(){
    for(int a=0;a<6;a++){
        for(int b=0;b<13;b++){
            day[a][b] = '0';
        }
    }
};
void printDay(){
    for(int a=0;a<6;a++){
        for(int b=0;b<13;b++){
            printf("%c, ",day[a][b]);
        }
        printf("\n");
    }
};
int X(int x,int y,int dir){
    if(dir==0){
        if(y>10 || x>3){
            printf("big(%d,%d)",x,y);
            return 0;
        }
        if(check(y+0,x+1,'X')==0){
            printf("e1(%d,%d)",x,y);
            return 0;
        }
        if(check(y+1,x+0,'X')==0){
            printf("e2(%d,%d)",x,y);
            return 0;
        }
        if(check(y+1,x+1,'X')==0){
            printf("e3(%d,%d)",x,y);
            return 0;
        }
        if(check(y+2,x+1,'X')==0){
            printf("e4(%d,%d)",x,y);
            return 0;
        }
        if(check(y+1,x+2,'X')==0){
            printf("e5(%d,%d)",x,y);
            return 0;
        }
        return 1;
    }else{
        printf("nodir");
        return 0;
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
    for(int i=0;i<6;i++){
        for(int j=0;j<13;j++){
            for(int k=0;k<8;k++){
                resetDay();
                if(X(i,j,k)==0){
                    break;
                }
                printf("(%d,%d)\n",i,j);
                printDay();
                printf("\n");
            }
        }
    }
}
