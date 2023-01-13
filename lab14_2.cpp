#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool im[][M],int s,int x,int y){
    for (int p = 0; p < N; p++)
    {
       
        for (int c = 0; c < M; c++)
        {
            
           if (sqrt(pow(p-x,2)+pow(c-y,2))<=(s-1))
           {
                if (im[p][c] == 0)
                 {
                    im[p][c] = 1;
                 }
            
           
             }   

        } 
    }
}

void showImage(const bool imp[N][M]){
    for (int i = 0; i < 72; i++)
    {
        cout <<"-";
    }
    cout <<"\n";
    for (int p = 0; p < N; p++)
    {
        cout <<"|";
        for (int c = 0; c < M; c++)
        {
            
           if (imp[p][c] == 1)
           {
            cout <<"*";
           }else{
            cout <<" ";
           }
           
        }
        cout <<"|";
        cout <<"\n";
    }
      for (int l = 0; l < 72; l++)
    {
        cout <<"-";
    }
    cout <<"\n";
}