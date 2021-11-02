// Q - 1

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int input, count = 0;
//     cin >> input;
//     int temp = input;

//     while (temp > 0)
//     {
//         temp = temp / 10;
//         count++;
//     }

//     int num = input * input;
//     int temp1 = num, temp2 = num;

//     int lastNum = temp1 % (int(ceil(pow(10, count))));
//     int firstNum = temp2 / (int(ceil(pow(10, count))));

//     if (firstNum + lastNum == input)
//         cout << "Chef's Number";
//     else
//         cout << "Not Chef's Number";
// }

// Q-2

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    int i, temp, key;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cin >> key;

    for (i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << arr[key - 1];

    return 0;
}

// Q - 3

// #include <iostream>
// using namespace std;
// int main()
// {

//     char text = 'A';

//     int add = 2, i = 32, count = 0;

//     while (count < 13)
//     {
//         cout << text << endl;
//         text = text + i + add;
//         i = i * (-1);
//         count++;
//     }

//     return 0;
// }
