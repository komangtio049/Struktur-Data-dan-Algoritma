#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int queue[MAX_SIZE];
int front = -1, rear = -1;

bool Kosong()
{
    return front == -1 && rear == -1;
}

bool Penuh()
{
    return (rear == MAX_SIZE - 1 && front == 0) || (rear == front - 1);
}

void enqueue()
{
    if (Penuh())
    {
        cout << "Queue sudah penuh" << endl;
    }
    else if (Kosong())
    {
        front++;
        rear++;
        queue[rear] = rear + 1;
        cout << "Elemen berhasil ditambahkan ke dalam queue" << endl;
    }
    else
    {
        rear++;
        queue[rear] = rear + 1;
        cout << "Elemen berhasil ditambahkan ke dalam queue" << endl;
    }
}

void dequeue()
{
    if (Kosong())
    {
        cout << "Queue kosong" << endl;
    }
    else if (front == rear)
    {
        cout << "Elemen berhasil dihapus dari queue" << endl;
        front = rear = -1;
    }
    else
    {
        cout << "Elemen berhasil dihapus dari queue" << endl;
        front++;
    }
}

void display()
{
    if(!Kosong())
    {
        cout << "Data elemen pada queue : " << endl;
        for(int a = front; a <= rear; a++)
        {
            if (a > MAX_SIZE || a > rear) // menambahkan kondisi a > rear
            {
                break;
            }
            else
            {
                cout << a-front+1 << "." << queue[a] << endl;
            }
        }
    }
    else
    {
        cout << "Tidak terdapat elemen pada queue" << endl;
    }
    if(Penuh())
    {
        cout << "Queue penuh" << endl;
    }
}


int main()
{
    int menu;

    do 
    {
        cout << "Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Cek kondisi queue" << endl;

        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                if (Kosong())
                {
                    cout << "Queue kosong" << endl;
                }
                else if (Penuh())
                {
                    cout << "Queue penuh dengan " << MAX_SIZE << " elemen" << endl;
                }
                else
                {
                    cout << "Jumlah elemen pada queue: " << rear - front + 1 << endl;
                }
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }

        cout << endl;

    } while (menu != 0);

    return 0;
}
