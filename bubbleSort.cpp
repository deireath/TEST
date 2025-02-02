#include <iostream>

void bubbleSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }
    }

}

int main(){
    int n;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> n;
    

    int myarray[n];
     std::cout << "Enter " << n <<" integers separated by spaces : " << std::endl;
    for(int i = 0; i < n; i++){
         std::cin >> myarray[i];
    }

    std::cout << "Before sort: " << std::endl;
        for(int i = 0; i < n; i++){
            std::cout << myarray[i] << " ";
        }
    std::cout << std::endl;

    bubbleSort(myarray, n);

std::cout << "After sort: " << std::endl;
        for(int i = 0; i < n; i++){
            std::cout << myarray[i] << " ";
        }

    return 0;
}