#include <iostream>

using namespace std;

void showMetrix(double *pAns, int n){
    for(int i = 0; i < n; i++){
        cout << *(pAns+i) <<" ";
        if(i % n-1 == 0) cout << endl;
    }
}

void multiplyC(int c, double *pnt, int n, double *pAns){
    for(int i = 0; i < n; i++) *(pAns+i) = *(pnt+i)*c;
}

void sumMetrix(int n, double *pnt1, double *pnt2, double *pAns,bool plus){
    if(plus)for(int i = 0; i < n; i++) *(pAns+i) = *(pnt1+i)+*(pnt2+i);
    else for(int i = 0; i < n; i++) *(pAns+i) = *(pnt1+i)-*(pnt2+i);
}

//void multiplyMetrix(int row , int col,int n, double *pnt1, double *pnt2, double *pAns){
    //for(int k = 0; k < n; k++){
        //for(int i = 0; i < row; i++){
            //for(int j = 0; j < col; j++){
                //*(pAns+k) += *(*(pnt1+i)+j) * *(*(pnt2+j)+i);
            //}
            //break;
        //}  
    //}                                                                                                                                                                                                                                                                                                                                                                                                   
//}

int main()
{
    int ord,n,c,row1 , col1 , row2 , col2;
    cin >> row1 >> col1;
    
    double a[20][20];
    
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cin >> a[i][j];
        }
    }
    double (*pnt1)[20] = a;
    
    cin >> ord;
    switch(ord){
        case 1:
        {
            cin >> c;
            
            n = col1*row1;
            double ans1[20][20];
            double (*pAns1)[20] = ans1;
            multiplyC(c,&a[0][0],n,&ans1[0][0]);
            showMetrix(&ans1[0][0],n);
            break;
        }
        case 2:
        {
            cin >> row2 >> col2;
    
            double b[20][20];
            double (*pnt2)[20] = b;
            for(int i = 0; i < row2; i++){
                for(int j = 0; j < col2; j++){
                    cin >> b[i][j];
                }
            }
            
            char sym;
            bool plus;
            cin >> sym;
            if(sym == '+') plus = 1;
            else plus = 0;
            
            if((row1 != row2) || (col1 != col2)) break;
            
            double ans2[20][20];
            double (*pAns2)[20] = ans2;
            n = col1*row1;
            sumMetrix(n,&a[0][0],&b[0][0],&ans2[0][0],plus);
            showMetrix(&ans2[0][0],n);
            break;
        }
        //case 3:
        //{
            cin >> row2 >> col2;
            
            double c[20][20];
            double (*pnt3)[20] = c;
            for(int i = 0; i < row2; i++){
                for(int j = 0; j < col2; j++){
                    cin >> c[i][j];
                }
            }
            
            if(row2 != col1) break;
            double ans3[20][20];
            double (*pAns3)[20] = ans3;
            int n = col2*row1;
            //multiplyMetrix(row1,col2,n,&a[0][0],&c[0][0],&ans3[0][0]);
            showMetrix(&ans3[0][0],n);
        //}
    }
    
    return 0;
}
