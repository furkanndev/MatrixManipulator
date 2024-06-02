
#include <iostream>

using namespace std;


int assing_random_array(int array[][5],int size)
{

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            array[i][j] = rand() %11;
        }
    }
    
}


void print_array(int array[][5],int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << array[i][j]<< " ";
        }
        cout << endl;
    }
    
}



int main()
{

    while (true)
    {
        // A ve B Matrixleri tanımlandı.
        static int A[5][5]; 
        assing_random_array(A,5);


        static int B[5][5];
        assing_random_array(B,5);


        //A ve B Matrixleri bastırıldı.
        cout<< "\n**A Matrix**"<<endl;
        print_array(A,5);


        cout<< "\n**B Matrix**"<<endl;
        print_array(B,5);
        cout<< endl;



        //satır ve sütun degerleri giriyoruz.
        int row,column;
        while (true)
        {
        
            cout << "Row(1-5):";
            cin>> row;
            if(row>5 || row<1)
            {
                continue;
            }
            else
            {   while (true)
                {
                    cout << "Column(1-5):";
                    cin>> column;
                    if (column>5 || column<1)
                    {
                        cout << "Column(1-5):";
                        cin>> column;
                    }
                    else
                    {
                        break;
                    }
                }
            
             break;       
            } 
 
        }

        //satır ve sütun degisimleri yapıldı.
        int temp = A[row][column];      //A matrisindeki elemanı geçici(temp) değişkenine atadık
        A[row][column] =B[row][column]; // B matrisindeki elemanı A matrisine atadık
        B[row][column] = temp;          // A matrisinden aldığımız değeri geçici(temp) değişkenden B matrisine atadık.


        //Yeni A ve B Matrisleri bastırıldı.
        cout << "\n**A Matrix(NEW)**"<<endl;
        print_array(A,5);
        cout << "\n**B Matrix(NEW)**"<<endl;
        print_array(B,5);
        

        //C Matrisi Tanımlandı.
        static int C[5][5];
        for (int i = 1; i <= 5; i++) 
        {
            for (int j = 1; j <= 5; j++) 
            {
                C[i][j] = 0;
                for (int k = 1; k <= 5; k++) 
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // C Matrisi bastırıldı.
        cout << "\nC Matrix:"<<endl;
        print_array(C,5);
        cout<<endl;
        

        //Programdan Çıkış veya tekrar başlatma
        int select;
        cout<<"[0] ----> Exit\n[ELSE] ----> Restart\n";
        cout << "Please Select your selection:";
        cin>>select;
        if(select == 0)
        {
            cout<< "Hoscakalin...";
            break;
        }
        else
        {

        }






    }
return 0;
}
