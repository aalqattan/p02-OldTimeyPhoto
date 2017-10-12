#include<iostream>
#include<vector>
#include<string>
#include "bitmap.h"


using namespace std;


int main()


{

string fileName;


cout<<"Welcome to image color changer :)"<<endl;
cout<<endl;
cout<<"Please enter the file name which should be windows bmp"<<endl;
cin>>fileName;



Bitmap image; //declear photo in Bitmap 

//if (fileName =="machupicchu.bmp")
//{
vector <vector < Pixel > > bmp;



Pixel rgb;
	
image.open ("machupicchu.bmp"); //read bmp file and convert it to pixel matrix

bool validBmp = image.isImage(); //verigy that file opened was a valid image

if (validBmp == true)
        {
        bmp = image.toPixelMatrix(); //convert bmp file to Matrix file. 

	int row = bmp.size();
	int cols = bmp [row].size();

 
	
	
		for(int i = 0; i < row; i++) 
	{
		for(int c= 0; c < cols; c++)
       {	  
	rgb = bmp [i][c];
	       
	 int b = rgb.blue;
         int g = rgb.green;
	 int r = rgb.red;

         int avg=(b + g + r) / 3;

		
     rgb.red =avg;
	 rgb.blue =avg;
	 rgb.green =avg;
	       
	
	  bmp[i][c]= rgb;
          }



}
}

else {
	cout<<" Please enter a valid file name"<<endl;
}
 

//else {
  //      cout<<"Please enter a valid file name which is (machupicchu.bmp) since we have only this image"<<endl;
    // }    



	  image.fromPixelMatrix(bmp);
          image.save("oldtimey.bmp");

return 0;

}
