#include <iostream>

using namespace std;

void showMatrix(double ans[][20], int row,int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }
}

void multiplyC(int c,int row, int col, double mt1[][20], double ans[][20]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ans[i][j] = mt1[i][j] * c;
        }
    }
}

void sumMatrix(int row, int col, double mt1[][20], double mt2[][20], double ans[][20],char sym){
    if(sym == '+'){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = mt1[i][j] + mt2[i][j];
            }
        }
    }
    else {
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = mt1[i][j] - mt2[i][j];
            }
        }
    }
}

void multiplyMatrix(int row1, int col1, int col2, double mt1[][20], double mt2[][20], double ans[][20]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                ans[i][j] += mt1[i][k] * mt2[k][j];
            } 
        }
    }
}

double det(double mt1[][20], int row) { //recursive func
    double ans = 0;
    double submt[20][20];

    if (row == 1) { //มิติ 1x1
        return mt1[0][0];
    } else if (row == 2) { //มิติ 2x2
        return mt1[0][0] * mt1[1][1] - mt1[0][1] * mt1[1][0];
    } else { //นอกเหนือจากนั้น
        for (int k = 0; k < row; k++) {
            int subi = 0;
            for (int i = 1; i < row; i++) {
                int subj = 0; 
                for (int j = 0; j < row; j++) {
                    if (j == k) continue;
                    submt[subi][subj] = mt1[i][j];
                    ++subj;
                }
                ++subi;
            }
            ans += (k % 2 == 0 ? 1 : -1) * mt1[0][k] * det(submt,row - 1);
        }
    }
    return ans;
}

int main()
{
    int ord, c, row1, col1, row2, col2;
    cin >> row1 >> col1;
    
    double a[20][20];
    
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            cin >> a[i][j];
        }
    }

    double ans[20][20];

    cin >> ord;
    switch(ord){
        case 1:
        {
            cin >> c;
            
          
            multiplyC(c,row1,col1,a,ans);
            showMatrix(ans,row1,col1);
            break;
        }
        case 2:
        {
            cin >> row2 >> col2;
    
            double b[20][20];
            for(int i = 0; i < row2; i++){
                for(int j = 0; j < col2; j++){
                    cin >> b[i][j];
                }
            }
            
            char sym;
            cin >> sym;
            
            if((row1 != row2) || (col1 != col2)) break;
            
            sumMatrix(row1,col1,a,b,ans,sym);
            showMatrix(ans,row1,col1);
            break;
        }
        case 3:
        {
            cin >> row2 >> col2;
            
            double c[20][20];
            for(int i = 0; i < row2; i++){
                for(int j = 0; j < col2; j++){
                    cin >> c[i][j];
                }
            }
            
            if(row2 != col1) break;

            multiplyMatrix(row1,col1,col2,a,c,ans);
            showMatrix(ans,row1,col2);
            break;
        }
        case 4:
        {
            if(row1 != col1) break;

            cout << det(a,row1);
            break;
        }
    }
    
    return 0;
}
