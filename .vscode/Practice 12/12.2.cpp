#include <iostream>
#include <string>

using namespace std;





// void bubblesort(int* l, int* r) {
// 	int sz = r - l;
// 	if (sz <= 1) return;
// 	bool b = true;
// 	while (b) {
// 		b = false;
// 		for (int* i = l; i + 1 < r; i++) {
// 			if (*i > *(i + 1)) {
// 				swap(*i, *(i + 1));
// 				b = true;
// 			}
// 		}
// 		r--;
// 	}
// }







int main()
{
    float numbers[15];
    cout << "Please input the numbers: \n";
    for (int i=0; i != 15; i++ )
    {
        cin >> numbers[i];
    }

    for (int i; i != 15; i++)
    {
        for (int j; j != 15; j ++)
            if(numbers[i] >= numbers[j+1]) swap(numbers[i] , numbers[j+1]);
            else 
            numbers[i] = numbers[j];
    }
    
    cout << "Sorted numbers: \n" << numbers[15];
}   
