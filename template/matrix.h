#include <iostream>

using namespace std;

const int MAXROWS=2;
const int MAXCOLS=3;

template <typename T1> class Matrix{
  private:
   T1 doubleArray[MAXROWS][MAXCOLS];
   int rows;
   int cols;

  public:
   //Constructor
   //Matrix();  //Set rows to MAXROWS and cols to MAXCOLS
	      //Initialize all the values of doubleArray to zero
    
   //Getter Functions
  // void printMatrix(); 

   //Setter Functions
   //void setMatrix(T1 [][MAXCOLS]); //set the doubleArray to what is sent
   //void addMatrix(T1 [][MAXCOLS]); //add an array to doubleArray
   //void addMatrix(Matrix otherMatrix);

   //No destructor needed


   Matrix(){
   rows = MAXROWS;
   cols = MAXCOLS;
   for (int i=0; i< rows; i++){
      for(int j=0; j< cols; j++){
	      doubleArray[i][j] = '\0';
      }
   }
}   

void printMatrix(){
   for (int i=0; i< rows; i++){
      for(int j=0; j< cols; j++){
	      cout << doubleArray[i][j] << "   ";
      }
      cout << endl;
   }
}

void setMatrix(T1 otherArray[][MAXCOLS]){
   for (int i=0; i< rows; i++){
      for(int j=0; j< cols; j++){
	      doubleArray[i][j] = otherArray[i][j];
      }
   }
}

void addMatrix(T1 otherArray[][MAXCOLS]){
   for (int i=0; i< rows; i++){
      for(int j=0; j< cols; j++){
	      doubleArray[i][j] += otherArray[i][j];
      }
   }
}

void addMatrix(Matrix otherMatrix){
   addMatrix(otherMatrix.doubleArray);
}
};