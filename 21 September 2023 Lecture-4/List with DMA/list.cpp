#include <iostream>
using namespace std;

template <class T>
class List {
private:
    T* arr;
    T* ptr;
    int filled_size;
    int total_size;

public:
    List(int a) {
        ptr = arr = new T[a];
        filled_size = -1;
        total_size = a;
    }

    ~List() {
        delete[] arr;
    }

    void start() {
        ptr = arr; // Bring ptr to the start of the array
    }

    void end() {
        if (!(filled_size > -1)) {
            ptr = arr;
        }
        else {
            ptr = arr + filled_size;
        }
    }

    void next() {
        ptr = ptr + 1; // Move pointer ptr to next location
    }

    void previous() {
        ptr = ptr - 1;
    }

    void addElement(T t, int i) {
        start();
        if (filled_size + 1 >= total_size) {
            T* B = new T[total_size+1];
            total_size++;

            for (int j = 0; j <= filled_size; j++) {
                B[j] = *(ptr);
                ptr++;
            }
            B[++filled_size]=t;
            delete[] arr;
            arr = B;
            start();
            return ;
        }
        else if (i > filled_size + 1) {
            cout << "Array out of bound! " << endl;
        }
        else {
            if (filled_size == -1) {
                *ptr = t;
                filled_size++;
            }
            else {
                end();
                for (int j = filled_size; j >= i; j--) {
                    *(ptr + 1) = *ptr;
                    previous();
                }
                next();
                *ptr = t;
                filled_size++;
                return ;
            }
        }
    }

    void addElement(T t) {
        addElement(t, filled_size + 1);
    }

    void deleteElement(T t) {
        if (filled_size == -1) {
            cout << "Array is empty\n";
        }
        else {
            start();
            for (int i = 0; i <= filled_size; i++) {
                if (*ptr == t) {
                    for (int j = i; j < filled_size; j++) {
                        *ptr = *(ptr + 1);
                        next();
                    }
                    filled_size--;
                    start(); // Update ptr to the start of the array
                    cout << "Element Deleted!\n";
                    return;
                }
                next();
            }
        }
    }

    friend ostream &operator<<(ostream &out, List<T> &t) {
        t.start();
        for (int i = 0; i <= t.filled_size; i++) {
            out << *(t.ptr) << " ";
            t.next();
        }
        return out;
    }
};

int main() {
    List<int> temp(6);
    temp.addElement(10);
    temp.addElement(20);
    temp.addElement(30);
    temp.addElement(40);
    temp.addElement(50);
    temp.addElement(60);
    temp.addElement(70);
    cout << temp << endl;
    temp.deleteElement(30);
    cout << temp << endl;
    temp.addElement(300, 1);
    cout << temp<<endl;
    temp.addElement(30000);
    cout << temp;
}
