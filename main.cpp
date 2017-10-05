#include<iostream>
#include<vector>
#include<string>
#include "bitmap.h"


using namespace std;


int main()

{

Bitmap photo;
photo.open("machupicchu.bmp");



vector <vector < Pixel > > bmp;

bmp = photo.toPixelMatrix();

cout<<"It is "<<bmp[0].size()<<" pixels wide and "<<bmp.size()<<" pixels high."<<endl;



//decleare variables to the user to store the input. 
// output to the user to enter the file name of an image. 
// store the uer's input as a file name. 
//add the code to convert the image so every pixel in it's greyscale.
// save the file as oldtimey.bmp



return 0;

}
