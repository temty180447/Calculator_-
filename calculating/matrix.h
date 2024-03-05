#include <iostream>
using namespace std;

/*void createMatrix(int row,int col,double x[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> x[i][j];
        }
    }
}*/

/*void showMatrix(double ans[][20], int row,int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }
}*/

void multiplyC(int c,int row, int col, double a[][20],double ans[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[i][j] = a[i][j] * c;
        }
    }
}

void sumMatrix(int row, int col, double a[][20], double b[][20],double ans[][20],bool sym){
    if(sym){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    else {
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = a[i][j] - b[i][j];
            }
        }
    }
}

void multiplyMatrix(int row1, int col1, int col2, double a[][20], double b[][20], double ans[][20]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            } 
        }
    }
}

double det(double a[][20], int row) { //recursive func
    double ans = 0;
    double submt[20][20];

    if (row == 1) { //มิติ 1x1
        return a[0][0];
    } else if (row == 2) { //มิติ 2x2
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    } else { //นอกเหนือจากนั้น
        for (int k = 0; k < row; k++) {
            int subi = 0;
            for (int i = 1; i < row; i++) {
                int subj = 0; 
                for (int j = 0; j < row; j++) {
                    if (j == k) continue;
                    submt[subi][subj] = a[i][j];
                    subj++;
                }
                subi++;
            }
            ans += (k % 2 == 0 ? 1 : -1) * a[0][k] * det(submt,row - 1);
        }
    }
    return ans;
}

void adjoint(int row,double a[][20],double adj[][20]){
    if(row == 2){
        swap(a[1][1],a[0][0]);
        adj[0][0] = a[0][0];
        adj[1][1] = a[1][1];
        adj[0][1] = a[0][1] * (-1);
        adj[1][0] = a[1][0] * (-1);
    }
    else if(row == 3){
        double cof[20][20];
        int cnt_k,cnt_l,one,two;
    
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cnt_k = 0;
                one = two = 1;
                for(int k = 0; k < 3; k++){
                    if(k == i) continue;
                    cnt_l = 0;
                    for(int l = 0; l < 3; l++){
                        if(l == j) continue;
                    
                        if(cnt_k == cnt_l) one *= a[k][l];
                        else two *= a[k][l];
                    
                        cnt_l++;
                    }
                    cnt_k++;
                }
                cof[i][j] = one - two;
            
                if((i + j) % 2 == 1) cof[i][j] = cof[i][j] *(-1);
            }
        }
    
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                adj[i][j] = cof[j][i];
            }
        }
    }
}

void inverse(int row,double det,double adj[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            adj[i][j] = adj[i][j] * (1.0/det);
        }
    }
}

int main()
{
    /*bool sym;
    int n,row,col;
    double a[20][20],b[20][20],ans[20][20],adj[20][20];

    multiplyC(n,row,col,a,ans); คูณค่าคงที่
    sumMatrix(row,col,a,b,ans,sym); บวกลบเมทริกซ์
    multiplyMatrix(row,col,col,a,b,ans); คูณเมทริกซ์
    det(a,row); หาดีเทอร์มีแนนท์

    adjoint(row,a,adj); หา แอดจ้อย เพื่อแก้สมการ
    multiplyMatrix(row,col,1,adj,b,ans); แก้สมการหลายตัวแปร*/

    return 0;
}