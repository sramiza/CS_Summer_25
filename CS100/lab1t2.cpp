#include <iostream>

using namespace std;

int main(){

int width;
int t_len;
int tiles;
int space;

cout << "Enter width of the wall = ";
cin >> width;
cout << "Enter length of a tile = ";
cin >> t_len;

space = width - t_len;
tiles = space/t_len;
space = width - (t_len * tiles);

cout << "Total Tiles used = " << tiles << endl;
cout << "Space left at the end = " << space << endl; 

return 0;
}