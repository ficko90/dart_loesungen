#include <iostream>
using namespace std;

int Max(int array[], int n)
{
	int i;

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(array[0] < array[i])
           array[0] = array[i];
    }

    return array[0];
}

int FindNextInt(int y)
{
	int arr[7] = { 225, 256, 232, 1036, 532, 224, 10006 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int max = Max(arr, length);
	max++;
	int result = max;

	for(int i = 0; i < length; i++) //durch kompletten Array laufen
	{
		if(arr[i] > y && result > arr[i]) //falls y kleiner als arr[i] sein soll, muss auch geprüft werden ob auch result größer als arr[i] ist
		{
			result = arr[i];
		}
	}

	if(result == max)
	{
		result = 0;
	}
	
	return result;
}

int main()
{
	cout << FindNextInt(226) << endl;
	cout << FindNextInt(250) << endl;
	cout << FindNextInt(2000) << endl;
	cout << FindNextInt(1000) << endl;
}