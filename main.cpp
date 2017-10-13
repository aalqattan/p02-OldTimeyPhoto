#include<iostream>
#include<vector>
#include<string>
#include "bitmap.h"


using namespace std;


int main()


{
    //declear variables outside the while loop. 
    bool validBmp;
    Bitmap image;
    Pixel rgb;
    string fileName;
    vector < vector < Pixel > > bmp;

    do{

        cout<<"Welcome to image color changer :)"<<endl;
        cout<<endl;
        cout<<"Please enter the file name which should be windows bmp"<<endl;
        cin>>fileName;



        image.open (fileName); //read bmp file and convert it to pixel matrix.
        validBmp = image.isImage(); //assign validBmp variable to the bmp image.
      



        } while (validBmp == false);



  
        bmp = image.toPixelMatrix(); //convert bmp file to Matrix file. 

    	int row = bmp.size();
	    int cols = bmp [0].size();

 
	
	
		for(int i = 0; i < row; i++) 
     	{
	    	for(int c= 0; c < cols; c++)
      	    {  
	            rgb = bmp[i][c];
	       
    	        int b = rgb.blue;
                int g = rgb.green;
	            int r = rgb.red;

                int avg=(b + g + r) / 3;

		
                rgb.red =avg;
	            rgb.blue =avg;
	            rgb.green =avg;
	       
	
	            bmp[i][c] = rgb;
        
            }  

        }   


     



	 image.fromPixelMatrix(bmp);
     image.save("oldtimey.bmp");


return 0;

}
