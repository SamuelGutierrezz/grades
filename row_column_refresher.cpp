#include <iostream>
using namespace std;

int main()
{
    double grades[8][7] = {0};
    
    //sams grades
    grades[0][0] = 49, grades[0][1] = 30, grades[0][2] = 38, grades[0][3] = 42;
    
    //samanthas grades
    grades[1][0] = 67, grades[1][1] = 28, grades[1][2] = 39, grades[1][3] = 35;
    
    for(int row = 0; row < 8; row++){
        cout << "ROW " <<  row << ": ";
        cout << endl;
        for(int column = 0; column < 4; ++column)
        cout << grades[row][column] << " ";
        
        cout << endl;
    }
    
    
    return 0;
    
    
    
}