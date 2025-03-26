#include <iostream>
using namespace std;

int main() 
{
    float x1, y1, z1, x2, y2, z2;
    char jawab;
    
    do
    {
		cout << "Masukkan Persamaan Linear x1: ";
		cin >> x1;
		cout << "Masukkan Persamaan Linear y1: ";
		cin >> y1;
		cout << "Masukkan Persamaan Linear z1: ";
		cin >> z1;
 
		cout << "Masukkan Persamaan Linear x2: ";
		cin >> x2;
		cout << "Masukkan Persamaan Linear y2: ";
		cin >> y2;
		cout << "Masukkan Persamaan Linear z2: ";
		cin >> z2;
    
		float D = x1 * y2 - x2 * y1;
    
		if (D == 0) 
		{
			cout << "Sistem persamaan tidak memiliki solusi." << endl;
		}
		else 
		{
			float Dx = z1 * y2 - z2 * y1;
			float Dy = x1 * z2 - x2 * z2;
			float x = Dx / D;
			float y = Dy / D;
			cout << "Solusi sistem persamaan linear:" << endl;
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
		cout << "Apakah ingin melakukan proses lagi (Y/N)? ";
		cin >> jawab;
		system("cls");
	}
	
    while ((jawab == 'Y')||(jawab == 'y'));
    return 0;
}