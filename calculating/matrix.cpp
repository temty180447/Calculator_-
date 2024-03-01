#include <iostream>
using namespace std;

void createMatrix(int row,int col,double x[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> x[i][j];
        }
    }
}

void showMatrix(double ans[][20], int row,int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }
}

void multiplyC(int c,int row, int col, double a[][20], double ans[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[i][j] = a[i][j] * c;
        }
    }
}

void sumMatrix(int row, int col, double a[][20], double b[][20], double ans[][20],char sym){
    if(sym == '+'){
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
    int ord;   
    cin >> ord;
    
    double a[20][20],b[20][20],ans[20][20];
    int row1,col1,row2,col2;
    
    switch(ord){
        case 1://คูณค่าคงที่เข้าเมทริกซ์
        {
            cin >> row1 >> col1;
            createMatrix(row1,col1,a);

            int c;
            cin >> c;
            
            multiplyC(c,row1,col1,a,ans);
            showMatrix(ans,row1,col1);
            break;
        }
        case 2://บวกลบเมทริกซ์
        {
            cin >> row1 >> col1;
            createMatrix(row1,col1,a);
            
            cin >> row2 >> col2;
            createMatrix(row2,col2,b);
            
            if((row1 != row2) || (col1 != col2)) break;
            
            char sym;
            cin >> sym;
            
            sumMatrix(row1,col1,a,b,ans,sym);
            showMatrix(ans,row1,col1);
            break;
        }
        case 3://คูณเมทริกซ์
        {
            cin >> row1 >> col1;
            createMatrix(row1,col1,a);
            
            cin >> row2 >> col2;
            createMatrix(row2,col2,b);
            
            if(row2 != col1) break;

            multiplyMatrix(row1,col1,col2,a,b,ans);
            showMatrix(ans,row1,col2);
            break;
        }
        case 4://หาดีเทอร์มิแนนท์
        {
            cin >> row1 >> col1;
            if(row1 != col1) break;
            
            createMatrix(row1,col1,a);

            cout << det(a,row1);
            break;
        }
        case 5://แก้สมการหลายตัวแปร 
        {
            cin >> row1 >> col1;
            if(row1 != col1) break;
            
            createMatrix(row1,col1,a);
            createMatrix(row1,1,b);
            
            double adj[20][20];
            
            adjoint(row1,a,adj);
        
            if(det(a,row1) == 0) break;

            inverse(row1,det(a,row1),adj);
            multiplyMatrix(row1,col1,1,adj,b,ans);
            showMatrix(ans,row1,1);
            break;
        }
    }
    
    return 0;
}