//23070123014 Akshit Mathur
#include<iostream>
using namespace std;
int main() {
    int i, j, r, c;
    cout << "Enter number of rows: " << endl;
    cin >> r;
    cout << "Enter number of columns: " << endl;
    cin >> c;
    int arr[r][c],Tarr[r][c];  
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    cout << "The array elements are: " << endl;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
    for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        Tarr[i][j] = arr[j][i];
    }
}
 cout << "The tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
        cout << Tarr[i][j] << " ";
        
    }
    cout<<endl;
} 

    return 0;
}
//output
/*Enter number of rows:
3
Enter number of columns:
3
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3
Enter element at position (2, 1): 4
Enter element at position (2, 2): 5
Enter element at position (2, 3): 6
Enter element at position (3, 1): 7
Enter element at position (3, 2): 8
Enter element at position (3, 3): 9
The array elements are:
1 2 3
4 5 6
7 8 9
The tranpose of matrix is:
1 4 7
2 5 8
3 6 9*/
