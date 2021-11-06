                    TASK 1

The following lines in their respective question have errors.

Q-1 printf(" Enter a number" 4589);

Q-2 if(arr[i]%value == 0)

Q-3 for(int i=1;i <= 4;j--) 

Q-4 a>10?printf("Yes");:printf("No"); 

Q-5 cout>>"*";

Q-6 z=int(“Enter a number:”) 

    prnt(“They are equal');

Q-7 cin>>code_chef.my_variable; 

    class test{ 
        int my_variable; 
    } 

Q-8 sum=+i; 

    break

Q-9 int length 

    int array(length]; 

    int min=array[0];max=array[0]; 

    else if(array[i]<<min) 

Q-10    *include <string.h>

        main() 

        scanf("%d";&t)

        char s[100001], 

        while(t+-){

        if(s[i]===s[i+1])


                    Task 2

The codes for the respective questions are below.

Q-1 

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, j, count;
    char str[25][25], temp[25];
    cout << "Enter the no. of strings" << endl;
    cin >> count;

    cout << "Enter the strings" << endl;
    for (i = 0; i < count; i++)
        cin >> str[i];
    for (i = 0; i < count; i++)
        for (j = i + 1; j < count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    cout << "Sorted Strings" << endl;
    for (i = 0; i < count; i++)
        cout << str[i] << endl;

    return 0;
}

Q-2 

#include <iostream>
using namespace std;

int main()
{
    int size,flag=0;
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
    for (i = 2; i <= arr[key - 1] / 2; i++)
    {
       if (arr[key - 1] % i == 0) 
       {
          flag = 1;
          break;
       }
    }
    if (flag == 0)
      cout << arr[key - 1];
      
    return 0;
}

Q-3

#include <iostream>
using namespace std;

int main()
{

    char text = 'A';

    int add = 2, i = 32, count = 0;

    while (count < 13)
    {
        cout << text << endl;
        text = text + i + add;
        i = i * (-1);
        count++;
    }

    return 0;
}

Q-4  

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int input, count = 0;
    cin >> input;
    int temp = input;

    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    int num = input * input;
    int temp1 = num, temp2 = num;

    int lastNum = temp1 % (int(ceil(pow(10, count))));
    int firstNum = temp2 / (int(ceil(pow(10, count))));

    if (firstNum + lastNum == input)
        cout << "Chef's Number";
    else
        cout << "Not Chef's Number";
}
